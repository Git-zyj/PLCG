/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106650
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_10 [i_3] [4LL] [4LL] [4LL] [i_3])))))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_6)))))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((max((arr_7 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_0] [i_3])))))), (((((/* implicit */int) arr_8 [i_0] [i_0])) + (((((/* implicit */int) var_9)) + (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (var_3)))) << (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((signed char) var_4))));
            }
        } 
    } 
    var_12 = var_2;
}
