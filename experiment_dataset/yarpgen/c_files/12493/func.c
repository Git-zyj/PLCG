/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12493
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
    var_14 = var_3;
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(3562506640U)));
        arr_3 [i_0] &= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                    var_17 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2]))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(var_4))))));
                    var_19 ^= ((/* implicit */unsigned int) (+(arr_6 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((var_7) || (((/* implicit */_Bool) 3562506640U))))))), (min((var_12), (var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((max((max((732460656U), (3562506639U))), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_3])))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            arr_21 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) var_7)), (3562506640U))) != (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (var_1)))), (min((2874958277U), (((/* implicit */unsigned int) var_0))))))));
                            arr_22 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (var_2)))) && (((/* implicit */_Bool) (+(var_8)))))))) - (min((((/* implicit */unsigned int) arr_15 [i_4])), (min((var_13), (arr_19 [i_4] [i_5] [i_5 - 1] [i_6])))))));
                            arr_23 [i_3] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9))))) / (((/* implicit */int) ((arr_10 [i_5 - 1]) && (((/* implicit */_Bool) 127113058)))))));
                            arr_24 [i_3] [i_4] [i_4] [i_4] [i_6] = min((min((((/* implicit */unsigned int) var_1)), (arr_19 [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1187534415U))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
