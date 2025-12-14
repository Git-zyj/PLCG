/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111236
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
    var_19 -= ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((var_2) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 2])))) ^ (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [(signed char)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1])) + (((/* implicit */int) arr_2 [i_0 - 2]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((((((/* implicit */int) arr_7 [i_1])) << (((var_13) - (663319726540148422LL))))) - (851937)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 -= arr_9 [(_Bool)1] [i_2] [(signed char)2];
                    var_23 += ((/* implicit */short) ((((long long int) var_9)) / (arr_8 [i_1])));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((signed char) var_0));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)122))))));
                        var_25 = ((/* implicit */signed char) (_Bool)0);
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_18 [i_1] [(_Bool)1] [3LL] [i_5] = (!(((/* implicit */_Bool) (signed char)102)));
                        arr_19 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((arr_8 [i_3]) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                var_26 = ((/* implicit */signed char) min((var_26), (arr_22 [i_6] [i_7])));
                var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_22 [i_6] [i_7]))))))))));
            }
        } 
    } 
}
