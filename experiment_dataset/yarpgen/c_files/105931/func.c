/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105931
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
    var_14 *= ((/* implicit */_Bool) (unsigned char)254);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (unsigned char)255);
                            var_16 -= ((/* implicit */unsigned short) 1048575);
                            var_17 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((signed char)73), ((signed char)-56)))), (min((2240343220U), (((/* implicit */unsigned int) -1512256777))))));
                        }
                    } 
                } 
                var_18 = min((((/* implicit */short) min(((signed char)104), ((signed char)-105)))), ((short)-19443));
                var_19 = ((/* implicit */int) (unsigned short)6752);
            }
        } 
    } 
}
