/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107058
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
    var_17 = ((/* implicit */short) (+(var_3)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 &= ((/* implicit */long long int) (+(9727653050936201236ULL)));
                                var_19 = ((/* implicit */_Bool) min((-1546814482804936851LL), (-1546814482804936851LL)));
                                var_20 = ((/* implicit */unsigned char) min(((+(max((((/* implicit */long long int) (signed char)127)), (1546814482804936851LL))))), (min((((/* implicit */long long int) ((short) (signed char)127))), (((((/* implicit */_Bool) 1546814482804936851LL)) ? (-1546814482804936863LL) : (-1546814482804936847LL)))))));
                            }
                        } 
                    } 
                } 
                var_21 = min(((signed char)-110), ((signed char)-97));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_15);
    var_23 = ((/* implicit */unsigned int) var_13);
}
