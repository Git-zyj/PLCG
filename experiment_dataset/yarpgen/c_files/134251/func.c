/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134251
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
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-7)))));
                var_17 &= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                var_18 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += max(((signed char)-72), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))))));
                                var_20 |= ((/* implicit */_Bool) arr_3 [i_0]);
                                arr_14 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])), ((signed char)-118))))))) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : ((+(((/* implicit */int) (_Bool)1))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((signed char) (signed char)-3))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) (~((+((-(((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
}
