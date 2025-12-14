/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182552
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
    var_11 += ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_6)))));
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) var_6);
        arr_3 [0LL] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1] [i_0 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1]))))))));
        var_15 ^= ((/* implicit */unsigned int) (-(((unsigned long long int) (!(((/* implicit */_Bool) 1)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_16 += ((/* implicit */long long int) var_1);
                            var_17 = ((0ULL) / (((/* implicit */unsigned long long int) (-(-19)))));
                            var_18 -= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_4])))), ((-(((/* implicit */int) var_1))))));
                            arr_15 [i_0 + 1] [i_1] [i_0 + 2] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((int) (unsigned short)65535));
                            var_19 -= ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1))))), ((-(((long long int) var_7))))));
                        }
                        for (signed char i_5 = 4; i_5 < 20; i_5 += 4) 
                        {
                            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) 102742398U));
                            arr_20 [i_0] [16LL] [i_2] [16LL] [i_1] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_1]))));
                            var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) ((signed char) -1)))))));
                        }
                        var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                        arr_21 [i_2] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) (-(-36567585)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 4; i_6 < 11; i_6 += 3) 
    {
        var_22 = arr_0 [i_6];
        var_23 = ((/* implicit */long long int) arr_16 [i_6] [i_6] [(unsigned short)16] [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */short) var_5);
    }
}
