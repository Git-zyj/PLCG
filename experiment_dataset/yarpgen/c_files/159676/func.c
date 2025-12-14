/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159676
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) != (((((/* implicit */_Bool) 2151459507U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0]))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_7) ? (2143507770U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2151459527U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)80)) ? (var_13) : (((/* implicit */long long int) 2151459507U))))) ? (2143507769U) : (2151459513U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_1] [i_2]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]))))) != (((((/* implicit */_Bool) -1)) ? (4177749184073854131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))))))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 2018071231))) ? (((long long int) 651014583328279901LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */short) var_13);
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) ((((((/* implicit */int) ((signed char) var_3))) > ((~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) : (((long long int) var_14))))));
    var_22 *= ((/* implicit */signed char) var_14);
}
