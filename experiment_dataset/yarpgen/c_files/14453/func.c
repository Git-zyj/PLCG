/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14453
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 1] [i_1 + 3] [i_1])), (min((var_4), (((/* implicit */int) (unsigned short)61600))))))) != (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_0])))) ? (var_13) : (arr_2 [i_1 - 1] [i_1 + 3])))));
                    var_20 = ((/* implicit */int) arr_5 [i_1 + 4] [i_1] [i_1] [i_2 - 4]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)61600)) >= (((/* implicit */int) (unsigned short)61600))));
                                var_22 = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */long long int) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_0);
}
