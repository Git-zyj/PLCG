/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120736
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */int) var_0);
                        arr_9 [(_Bool)1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0 - 1] [i_1 - 1]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1 - 3] [i_3])) / (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1 - 3] [i_3]))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 2] [i_1])) ? (arr_8 [i_1] [i_3] [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) 1792))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1782)) ? (1796) : (var_2)));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_4])) ^ (((/* implicit */int) (unsigned char)128))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_7);
                        var_19 = ((/* implicit */signed char) 1789);
                    }
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) -1791))), (((unsigned int) 1792))))) ? (1782) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1792)) ? (-1793) : (-1792))))))))))));
                        arr_16 [i_0] [i_1 - 3] [i_0] [i_1] [i_5] = ((/* implicit */short) var_2);
                    }
                    var_21 ^= ((unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_2]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((1790), (1792))) ^ (((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
