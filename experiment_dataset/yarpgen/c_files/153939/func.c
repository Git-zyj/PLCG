/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153939
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
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */unsigned char) var_10);
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((-877518085) - (var_6)))) - (((var_10) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22)))))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) + (((((/* implicit */long long int) var_2)) - (var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) & (((/* implicit */int) arr_3 [i_1] [i_0])))) : (((int) var_11)))) < (((/* implicit */int) ((((/* implicit */_Bool) -570233637)) || (((/* implicit */_Bool) 5119692584361110260LL))))));
            var_16 = ((/* implicit */long long int) ((-369076053) ^ (((/* implicit */int) (((~(-570233653))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((5119692584361110260LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_0]))))))) % (((arr_1 [i_0]) - (((/* implicit */long long int) 44569179))))));
                    arr_10 [(signed char)2] [i_3] = ((/* implicit */signed char) var_7);
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_2] |= ((/* implicit */int) (!(((/* implicit */_Bool) 17LL))));
                        var_18 -= ((/* implicit */signed char) (((~(arr_5 [i_0] [i_3] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) var_4))))))));
                        var_19 = ((/* implicit */signed char) arr_5 [i_3 + 1] [6LL] [(short)8]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 8388607U))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_2 [i_4] [i_1] [i_2]))) + (3188646958841478485LL)))));
                        arr_14 [i_0] [i_0] [(short)4] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */signed char) -1080351978628841962LL);
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (((~(arr_0 [i_2] [i_1]))) % (((/* implicit */long long int) ((int) arr_9 [i_3] [8] [(unsigned char)8] [(unsigned char)8])))));
                        arr_17 [i_3] [i_5] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (1350283052) : (((/* implicit */int) var_0))))) - (arr_9 [i_3] [i_3 + 1] [(short)7] [i_3 - 2])));
                        arr_18 [i_3] [i_2] = ((/* implicit */int) arr_7 [i_0]);
                        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) != (arr_9 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+(0U))))));
                    }
                    arr_19 [i_3] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_6 [i_0] [(_Bool)1] [(_Bool)1])))));
                }
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_5 [i_2] [i_1] [i_0]) : (arr_5 [i_2] [i_1] [i_0])));
                var_25 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2]);
                var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -550485625)) ? (((/* implicit */long long int) 4294967295U)) : (arr_1 [i_0]))) & (arr_5 [i_0] [i_0] [i_0])));
                var_27 = (+(arr_5 [i_2] [i_1] [i_1]));
            }
            var_28 = ((/* implicit */short) min((var_28), (((short) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        arr_20 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((((var_10) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((/* implicit */int) (short)12743))))) + (12761LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 3; i_6 < 8; i_6 += 4) 
        {
            var_29 = ((/* implicit */int) ((unsigned char) -44569187));
            arr_23 [i_0] [i_6] = ((/* implicit */int) ((((var_5) | (((/* implicit */long long int) 44569172)))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]))))));
        }
    }
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((var_6) >> (((-5843601709803234283LL) + (5843601709803234293LL)))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_1))) << (((var_7) - (1516057626))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
