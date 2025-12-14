/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133222
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
    var_16 = var_1;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) arr_1 [i_0] [(unsigned short)16]);
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
        var_18 *= ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))))), (((signed char) (unsigned char)67))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (-1043665572)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 = min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) var_3)) % (3942906878112479797ULL))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1043665560)) ? (((((/* implicit */_Bool) var_5)) ? (-4530553622913886309LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-15417))))), (((/* implicit */long long int) (unsigned char)30))));
                            arr_15 [i_1] [0LL] [(unsigned short)0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_12 [i_1]))))) ? (((/* implicit */int) (unsigned char)175)) : ((+((~(((/* implicit */int) (short)32755))))))));
                            arr_16 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0]);
                        }
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1043665560)));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) var_12);
                            arr_21 [i_0] [(signed char)3] [i_1] [i_3] [i_5 - 1] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), ((~(var_3)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_11))) + (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_8 [1]))) != (max((8668213922735028376LL), (((/* implicit */long long int) arr_5 [i_5])))))))));
                            arr_22 [i_1] = ((/* implicit */_Bool) var_4);
                        }
                        var_24 -= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37405))) : (var_15))))) * (0ULL)));
                    }
                } 
            } 
            var_25 |= ((/* implicit */_Bool) var_6);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_6] [i_6]))) % (1793047647U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65523), (((/* implicit */unsigned short) (signed char)9)))))) : (((((/* implicit */_Bool) var_1)) ? (2501919652U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7)))))))));
                    arr_31 [i_6] [i_8] = ((/* implicit */short) arr_25 [i_6] [i_6]);
                }
                arr_32 [i_6] [i_6] [i_7] = ((/* implicit */int) max((min((1354947816292806826ULL), (4384269101797270009ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_6] [i_7] [16ULL] [i_7] [16ULL] [(short)9])))))));
                arr_33 [(unsigned short)12] [(unsigned short)12] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_14)), (((((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25123))))) * (arr_24 [8])))));
                arr_34 [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) 0LL)) ? (((((unsigned long long int) 2501919652U)) - (((/* implicit */unsigned long long int) 50274027)))) : (((/* implicit */unsigned long long int) arr_10 [i_6] [(_Bool)1] [i_7] [5ULL])));
            }
        } 
    } 
}
