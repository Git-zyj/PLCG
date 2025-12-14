/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174821
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
    var_17 ^= ((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_2))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) * ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_3))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_20 &= ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                var_21 &= ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3] [i_3 + 1]);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_3 [i_1 - 1]))));
            }
        }
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned short) ((_Bool) var_10))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37261)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37255))) : (14517847162868988126ULL)));
            arr_14 [(_Bool)1] |= min((min((((/* implicit */long long int) var_10)), (var_7))), (((/* implicit */long long int) arr_3 [i_1 - 1])));
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3811))) : ((-9223372036854775807LL - 1LL))));
                arr_17 [16ULL] |= ((/* implicit */unsigned long long int) var_12);
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_12 [i_4] [i_4]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_1 - 1] [i_4] [4LL] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)224);
                    var_27 |= ((/* implicit */_Bool) var_2);
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_25 [(unsigned char)4] [i_7] [i_5] [i_5] [i_7] [i_1 - 1] &= ((/* implicit */unsigned char) 1108307720798208LL);
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((/* implicit */int) var_10)))))));
                        var_29 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)37261)))));
                        var_30 *= ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_28 [i_1 - 1] [i_1 - 1] [i_4] [i_1] [i_8] [i_4] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) - (14517847162868988144ULL))))));
                    }
                    for (short i_9 = 3; i_9 < 17; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((_Bool) -1492377652)))));
                        var_33 |= ((/* implicit */unsigned short) (~(arr_12 [i_4] [i_5])));
                        arr_31 [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_20 [i_9 - 1] [i_4] [i_1] [i_6 - 1]);
                    }
                }
            }
            var_34 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */short) var_10)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_4)))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_35 &= ((/* implicit */unsigned char) var_8);
            var_36 |= ((/* implicit */short) arr_7 [i_1]);
            var_37 -= ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned char)0))))))) != (((/* implicit */int) var_14))));
        }
        var_38 *= ((/* implicit */short) max((((((/* implicit */_Bool) max((var_9), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (((var_12) / (var_7))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned char)15])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [(short)7] [i_1])) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(_Bool)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))))));
    }
}
