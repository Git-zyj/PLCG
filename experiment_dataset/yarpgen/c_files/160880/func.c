/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160880
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
    var_14 = ((min((((unsigned int) 0U)), ((-(0U))))) + ((-(((unsigned int) 3418041225U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [5U] [i_3] = ((((/* implicit */_Bool) ((unsigned int) ((arr_8 [i_0] [i_0] [i_0]) <= (arr_5 [i_0] [i_1] [i_3]))))) ? (min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])) ? (arr_11 [i_3] [i_2] [i_2] [i_1] [i_0]) : (0U))), ((~(467529547U))))) : (((unsigned int) max((arr_10 [i_0] [i_0] [i_2]), (var_7)))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((unsigned int) (-(((unsigned int) 4187171985U)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        var_16 = min((((unsigned int) ((((/* implicit */_Bool) var_3)) ? (2310784279U) : (var_6)))), (((unsigned int) (-(2812069894U)))));
                        arr_18 [i_5] [2U] [i_1] [i_1] [2U] [i_0] |= ((((/* implicit */_Bool) (~(max((539558886U), (4294967295U)))))) ? ((~(((unsigned int) var_1)))) : ((+(((((/* implicit */_Bool) arr_8 [i_0] [4U] [i_5])) ? (var_0) : (var_10))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) ((min((((unsigned int) var_3)), ((+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) != (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_6] [i_4]))))), ((~(arr_16 [i_0] [i_0] [i_0] [i_7])))))));
                                arr_25 [5U] [i_1] [i_4] [i_0] [i_7] = ((unsigned int) (-(((((/* implicit */_Bool) 2563746188U)) ? (2919146971U) : (arr_7 [i_0] [i_0] [0U] [i_0])))));
                                var_18 += min(((+(max((var_2), (arr_24 [i_0] [i_7] [i_0]))))), (((unsigned int) min((arr_20 [i_7] [i_6] [i_1] [5U] [i_1] [i_0]), (var_8)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    arr_28 [i_8] [i_0] [i_0] [9U] = (~((~(((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_1] [7U] [i_0])) ? (1358529094U) : (var_12))))));
                    var_19 ^= min((((((/* implicit */_Bool) min((arr_14 [i_0] [4U] [i_8]), (704266526U)))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (4148228166U))) : (((unsigned int) arr_3 [i_0] [2U] [i_8])))), ((~((+(arr_0 [4U] [i_1]))))));
                }
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) max((min((2470426301U), (arr_4 [i_11]))), (max((arr_21 [9U]), (57325126U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (131071U) : (0U)))) ? (((((/* implicit */_Bool) var_3)) ? (1984183016U) : (3493244600U))) : (min((2563746188U), (1267271482U))))) : (((((/* implicit */_Bool) (-(var_12)))) ? (max((1112485229U), (arr_27 [i_0] [i_9] [i_10 + 1]))) : (min((1052093139U), (1660114429U)))))))));
                                var_21 += (+((~(((unsigned int) var_11)))));
                                var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_9 [i_11] [i_11]), (193428120U)))) && ((!(((/* implicit */_Bool) 655517120U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10] [i_11] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3552018289U)) || (((/* implicit */_Bool) var_5))))))))));
                                var_23 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 24576U)))))))) + ((~(max((311828886U), (arr_29 [i_1]))))));
                            }
                        } 
                    } 
                    arr_38 [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_33 [7U] [i_0] [i_9] [i_0] [i_0] [i_0]))))) ? (((unsigned int) (-(287152633U)))) : (((min((arr_32 [i_0] [i_1] [i_1] [i_9]), (16776192U))) - ((~(var_2))))));
                }
                arr_39 [i_0] [i_0] = ((unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? ((+(4294967295U))) : (((unsigned int) arr_0 [8U] [8U]))));
            }
        } 
    } 
}
