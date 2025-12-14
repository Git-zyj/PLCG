/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171315
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
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (4294967295U))) : (((/* implicit */unsigned int) (+(var_6)))))) != (var_12)));
    var_16 = ((((((unsigned int) var_3)) < (((((/* implicit */_Bool) -15)) ? (((/* implicit */unsigned int) var_13)) : (1992367545U))))) ? (((var_5) ^ (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_11))))) : (var_10));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = -399568945;
        arr_3 [i_0] &= arr_1 [i_0];
        var_17 = ((/* implicit */unsigned int) (-(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_18 = var_3;
        var_19 = ((/* implicit */int) max((max((((/* implicit */unsigned int) -1067471597)), (3368905140U))), (((/* implicit */unsigned int) arr_5 [i_1] [i_1 + 1]))));
        var_20 = max((arr_5 [i_1] [i_1]), (var_14));
        arr_6 [i_1] = ((min((1852494316U), (((/* implicit */unsigned int) 255)))) ^ (((((/* implicit */_Bool) 324899904)) ? (((/* implicit */unsigned int) -1894870249)) : (361819845U))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        arr_10 [i_2] |= ((((/* implicit */_Bool) 1966486995)) ? (361819845U) : (((/* implicit */unsigned int) -1420751724)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 24; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_21 = var_3;
                        var_22 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1720826249)) ? (1908966677) : (0))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] &= ((/* implicit */int) ((unsigned int) arr_12 [i_2 + 2] [i_2 - 1]));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            {
                arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */unsigned int) arr_5 [i_7] [i_7])) : (arr_11 [i_6])))) ? (((((/* implicit */unsigned int) arr_14 [i_6] [i_7] [i_7] [i_7])) ^ (arr_9 [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -224033252)) ? (-1981996957) : (1894870247))))))) ? (((/* implicit */unsigned int) arr_21 [i_7])) : (((((arr_16 [i_7]) <= (((/* implicit */unsigned int) var_0)))) ? (arr_4 [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_15 [i_6]) : (-1409788542))))))));
                var_23 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (2442472986U) : (((unsigned int) var_7)))) <= (max((arr_9 [i_6]), (((/* implicit */unsigned int) (-(var_4))))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 3933147450U)) ? (1457728707U) : (2636916029U)));
            }
        } 
    } 
}
