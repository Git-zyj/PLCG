/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186353
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
    var_12 = var_6;
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_4))));
    var_14 = ((/* implicit */int) 3112300753U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) arr_0 [i_1])))))))) + ((-(((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) (short)8896))))))))));
                var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) 1182666542U)), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) / (arr_3 [i_0 + 1] [i_0 + 1] [i_0])))));
                var_17 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_10)))), (((((/* implicit */_Bool) (signed char)-96)) ? (10453672550738061222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_3] = ((/* implicit */_Bool) 3475045246930813160LL);
                            var_18 *= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(var_2)))))) ? (max((((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) (signed char)-120))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)63)))) : ((-(((/* implicit */int) (unsigned short)63))))))));
}
