/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108675
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
    var_17 = ((/* implicit */signed char) 70217560U);
    var_18 += ((/* implicit */int) ((signed char) 0U));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_1] &= (+(max((1634543888U), (((/* implicit */unsigned int) arr_0 [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [14U] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((unsigned long long int) (_Bool)1))));
                                var_19 += arr_2 [i_0];
                                var_20 ^= ((/* implicit */unsigned int) (_Bool)0);
                                var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) 3946432805U)));
}
