/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146324
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
    var_17 = ((/* implicit */unsigned char) min(((((~(var_15))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((min((var_13), (var_13))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]);
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_13 [i_3] [7] = ((/* implicit */unsigned short) (-(var_15)));
                    arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [(short)2]);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) arr_1 [i_0])))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) (+(var_13)));
    }
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) var_9);
        arr_20 [i_5] = ((/* implicit */unsigned short) var_10);
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((short) var_15));
    }
    for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_17 [(unsigned short)3] [(unsigned short)3])), (((((/* implicit */_Bool) arr_23 [i_6 - 1])) ? (arr_22 [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 2])))))));
        arr_24 [i_6] [i_6] = min((((/* implicit */int) ((short) arr_23 [i_6 - 1]))), ((~(((/* implicit */int) arr_23 [i_6 - 2])))));
    }
    var_21 = ((/* implicit */long long int) ((short) 559845514));
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
    {
        var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_7 - 2]))));
        arr_28 [i_7] = ((/* implicit */unsigned char) var_4);
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)102)) + (-432442587)));
}
