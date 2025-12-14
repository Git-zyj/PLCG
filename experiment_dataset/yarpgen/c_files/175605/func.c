/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175605
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) 393216U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((min((var_14), (((/* implicit */unsigned long long int) var_5)))) - (29738ULL)))))) : (max(((~(var_13))), (((/* implicit */unsigned int) var_3))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (0ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_0] [i_2] [i_0] [5]);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) (-(min((var_12), (((/* implicit */unsigned int) var_4))))));
                            arr_16 [i_0] = ((/* implicit */unsigned char) min(((-(((arr_8 [i_0] [i_0] [i_2] [15]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((_Bool) ((int) var_9))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 4508060781432824182LL);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) (+(((9223372036854775804LL) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_1 + 2] [i_0] [i_3] [i_1 + 2])))))));
                            var_18 -= ((/* implicit */long long int) var_14);
                            var_19 = ((/* implicit */_Bool) arr_3 [i_0]);
                        }
                    }
                } 
            } 
        } 
        var_20 |= ((/* implicit */unsigned short) ((int) (-(arr_9 [i_0] [i_0] [i_0] [i_0]))));
        var_21 |= ((((/* implicit */_Bool) ((-4508060781432824182LL) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0])))))) ? (((/* implicit */int) min((arr_15 [i_0]), (((/* implicit */signed char) var_3))))) : (((((/* implicit */int) arr_15 [i_0])) * (((/* implicit */int) arr_15 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */long long int) arr_7 [(_Bool)1] [i_6]);
        var_22 = ((/* implicit */long long int) var_13);
        var_23 -= arr_4 [11LL] [i_6] [i_6];
    }
    var_24 = ((/* implicit */long long int) ((unsigned char) var_3));
    var_25 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_6), (var_6)))), (var_14)));
}
