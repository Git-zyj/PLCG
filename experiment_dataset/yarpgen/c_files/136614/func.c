/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136614
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 = max((arr_6 [10U] [i_1] [i_1] [12U]), (((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (3760785236U) : (1639922160U)))));
                    arr_7 [18U] [18U] [20U] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0] [i_2]), (3401383229U)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [16U]) : (arr_1 [14U]))) : (var_8)))) ? (max((max((var_3), (2264834383U))), (1223686354U))) : (((unsigned int) 893584066U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (var_2)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_17 = 4294967293U;
                                arr_21 [i_3 + 2] [5U] [i_5] [i_6] [i_6] [i_6] [i_7] = min((((((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((unsigned int) arr_5 [i_3] [i_4] [i_5] [4U])));
                                arr_22 [i_3] [0U] [i_4] [i_5] [4U] [i_6] [i_7] |= ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min((arr_6 [i_7] [i_6] [i_4] [i_3]), (3459448615U)))) ? (893584064U) : (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7])) ? (var_1) : (3459448615U))))) : (2332685589U));
                            }
                        } 
                    } 
                    arr_23 [i_3] [0U] = arr_3 [16U] [16U] [i_5];
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_18 += (-(835518660U));
                                arr_30 [i_3] [i_3] [i_5] [i_8] [i_3] [i_8] [i_5] = arr_19 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 ^= ((2332685589U) << (((var_9) - (2371113389U))));
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_42 [i_10] [i_10] [i_12] [i_13] [i_10] [i_11] &= arr_35 [i_13] [i_11] [i_13];
                            arr_43 [i_10] = 3071280941U;
                            var_20 ^= ((((/* implicit */_Bool) (~(arr_33 [i_10])))) ? (((((/* implicit */_Bool) arr_39 [i_13] [i_13] [i_11])) ? (arr_33 [i_10]) : (arr_33 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_10] [i_13] [i_10]) <= (307498570U))))));
                            arr_44 [17U] [i_10] [17U] [i_13] = min((((unsigned int) var_14)), (((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_12] [i_13])) ? (((((/* implicit */_Bool) var_13)) ? (1570111126U) : (3446201786U))) : (1570111126U))));
                        }
                    } 
                } 
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_10] [i_11] [i_11] [i_10])) ? (3690478230U) : (arr_6 [3U] [i_10] [i_10] [i_10])))) ? (3071280942U) : (((((/* implicit */_Bool) (~(var_5)))) ? (((unsigned int) arr_31 [i_10])) : (((((/* implicit */_Bool) 1223686354U)) ? (var_4) : (arr_31 [i_10]))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((((var_5) < (((((/* implicit */_Bool) var_14)) ? (arr_35 [i_11] [i_10] [i_11]) : (arr_1 [i_11]))))) ? (4257554319U) : (((((/* implicit */_Bool) 0U)) ? (1231597353U) : (106525609U)))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (arr_31 [i_11])));
            }
        } 
    } 
}
