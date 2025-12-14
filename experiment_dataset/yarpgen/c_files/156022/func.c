/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156022
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = 0U;
                        var_17 = max((var_3), (((max((10U), (1116224408U))) ^ (((((/* implicit */_Bool) 0U)) ? (3930469347U) : (1502325022U))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) 101013220U)) ? (max((max((arr_9 [i_0] [13U] [i_2] [i_3 + 1] [i_3]), (arr_8 [i_0] [i_1] [i_2]))), (3909575066U))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 139090328U)) ? (var_11) : (3531294041U)))) ? ((-(3919842532U))) : ((~(328257340U)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_2]) | (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) (-(arr_4 [i_0] [i_1] [10U])))) ? (((unsigned int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_4 + 1])) : ((+(3966709955U)))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_5 - 1] [i_5 + 2])) ? (arr_4 [i_5 - 1] [i_5 - 1] [i_2]) : (arr_4 [i_5 + 2] [i_1] [i_2])))) && (((/* implicit */_Bool) max(((-(arr_3 [3U]))), (((arr_1 [i_0]) | (2746384071U))))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (max((min((((((/* implicit */_Bool) 1073709056U)) ? (2746384071U) : (arr_12 [i_0] [i_0] [i_0] [10U] [i_0] [10U]))), (((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [18U] [i_1] [i_1]))))), (((((/* implicit */_Bool) max((1169142263U), (3178742887U)))) ? (min((4053453554U), (2633691034U))) : ((~(1262396406U)))))))));
                        arr_18 [i_0] [i_0] [i_0] = (((-(arr_2 [i_0]))) & (((arr_13 [i_0] [i_1] [i_2] [i_2] [i_5]) + (arr_13 [i_5] [i_2] [i_2] [i_1] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_21 *= max((((((/* implicit */_Bool) (~(arr_0 [i_5])))) ? (arr_6 [i_0] [i_5 + 1] [i_0] [i_1]) : (((unsigned int) arr_15 [i_0] [i_0] [i_2] [i_5] [i_0])))), ((~(arr_1 [i_5 + 1]))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((4294967284U) * (arr_0 [i_5])))))) ? (((/* implicit */int) ((4294967284U) >= (arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967272U)))))) == (arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                            var_23 = min(((~(arr_19 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_6] [i_6]))), (((arr_19 [i_0] [i_1] [i_0] [i_5 + 2] [i_6] [i_1] [i_0]) ^ (arr_1 [i_6]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_23 [i_7] [i_0] [i_0] [i_0] [i_0] = var_10;
                            arr_24 [i_2] [i_5] &= 1548583224U;
                            var_24 |= ((((/* implicit */_Bool) min((8U), (arr_10 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(100655379U))) >= (arr_6 [i_5 + 1] [i_5 + 1] [i_1] [i_1]))))) : ((-(((((/* implicit */_Bool) 129157724U)) ? (arr_7 [i_0] [i_1] [i_7]) : (0U))))));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (-(arr_22 [i_0] [i_1] [i_1] [i_1] [i_2])))) ? ((~(arr_22 [11U] [22U] [11U] [11U] [i_2]))) : (max((3107750577U), (2633691043U))));
                }
            } 
        } 
    } 
    var_25 = var_1;
}
