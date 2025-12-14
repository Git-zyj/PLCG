/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104728
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1219784606), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 496640021)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) var_9)))))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) + (((((/* implicit */int) (signed char)-87)) - (((/* implicit */int) (signed char)64)))))))));
                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0]))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_3) : (var_11)))) ? (((int) arr_3 [i_0])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))));
                var_17 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 4])), (arr_5 [i_0] [i_0])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((arr_5 [i_2] [i_0]) == (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))))) : (((/* implicit */int) (!(arr_8 [i_0] [i_0]))))));
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 3] [i_0])), (var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_10);
}
