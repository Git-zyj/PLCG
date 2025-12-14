/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138631
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
    var_10 = var_5;
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_6)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) var_6)))), (((_Bool) ((_Bool) var_2)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) var_4);
                    var_13 = ((/* implicit */_Bool) max((var_13), (var_8)));
                    arr_10 [i_0] [(signed char)15] [i_2] = ((/* implicit */signed char) (!(((var_5) || ((!(((/* implicit */_Bool) (unsigned short)48569))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((arr_3 [i_3] [i_3] [i_3]) ? (((/* implicit */int) ((_Bool) var_7))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_5 [(_Bool)1] [i_3 + 1] [i_3]))))));
        arr_14 [i_3 + 2] = ((signed char) arr_12 [i_3 - 3]);
        arr_15 [i_3 - 3] = arr_12 [i_3];
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_11 [i_3 + 1])));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_15 = ((/* implicit */signed char) min((((_Bool) (unsigned short)0)), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16966)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))))) < (((/* implicit */int) (signed char)-126))))));
        arr_19 [i_4] = min((arr_18 [i_4]), (var_8));
        var_16 = ((/* implicit */signed char) ((_Bool) (signed char)(-127 - 1)));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) << (((var_5) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) min((((((/* implicit */_Bool) arr_17 [i_4] [i_4])) || (arr_18 [i_4]))), ((!(var_4)))))) : (((/* implicit */int) (!((_Bool)1))))));
    }
    var_17 = ((/* implicit */signed char) ((_Bool) var_9));
    var_18 = ((/* implicit */_Bool) ((signed char) ((unsigned short) (~(((/* implicit */int) (_Bool)0))))));
}
