/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176998
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (var_12)))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : (max((var_12), (var_0))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_12)))))));
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 8245107423823405781LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8245107423823405768LL)))));
                                arr_13 [i_0] [i_1] [i_2] [i_1] [(unsigned short)17] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8245107423823405781LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5831815770456477092LL)))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_1] [i_4] = (!((!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_4])) * (((/* implicit */int) (unsigned short)2631))))))));
                                arr_15 [i_0] [i_1 + 2] [i_1] = arr_1 [i_0];
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [(unsigned short)10]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (+(var_1)));
}
