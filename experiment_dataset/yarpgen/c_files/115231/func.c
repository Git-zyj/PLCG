/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115231
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
    var_20 = ((/* implicit */unsigned char) var_19);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 -= ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_2] [i_3])) == (18446744073709551615ULL))))))) > (1135105110U));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))))));
                                var_24 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_7 [i_3]))))));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_2]);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), ((-(18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */long long int) ((unsigned char) var_15));
}
