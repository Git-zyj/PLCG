/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173251
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)194))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [11] [(_Bool)1] [i_0])) < (((((/* implicit */_Bool) (unsigned char)247)) ? (2095335850) : (((/* implicit */int) var_0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)161)))))));
                            arr_11 [i_3] [i_2] [i_2 + 4] [i_1] [i_0] = (+((+(((/* implicit */int) (short)-6925)))));
                            var_14 = ((/* implicit */_Bool) ((unsigned long long int) (short)6924));
                            var_15 -= ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) 3127430743U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (24064795U))))), (((/* implicit */unsigned int) arr_6 [11U] [i_1] [18ULL]))));
                            var_16 |= ((/* implicit */int) min((((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [(unsigned char)11]))))), (var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_7);
}
