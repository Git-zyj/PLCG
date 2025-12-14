/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169971
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_4 [i_2] [i_1] [i_0]) : (var_7))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_3)))) ? ((~(((/* implicit */int) var_9)))) : (min((1824817564), (-1967116117))))) >= ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_2 [i_0]))));
                    }
                    for (long long int i_4 = 4; i_4 < 23; i_4 += 4) 
                    {
                        arr_14 [i_0] [17ULL] [17ULL] [i_0] = ((/* implicit */short) (~(-1967116109)));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_10))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned short)7000)), (var_5))))))));
                            var_17 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_4 - 4] [i_4 + 1])) | ((+(((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])))))));
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_2] [i_4] [i_5])))) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)58520)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)58526)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_3))))))));
}
