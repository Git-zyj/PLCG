/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116438
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = arr_5 [(unsigned char)0] [i_2] [i_2] [i_2];
                                var_19 = ((/* implicit */short) (+(min((((unsigned int) arr_8 [i_0] [i_2] [i_3] [i_4])), (((/* implicit */unsigned int) 333066257))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned char) (+(2608840071U)));
                }
            } 
        } 
    } 
    var_21 = ((((var_16) - ((+(17592186044415ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))));
    var_22 &= (+(((((/* implicit */int) (unsigned char)247)) ^ (333066257))));
}
