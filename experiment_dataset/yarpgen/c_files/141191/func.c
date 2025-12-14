/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141191
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
    var_12 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
    var_13 += var_1;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) arr_0 [2]);
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))));
        var_15 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (-(((unsigned long long int) var_9))));
        arr_8 [i_1] |= ((arr_4 [i_1]) >> ((((+(((/* implicit */int) var_2)))) + (23606))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_17 += ((/* implicit */long long int) var_2);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_2]))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_23 [(short)2] [i_4] = ((/* implicit */long long int) (~(var_1)));
                            var_19 -= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_4 + 1])) * (((/* implicit */int) arr_0 [i_4 + 1]))));
                            var_20 = ((/* implicit */short) var_1);
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_10 [i_4 + 1]))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((_Bool)0) ? (-1999924004) : (-1999923994))))));
        }
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_24 = ((/* implicit */unsigned char) (~(var_7)));
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_0 [i_2]))));
    }
}
