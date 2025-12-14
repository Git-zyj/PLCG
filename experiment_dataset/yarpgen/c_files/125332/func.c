/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125332
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_15 ^= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
        arr_3 [(_Bool)1] &= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 + 1] [2LL]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_2]))))));
                    var_17 &= ((/* implicit */long long int) (-(arr_8 [i_0 - 2] [i_0 - 1])));
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_9 [i_0] [(signed char)17] [i_1] [i_0]))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 3; i_3 < 24; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] [i_3 - 2] &= ((/* implicit */long long int) arr_12 [i_3 - 3] [i_3]);
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_3] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) arr_12 [i_3] [i_3])) : ((-((+(arr_5 [i_3] [(_Bool)1])))))));
    }
    /* vectorizable */
    for (signed char i_4 = 3; i_4 < 24; i_4 += 2) /* same iter space */
    {
        var_18 = arr_8 [i_4] [i_4 + 1];
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_4] [i_4]))));
        arr_19 [i_4] = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_17 [i_4]))))));
    }
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    var_20 = (~(var_6));
}
