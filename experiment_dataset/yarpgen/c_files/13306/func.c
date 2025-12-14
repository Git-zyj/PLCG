/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13306
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-4096))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-4096)), (min((2824967863U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (short)11717)) ? (((/* implicit */int) (short)-4119)) : (((/* implicit */int) (short)12386)))) : (((/* implicit */int) (unsigned short)60425))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) var_6);
                            arr_9 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (+(4294967295U)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-12402)), (2147483648U))))));
                var_15 |= ((/* implicit */_Bool) 1225768528U);
            }
        } 
    } 
}
