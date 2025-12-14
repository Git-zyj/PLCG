/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105308
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_5))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_3 [i_1] [i_1 + 3] [i_1 - 1])), (-9223372036854775805LL))) >= (((/* implicit */long long int) max((1487472331U), (((/* implicit */unsigned int) (short)13)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) -5124966154065983479LL)) ? (((/* implicit */int) (short)7710)) : (((/* implicit */int) (short)13299)))), (((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)160)))))) : (max((((/* implicit */int) var_4)), (1223278106)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */long long int) max((2147483647), (((/* implicit */int) (unsigned char)240))))) > (-9158581106939811586LL))));
                                var_13 = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [12U] [7U] [i_1 - 2])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) var_6))));
                    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                }
                var_16 *= ((/* implicit */short) -22LL);
                var_17 += ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (((((/* implicit */unsigned long long int) var_2)) ^ (var_7))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) (short)-11089)))))))));
    var_19 = ((/* implicit */unsigned int) var_1);
}
