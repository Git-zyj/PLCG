/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118394
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
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1 - 3] [i_1 - 1])) % (((/* implicit */int) var_2)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                            var_16 = ((/* implicit */_Bool) var_12);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (var_5))), (((/* implicit */unsigned int) var_6))))) ? (((arr_8 [i_0]) ? (((var_6) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_7)))) : (((arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_3 + 2]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2] [(unsigned char)0])))))) : (((/* implicit */int) arr_6 [i_0] [(signed char)5] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) (((+(var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_0))) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
}
