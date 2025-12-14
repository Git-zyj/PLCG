/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173287
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_0 - 3] [i_0] [14] = ((/* implicit */int) (unsigned char)248);
                                arr_15 [i_2] [i_1 + 2] [i_1] = ((/* implicit */signed char) ((var_4) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) % (var_9))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0 + 3] [i_0 + 1] [i_1 + 1] [i_4 + 2]), (((/* implicit */short) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned char)248)))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(signed char)4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 2] [4]))))) ^ ((~(((/* implicit */int) var_2))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)32)) / (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_1] [i_2]))))) : (((long long int) ((var_8) + (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) != (var_11)))))))) ? (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) max(((short)32764), (((/* implicit */short) var_4))))))) : (((/* implicit */int) ((var_8) == (((/* implicit */int) var_3))))))))));
    var_16 = ((/* implicit */unsigned short) ((var_0) == (((/* implicit */unsigned int) var_7))));
}
