/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124910
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
    var_13 += ((/* implicit */unsigned int) (unsigned char)7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 886049649))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((int) -410489716));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_4 + 1] [i_0] [i_2 + 2] [(unsigned short)16] [i_1] [i_0]) | (arr_9 [i_0] [i_1] [10] [i_3 + 1] [i_4 + 1] [i_4 - 1])))) ? (((/* implicit */int) (signed char)124)) : (((var_6) << (((((/* implicit */int) arr_11 [i_3 - 4])) - (96)))))))) ? (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_2 + 2] [i_3 - 2] [(unsigned char)7] [i_3 - 3]) == (arr_9 [i_0] [i_0] [i_4 - 1] [i_0] [i_0] [i_3 - 2])))) : ((-((-(((/* implicit */int) (unsigned short)32))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
