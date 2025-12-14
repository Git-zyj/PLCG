/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105339
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) arr_3 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20955)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) ? ((-(arr_2 [i_0 + 1] [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0])))));
            arr_6 [i_0] [i_1] [0LL] |= ((/* implicit */short) (-(((((/* implicit */_Bool) 3940216817U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                arr_9 [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_7 [i_0 + 1] [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_10 [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-99))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)3])))) : (((/* implicit */int) (signed char)124))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (signed char)-95));
            }
            for (short i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((_Bool) ((unsigned int) arr_13 [i_3 + 2]))))));
                            var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 264241152U)) ? (arr_18 [i_0] [i_4] [i_0] [i_5] [i_5 + 1]) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)108))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2326163314U)))))) : (arr_16 [i_3] [i_3] [i_3 + 1] [i_3 - 1])))) ? ((~(((((/* implicit */_Bool) var_9)) ? (856435315740909854LL) : (((/* implicit */long long int) -967073731)))))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)0))))))))))));
            }
            for (short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
            {
                arr_22 [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((signed char) (+(var_0))))) : (((/* implicit */int) (signed char)-109))));
                var_17 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((max((((((/* implicit */_Bool) var_9)) ? (arr_14 [i_0] [i_1] [(short)13] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_6] [i_6 + 3] [i_1] [2]))))), (min((((/* implicit */long long int) (unsigned short)894)), (-8876289902288926892LL))))) + (2153392035647231111LL))) - (7LL)))));
            }
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((int) 967073732))) / (max((((arr_19 [10] [i_0] [10]) | (((/* implicit */long long int) arr_18 [(short)2] [i_0] [(short)4] [i_1] [i_0])))), (((/* implicit */long long int) ((signed char) var_7))))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_19 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) | (arr_7 [i_0 + 1] [(unsigned short)11] [i_0] [i_0 + 1])))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_27 [i_0 - 1] [i_0 - 1] [i_7])), (var_8)))) ? (((((/* implicit */_Bool) arr_13 [i_8])) ? (var_7) : (299326142U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_7)) ? ((+(1690224651U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) > (var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))))));
                arr_28 [2U] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) (signed char)94))))))))) ? (max((((/* implicit */unsigned long long int) var_5)), (min((arr_7 [i_0] [11] [(unsigned short)2] [7U]), (((/* implicit */unsigned long long int) var_11)))))) : (var_1)));
                arr_29 [11U] [i_0] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 288230376134934528ULL)))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0])) ? (arr_8 [i_0 + 1] [i_0 - 1] [i_8]) : (var_7))) : (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0])) ? (arr_8 [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17278)))))));
                arr_30 [i_7] [i_0] [i_0] [13U] = ((/* implicit */_Bool) arr_3 [i_0]);
            }
            arr_31 [i_0] [i_7] [i_0] = max((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-109)) ^ (((/* implicit */int) (signed char)126))))), (arr_21 [i_0] [i_0 - 1] [i_0] [i_7]))), (((/* implicit */unsigned int) arr_25 [i_0] [0U])));
        }
        arr_32 [i_0] = ((/* implicit */unsigned short) arr_27 [i_0 + 1] [6U] [i_0 + 1]);
        arr_33 [i_0] = ((/* implicit */short) (~(((int) (+(arr_14 [i_0] [i_0] [3ULL] [i_0 - 1]))))));
        var_21 ^= ((/* implicit */unsigned long long int) (short)0);
        var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 5521200995066633904ULL))));
    }
    var_23 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) ((((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)94)) & (-508629521)))))))));
}
