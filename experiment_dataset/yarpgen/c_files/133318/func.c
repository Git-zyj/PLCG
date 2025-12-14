/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133318
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) ((int) arr_0 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 3]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_8)) : (arr_4 [i_0])))))));
                var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 0U)) ? (176738813U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16384)) ? (var_9) : (-9)))))) ^ (((((/* implicit */_Bool) 3100548361U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22383))) : (3577078844U)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) var_12);
                    var_17 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) * (((4294967292U) & (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) ((unsigned short) ((2121344550U) & (((/* implicit */unsigned int) var_11))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) max((arr_8 [i_3] [i_3]), (arr_8 [i_2] [i_2])))) || (((/* implicit */_Bool) min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_3])))));
                                var_19 = ((/* implicit */unsigned int) (((((-(var_10))) <= (arr_9 [i_2]))) ? (((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_5] [i_4] [i_3] [i_2]))))));
                                var_20 = (signed char)-98;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
