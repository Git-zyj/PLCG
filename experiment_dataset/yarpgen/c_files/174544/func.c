/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174544
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_12 = max((min((((((/* implicit */_Bool) arr_1 [2U])) ? (2897365622U) : (var_1))), ((~(var_3))))), (var_2));
        var_13 = ((unsigned int) (!((!(((/* implicit */_Bool) 2238142072U))))));
        arr_3 [0U] = arr_2 [i_0];
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((2568780951U) == (4294967280U))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_15 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1]))))), (arr_0 [i_2]));
            var_16 = min((max((3123515310U), (((1171451985U) - (3250334325U))))), (((((/* implicit */_Bool) (+(arr_0 [i_2])))) ? ((+(2656881711U))) : (arr_2 [3U]))));
            arr_8 [i_1] [i_1] = min((arr_1 [i_2]), (min((((unsigned int) var_11)), (arr_6 [12U] [10U]))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) min((((4294967295U) + (4294967295U))), (min((2526179204U), (var_11)))))) ? ((~(2361106055U))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) 3431871189U)))))) + (min((arr_7 [i_1] [i_1] [i_2]), (arr_4 [4U])))))))));
            arr_9 [i_1] [i_2] [i_1] = var_0;
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_1] = min((min((min((var_2), (4294967284U))), (min((134217696U), (arr_7 [i_1] [12U] [i_3]))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (1168970406U) : (arr_0 [i_1]))));
            var_18 += ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 334474266U))))), (min((4294967290U), (arr_11 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((arr_7 [6U] [i_3] [i_3]), (4294967292U))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_19 = max((495443803U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 45060458U)) ? (1311435337U) : (2219638742U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (4249906862U))))) : (var_2))));
                        var_20 += (~(2844405306U));
                        var_21 *= min((((var_11) << (((arr_6 [i_1] [i_5]) - (3551351513U))))), (max((arr_13 [i_3] [i_4] [i_5]), (var_8))));
                        arr_18 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) (+((-(arr_7 [i_1] [12U] [i_5])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((171544629U) == (1993389782U)))) << ((-(4294967295U)))))) : (max((arr_2 [i_5]), (arr_2 [i_4]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
        {
            arr_21 [i_1] [i_1] [2U] &= ((unsigned int) (!(((/* implicit */_Bool) 4294967289U))));
            arr_22 [i_1] [8U] = ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_6])) ? (arr_20 [i_6] [i_1] [i_1]) : (arr_20 [i_1] [i_6] [i_6]));
        }
        var_22 = ((unsigned int) 4294967295U);
    }
    var_23 &= ((unsigned int) 3212538605U);
}
