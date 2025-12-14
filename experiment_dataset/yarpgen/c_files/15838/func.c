/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15838
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) ((int) arr_0 [i_0])));
        var_17 = ((unsigned short) ((arr_0 [i_0]) ? (var_0) : (66590619U)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [(signed char)7] [i_1] [i_3] = ((/* implicit */unsigned short) ((signed char) (unsigned char)245));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_18 [i_3] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */long long int) var_5);
                                var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-237531098) : (((/* implicit */int) arr_11 [i_5 - 1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [(unsigned short)14])) ? (4228376678U) : (4228376669U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) arr_9 [i_6] [i_6]);
        var_20 = ((/* implicit */short) ((((var_5) + (((/* implicit */unsigned long long int) var_2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6])))));
    }
}
