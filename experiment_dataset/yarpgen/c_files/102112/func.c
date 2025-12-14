/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102112
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
    var_20 = ((/* implicit */unsigned char) ((var_18) >> (((((/* implicit */int) var_17)) - (29271)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4] [i_1])) << (((((/* implicit */int) var_10)) - (16130)))))) ? (((unsigned long long int) (short)1746)) : (((/* implicit */unsigned long long int) 920044430U))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) arr_3 [16ULL] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
