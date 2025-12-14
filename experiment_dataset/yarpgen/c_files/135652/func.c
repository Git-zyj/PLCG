/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135652
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3405251628U)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (max((-7339646078812031582LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)52))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (min(((_Bool)0), ((_Bool)1)))))))));
                arr_6 [13] [i_0] [i_1] = ((/* implicit */unsigned int) (+(-7339646078812031597LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_13 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)16756)), (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) (_Bool)1))))), ((+(4773804321035512372LL)))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) <= (2254654632U)))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) && (((/* implicit */_Bool) (unsigned char)94))))))))));
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((signed char) min((((/* implicit */short) (signed char)-7)), ((short)-23507))));
            }
        } 
    } 
}
