/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177224
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
    var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) (-(var_10)))), (-1LL))), (((/* implicit */long long int) var_14))));
    var_19 ^= (-(var_16));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = arr_4 [i_0];
                    arr_9 [i_2] [(unsigned char)8] [(unsigned char)8] [i_0] |= ((/* implicit */signed char) -1LL);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3]))))));
                                arr_15 [i_0] [i_0] [11U] [i_3] [i_4] = ((/* implicit */signed char) (+((+(((/* implicit */int) max(((signed char)127), (var_2))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1LL), (var_8)))) && (((/* implicit */_Bool) (+(arr_5 [i_1 - 2]))))));
                    var_21 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_1 [(signed char)14] [i_1 - 1])) << (((/* implicit */int) arr_1 [(unsigned short)8] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */long long int) var_17);
}
