/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113927
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
    var_15 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) var_1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)93)))))) : (max((2303591209400008704LL), (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3] [i_3])))))));
                                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)93))) == (-4591996479686681858LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
