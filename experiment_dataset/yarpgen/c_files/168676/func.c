/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168676
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
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                arr_6 [i_0] = ((/* implicit */signed char) (~(((arr_5 [i_0] [i_0] [i_0]) & (arr_5 [i_0] [(signed char)8] [i_0])))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (var_3))), (((/* implicit */int) arr_0 [i_0 - 2])))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 7; i_2 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) < (((/* implicit */int) arr_8 [i_2])))))) : (arr_3 [i_2])));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 7; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [0U])) ? (((/* implicit */int) arr_12 [i_3] [i_3 + 2])) : (((/* implicit */int) arr_12 [i_3] [i_3 + 2]))));
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [(short)8])) : (((/* implicit */int) arr_1 [4]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_3))))));
        arr_17 [2] &= ((/* implicit */long long int) arr_15 [i_4 - 3]);
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 19; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_21 [i_4] [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_20 [i_4 - 2] [i_5] [i_6] [i_7])))) : (arr_18 [i_4 - 3])));
                        var_18 = ((/* implicit */unsigned long long int) (unsigned short)65517);
                    }
                } 
            } 
        } 
        arr_25 [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) var_10);
    }
}
