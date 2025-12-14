/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130770
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
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) arr_0 [i_1]))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) arr_5 [i_1]))))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-15)), ((unsigned char)113)))), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_9))))));
                    arr_8 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)152)))))) : (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) : (-5230276076112221701LL))))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [(short)20] [i_1] [i_2] [i_3] [i_4] [i_4] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5230276076112221701LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0 - 3] [i_3 + 1])))));
                                var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3236862628786978959LL)) ? (-1087513321) : (((/* implicit */int) var_3))))), (((2171174330824546846LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-7558))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_1] [i_3] = (!(((_Bool) arr_2 [i_0])));
                                arr_16 [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_10 [i_4] [i_3] [i_2] [i_2] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) <= (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_1] [i_2] [i_3] [i_4]))))) : ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (min((((/* implicit */int) var_1)), (((var_2) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))));
}
