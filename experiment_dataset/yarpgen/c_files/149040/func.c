/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149040
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)110)) ? (655576566U) : (3639390713U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 4; i_4 < 20; i_4 += 2) 
                            {
                                arr_12 [i_4] [i_3 + 1] [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) var_8)) ? (-1382888738) : (3));
                                var_15 = var_5;
                                var_16 = ((/* implicit */unsigned int) var_0);
                            }
                            var_17 = ((/* implicit */signed char) arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_2] [i_2]);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_10))));
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != ((~((~(995770366U)))))));
                            var_20 = var_3;
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) (-(4291402688U)));
    var_22 = ((/* implicit */int) ((signed char) ((int) ((unsigned int) var_1))));
}
