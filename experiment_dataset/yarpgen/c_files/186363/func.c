/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186363
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) max((max((16320LL), (((/* implicit */long long int) var_18)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) % (16301LL)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] = max((((/* implicit */long long int) arr_2 [i_0])), ((~(max((((/* implicit */long long int) 7U)), (16320LL))))));
            var_20 += ((/* implicit */_Bool) max((((unsigned int) (-(((/* implicit */int) var_1))))), (((arr_5 [i_0]) / (arr_5 [i_1])))));
            var_21 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (8205434817319806465LL)))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (var_15)))));
        }
        var_22 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17))), (arr_3 [i_0] [i_0] [i_0]))), (var_14)));
        var_23 ^= ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) var_13)))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_24 |= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_1)), (((unsigned int) arr_5 [i_0]))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) arr_14 [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_0]))))) : (max((((/* implicit */unsigned int) var_0)), (arr_5 [i_2])))));
                            var_26 = max((((((((/* implicit */_Bool) arr_5 [i_3])) ? (var_6) : (((/* implicit */unsigned long long int) var_12)))) / (((/* implicit */unsigned long long int) ((unsigned int) 1073741824U))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_2))), (((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */short) (unsigned char)72)))))))));
                        }
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_3 - 1] [i_3] [i_4] [i_6] = ((max((((long long int) 2850424848U)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_17) : (var_14)))))) ^ (((/* implicit */long long int) var_14)));
                            var_27 = ((/* implicit */unsigned char) (~((~(arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            arr_24 [i_0] [i_2] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_2 [i_6 + 2])))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            arr_27 [(unsigned char)12] [i_2] [i_3] [i_4] [i_7] &= ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9] [i_0]));
                            var_28 = ((/* implicit */unsigned char) ((signed char) 7861785245832060595LL));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_29 -= ((/* implicit */unsigned int) max((var_9), (var_9)));
                            var_30 -= ((/* implicit */_Bool) var_17);
                            arr_30 [i_2] [i_3] = ((/* implicit */short) ((unsigned char) var_14));
                        }
                        var_31 ^= ((/* implicit */unsigned short) -1116479248);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        arr_33 [i_9] [i_9] = (((!(((/* implicit */_Bool) (-(1444542448U)))))) ? (max((var_5), (((/* implicit */unsigned int) var_2)))) : (arr_31 [i_9]));
        arr_34 [i_9] = ((/* implicit */unsigned char) ((_Bool) ((signed char) var_1)));
    }
    var_32 = ((/* implicit */short) max(((+(150214625U))), (((/* implicit */unsigned int) ((signed char) max((var_10), (((/* implicit */unsigned int) var_18))))))));
}
