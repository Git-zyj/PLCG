/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164105
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */long long int) ((((/* implicit */int) var_1)) / (var_4)))) | (var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0 + 1]);
                var_19 *= ((/* implicit */_Bool) (+(((int) arr_2 [i_0 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) arr_2 [i_0] [12U] [i_0 - 1]))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((((((/* implicit */int) (short)0)) % (((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) (short)-1))))) : ((+(((/* implicit */int) arr_1 [i_0 + 1]))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_12 [i_0] [5] [i_2 - 1] [i_3] [i_4] [i_4])), (var_3))), (((/* implicit */long long int) arr_8 [i_0 - 2]))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) (short)0))))), (min((((/* implicit */long long int) var_4)), (var_7))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))))))))));
                                arr_14 [i_1] = ((short) ((unsigned int) ((((/* implicit */int) var_2)) >> (((var_6) - (3613243476130815591ULL))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((min((min((var_8), (((/* implicit */unsigned long long int) 955367583)))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_2 - 2] [i_2] [i_4]) : (arr_3 [i_2 - 1] [i_4] [(unsigned char)18])))))))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -955367583)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (_Bool)1))))))) <= (((var_8) * (((/* implicit */unsigned long long int) (~(var_3))))))));
    var_23 = ((/* implicit */_Bool) var_3);
    var_24 = var_3;
}
