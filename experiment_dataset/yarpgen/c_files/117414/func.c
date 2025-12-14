/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117414
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_12))))));
    var_16 = max((((/* implicit */unsigned int) var_7)), ((~(var_0))));
    var_17 = ((var_9) | (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1946965905U))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2]);
                    arr_8 [i_0] [i_0] [i_0] = ((unsigned int) ((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (3937872996U) : (arr_6 [i_1] [i_0] [i_0 + 1] [i_0])));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_3 [i_2]) > ((-(2286198855U)))))))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_9 [(_Bool)1] [i_3] [i_1] [i_3] [i_0]))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0))))) ? (3062192721U) : (((unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((2369162409U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_21 = max((((/* implicit */unsigned int) (_Bool)0)), (541190222U));
                        arr_15 [i_0] [i_1] [(_Bool)1] [i_2] [i_2] [i_0] = arr_14 [i_0] [i_0] [(_Bool)1] [i_2] [i_2] [i_0];
                        arr_16 [i_0 + 1] [i_1] [i_1] [i_0] = ((((_Bool) ((arr_1 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))))) ? ((-(min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2958634530U)) || ((_Bool)1))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((_Bool) (+(3753777073U)));
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (_Bool)1)), (0U))) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) 3577941539U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1232774574U)))))));
                        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 3U)))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_5);
}
