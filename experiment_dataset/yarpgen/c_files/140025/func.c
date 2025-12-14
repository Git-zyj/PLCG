/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140025
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-16)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) (signed char)19)), (576794662U)))))));
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) - (min((((/* implicit */unsigned int) var_6)), (576794684U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_8) >> (((((/* implicit */int) arr_3 [i_1])) - (3257))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) min((arr_4 [i_1 + 1] [i_1]), (((/* implicit */short) var_4)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_8) >> (((((((/* implicit */int) arr_3 [i_1])) - (3257))) - (46669))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1]))))) || (((/* implicit */_Bool) min((arr_4 [i_1 + 1] [i_1]), (((/* implicit */short) var_4))))))));
                arr_5 [i_0] [(short)12] &= ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (3718172618U))) >> (((((/* implicit */int) min((arr_4 [i_0] [i_0]), (((/* implicit */short) var_15))))) - (75))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_3 [i_0])))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_3)))))))));
                var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) < (576794679U));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)2048)) + (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) var_5))))))));
                            var_22 &= ((/* implicit */short) arr_9 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
                            var_23 += min((((short) arr_2 [i_1 + 3] [i_0])), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 - 3])) > (((/* implicit */int) arr_7 [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (+(((((/* implicit */int) min((var_2), (var_4)))) * (((/* implicit */int) ((signed char) 3718172642U)))))));
    var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_8))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 32767U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
}
