/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116672
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
    for (int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((int) max(((~(var_2))), ((+(869795184)))))))));
                                var_11 = ((/* implicit */unsigned char) max((((unsigned short) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_4] [i_4])), (((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_0] [i_0 - 2] [i_2] [i_3]))));
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (max((var_2), (((/* implicit */int) (signed char)-25))))))) : (((arr_6 [i_0 + 1] [i_0 - 1] [i_2]) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) (signed char)23)), (var_4)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_1])));
                    var_13 += ((/* implicit */long long int) ((unsigned int) max((((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [11]) ? (((/* implicit */int) (signed char)-107)) : (-1635227003))), (((/* implicit */int) (!(var_6)))))));
                    arr_15 [i_0 - 1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_3));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (-2147483646)));
}
