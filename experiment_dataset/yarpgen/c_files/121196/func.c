/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121196
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_4])), (((((/* implicit */_Bool) ((short) arr_1 [(_Bool)0] [i_1]))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)151)), (arr_6 [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_4] [i_3]))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(877708849))))));
                                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(876911721U)))) ? (((((/* implicit */int) arr_7 [i_1] [i_0])) >> (((((/* implicit */int) (signed char)-99)) + (114))))) : (((/* implicit */int) arr_9 [i_1])))), (((/* implicit */int) min((arr_9 [i_3 + 2]), (((/* implicit */short) (!(((/* implicit */_Bool) -2111998877))))))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] [i_1 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (min((7797377639043344876ULL), (((/* implicit */unsigned long long int) (unsigned char)64))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max(((((~(((/* implicit */int) var_0)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))), (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_2))))))));
    var_23 = ((/* implicit */short) (~(((((/* implicit */int) ((signed char) (_Bool)0))) / (((/* implicit */int) var_2))))));
    var_24 -= ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)105))))));
    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) var_10)), (var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-1)))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)170)), (var_14)))))))));
}
