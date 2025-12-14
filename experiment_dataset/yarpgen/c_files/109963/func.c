/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109963
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_10 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (-761784923)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (((1099578027U) - (3221225472U)))))));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)255))));
                    arr_7 [i_2] [i_0] = (+(((((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2 + 2] [i_2])) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2 + 1])))));
                }
                var_12 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                arr_8 [1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_4 [i_1] [i_0 + 2] [i_0 + 1]));
                var_13 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_1 [i_0])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), ((unsigned char)181)));
    var_15 |= ((/* implicit */signed char) (((-(((/* implicit */int) var_0)))) <= (((/* implicit */int) min((var_5), ((unsigned char)250))))));
}
