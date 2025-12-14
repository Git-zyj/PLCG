/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129949
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
    var_12 ^= ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1]))));
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        }
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0])));
            var_16 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_1 [i_2 + 1])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_0] [i_3]) : (arr_7 [i_0] [i_0] [i_3])))));
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])) ? (arr_11 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [8U]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned char)0])))));
        }
        for (int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            var_19 = (-(((/* implicit */int) arr_10 [i_0] [i_0])));
            arr_16 [i_0] = ((/* implicit */int) (~(arr_8 [i_0] [i_0])));
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_4 + 2] [i_4 + 3]))));
        }
        var_20 += ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned int) (+(arr_15 [4])))))));
        /* LoopNest 2 */
        for (short i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    arr_25 [i_7] [i_7] [i_7] [i_7] = ((arr_14 [i_5] [i_6 - 1] [i_5 - 2]) ? (((/* implicit */int) arr_19 [i_5 + 1])) : (((/* implicit */int) arr_14 [i_5] [i_6 + 1] [i_5 + 2])));
                    arr_26 [i_5 + 2] [i_5 + 2] [i_7] [i_7] = ((/* implicit */int) ((short) arr_7 [i_6 + 2] [i_6 - 3] [i_6 - 2]));
                    arr_27 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 + 2])) ? (arr_7 [i_5 - 1] [i_5 - 2] [i_5 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 - 1])))));
                    arr_28 [i_5] [i_6 + 1] [i_6 - 3] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_6]))) ? (arr_12 [i_5 - 3]) : (arr_23 [i_5 - 1] [i_6 - 2])));
                }
            } 
        } 
        arr_29 [i_5 - 2] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5 + 1]))));
    }
    var_23 = ((/* implicit */unsigned char) var_3);
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_8))));
}
