/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151183
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) (+(((int) arr_1 [i_0]))))) ? ((~(((int) var_10)))) : (max((var_15), ((-(arr_1 [i_0]))))));
        var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), ((+(var_5))))))));
    }
    for (int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_22 ^= arr_4 [i_1];
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [6]))));
    }
    var_24 -= var_17;
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_25 = ((/* implicit */int) min((var_25), (-2147483640)));
        var_26 = ((/* implicit */int) min((var_26), (((int) min(((+(arr_7 [i_2]))), ((~(-271101390))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4] = ((int) min((arr_15 [i_2] [i_3] [i_2] [i_2]), (arr_15 [i_3] [i_3] [i_4] [i_4])));
                    var_27 = var_2;
                    arr_17 [12] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_3]))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_28 = (~((-(max((arr_9 [i_5] [i_5] [i_5]), (271101388))))));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 11; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    var_29 = ((/* implicit */int) min((var_29), (var_14)));
                    var_30 = ((int) (~((~(var_19)))));
                    var_31 = max((((((/* implicit */_Bool) max((var_5), (arr_10 [i_5] [0])))) ? (min((arr_19 [i_5]), (896))) : (arr_19 [i_7]))), ((~(((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5])) ? (var_10) : (var_15))))));
                }
            } 
        } 
        var_32 += (+(((int) (~(var_14)))));
    }
}
