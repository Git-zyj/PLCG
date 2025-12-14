/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149327
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (var_1))))));
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */unsigned int) var_0);
                                var_20 = ((/* implicit */unsigned short) ((((arr_2 [i_0 - 3]) < (arr_2 [i_0 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 3])))))) : (min((((/* implicit */long long int) var_11)), (var_12)))));
                                var_21 -= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)54704))))), (min((2100027313U), (((/* implicit */unsigned int) var_0))))))) : (min(((+(var_8))), (((/* implicit */long long int) (-(var_16)))))));
                                arr_15 [i_0] [i_0 - 3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3986898793U)) ? (-2987415053442668231LL) : (((/* implicit */long long int) 2112750887U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_22 = min((((/* implicit */long long int) (unsigned short)65518)), (arr_2 [i_0]));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (3428286802U))))))) >> (((min((1048575U), (((/* implicit */unsigned int) arr_5 [i_1 - 1])))) - (27706U)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (min((7276004839293159362LL), (var_5)))));
}
