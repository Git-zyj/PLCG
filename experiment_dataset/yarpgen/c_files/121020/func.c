/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121020
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))) * (((var_15) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)300))))) : (((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */long long int) var_18)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) var_0)), ((short)14))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-299))) : (-3283163789879510617LL)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 4671444473902747518LL))))))) : (((/* implicit */int) (unsigned char)23))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46944)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)14740))));
                            var_24 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3])), (max((max((-7212636499152482045LL), (((/* implicit */long long int) 3003307604U)))), (arr_6 [i_0] [i_2])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_0] [i_0] [i_0] [i_0]));
                                var_26 = ((/* implicit */unsigned short) (unsigned char)237);
                                var_27 += ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_4]);
                                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 549989538))));
                            }
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) arr_10 [21LL] [21LL] [i_2] [i_3]))))) : (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_1] [i_2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_8))));
                            arr_20 [i_0] [i_0] [i_5] [i_6] = min((max((arr_18 [i_0] [i_1] [(short)19] [19LL]), (((/* implicit */long long int) arr_3 [(unsigned short)1] [(unsigned short)1] [i_5])))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) / (arr_18 [i_0] [i_1] [i_5] [i_6]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_7 = 2; i_7 < 23; i_7 += 4) 
                            {
                                var_30 += ((/* implicit */signed char) ((var_4) ? (arr_4 [i_7 - 1] [i_7 + 1] [i_7 + 1]) : (arr_4 [i_7 - 1] [i_7 - 1] [i_7 + 1])));
                                arr_23 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_15 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)689)))));
                                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(signed char)7])) >> (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_5] [i_6] [i_7 - 1])) >> (((((/* implicit */int) var_11)) - (46501)))))) : (arr_8 [i_0] [i_5] [i_5])));
                            }
                            var_32 = var_1;
                            var_33 = max(((+(((-7212636499152482041LL) % (((/* implicit */long long int) ((/* implicit */int) (short)13361))))))), (((((/* implicit */_Bool) arr_22 [i_0] [(unsigned short)2] [i_1] [i_5] [i_6])) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) var_5);
}
