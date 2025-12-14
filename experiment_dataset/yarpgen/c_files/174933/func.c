/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174933
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((max(((unsigned short)40872), ((unsigned short)40872))), (((/* implicit */unsigned short) (_Bool)0))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (unsigned short)40869);
                            var_13 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_1])) + (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */_Bool) (unsigned short)24686)) && (((/* implicit */_Bool) arr_2 [i_1] [i_1])))) ? (((/* implicit */int) (short)-10739)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 &= ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)10751)) : (((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (unsigned char)69))))));
}
