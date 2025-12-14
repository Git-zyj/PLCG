/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173994
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), ((-(((unsigned int) max((469337656U), (4131416299U))))))));
                    arr_6 [i_1] [i_0] [i_0] [i_1] = ((max((var_4), (var_2))) * ((~(var_0))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_15 = ((unsigned int) ((unsigned int) ((unsigned int) var_3)));
                    arr_11 [i_0] [i_1] [i_3] = (((+(((((/* implicit */_Bool) var_9)) ? (var_1) : (var_11))))) * (max(((-(var_12))), (((unsigned int) var_0)))));
                    var_16 = ((min((var_6), (var_0))) - (((((/* implicit */_Bool) ((var_13) + (var_3)))) ? (((var_3) - (var_7))) : (var_8))));
                }
                arr_12 [10U] |= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_13), (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_2))))))), (((unsigned int) var_6)));
                var_17 = ((((/* implicit */_Bool) ((var_4) & (var_10)))) ? (var_7) : (((unsigned int) (+(var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_5] [i_5 - 2] = ((min(((+(var_5))), (min((var_4), (var_6))))) & (((unsigned int) (-(var_3)))));
                arr_20 [i_4] [i_4] [i_5] = min((max((var_5), (var_12))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (var_10))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (var_13)))) ? (var_5) : (((unsigned int) var_2))))) ? (((unsigned int) 67043328U)) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (max((var_3), (var_3)))))))));
                                arr_27 [i_6] [i_5] [i_6] [i_7] [i_8] = max((3825629639U), (2097151U));
                                arr_28 [i_6] [i_5] [1U] [i_7] [i_8] [16U] [i_8] = ((unsigned int) min((var_5), (var_13)));
                                arr_29 [17U] [i_6] [17U] [i_8] [17U] [i_8] [i_8] = (((-((-(var_3))))) | (((unsigned int) max((var_8), (var_9)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) (-(var_13))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            {
                arr_36 [i_10] [i_10] = ((((/* implicit */_Bool) min((var_13), (var_11)))) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (var_4))) : (((unsigned int) 2772399049U)));
                arr_37 [i_10] [i_9] [i_9] = min((((((/* implicit */_Bool) var_12)) ? (var_2) : (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16777215U))))));
            }
        } 
    } 
    var_20 += ((unsigned int) (!(((/* implicit */_Bool) (+(var_3))))));
}
