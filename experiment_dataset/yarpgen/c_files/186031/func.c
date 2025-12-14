/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186031
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */long long int) (((+(((/* implicit */int) (short)5566)))) * (min((((/* implicit */int) var_5)), (((int) var_5))))));
                            var_14 = ((/* implicit */_Bool) (((-(((/* implicit */int) min((arr_8 [i_2]), ((unsigned short)64834)))))) & (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 3] [i_3 + 3])) : (((/* implicit */int) (unsigned char)231))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)231)), ((short)5559))))));
                arr_10 [i_0] = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1] [i_1])), (16669397531399481710ULL)))) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_1 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 6867216394904463693LL))))))))));
                var_16 = ((/* implicit */long long int) 521361061U);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (-(var_12)))) + (((5934998286110123312LL) & (var_2))))), (((/* implicit */long long int) var_3))));
    var_18 = ((/* implicit */unsigned int) var_2);
}
