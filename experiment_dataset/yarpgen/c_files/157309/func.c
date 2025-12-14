/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157309
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) (-(2054939204U)));
                arr_4 [i_0] = ((/* implicit */unsigned int) ((int) (-(((var_6) * (var_10))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((((((/* implicit */_Bool) var_17)) ? (2054939225U) : (var_3))) / (var_4)))));
    var_22 = var_2;
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(1555561246U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (arr_6 [i_2] [i_2])))) : ((-(var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_2] [6U] [i_2] = min((min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) 2147483645)) : (2666934265U))), (min((((/* implicit */unsigned int) 2147483647)), (11U))))), (((/* implicit */unsigned int) min((2147483639), (2147483637)))));
                                var_24 = ((/* implicit */int) ((((var_1) + (var_17))) < (((/* implicit */unsigned int) (~(arr_12 [i_3] [i_3 + 2] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_26 [i_2] [i_2] [i_3] [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 609417080U))));
                                var_25 = var_5;
                                var_26 = ((/* implicit */unsigned int) min((var_26), (min((((((/* implicit */_Bool) arr_21 [i_8] [i_4])) ? (var_4) : (var_5))), (min((((var_5) | (4291912588U))), (var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
