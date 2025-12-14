/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15682
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)104)))) % (arr_3 [i_0]))) <= (((/* implicit */int) (signed char)-43)))))));
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) arr_1 [i_0] [i_0]))))) ? (((int) ((((/* implicit */int) var_4)) | (arr_5 [i_0] [(signed char)1] [i_0])))) : (((/* implicit */int) ((signed char) arr_4 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((int) var_9))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 13; i_4 += 2) 
            {
                {
                    var_18 = var_3;
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_9 [i_2] [i_4]))));
                }
            } 
        } 
        arr_12 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [12] [i_2] [i_2])) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */int) (signed char)-122)))))), (max((((/* implicit */int) (signed char)122)), (((int) arr_7 [i_2]))))));
    }
    for (int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_20 -= (-(((/* implicit */int) ((signed char) (+(arr_14 [i_5] [i_5]))))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-122))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (var_11) : (-450403274))) : (arr_15 [i_5 + 1]))) : (((/* implicit */int) ((signed char) (signed char)0)))))));
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) (+((+(arr_14 [i_5 - 1] [i_5 - 1])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */int) ((signed char) ((signed char) arr_15 [i_6])));
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) (+(arr_14 [i_6] [i_6])));
        arr_21 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6])) && (((/* implicit */_Bool) (signed char)122))));
    }
    var_22 *= var_2;
}
