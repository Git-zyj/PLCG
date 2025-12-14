/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163246
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned long long int) (~(((var_8) ? (arr_1 [i_0]) : (((/* implicit */int) (short)-6946))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_4 - 1])) ? (((/* implicit */int) ((arr_2 [(short)4]) && (var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7)))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) >= ((+(arr_8 [i_2 - 1] [i_2 - 1] [i_1])))));
                            arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) * (arr_8 [i_4] [i_3] [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [(unsigned char)0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(var_8))))));
                            arr_15 [i_0] = var_1;
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) var_0);
            var_17 += ((/* implicit */signed char) (short)6932);
        }
        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)116)) : (arr_6 [i_0] [i_0] [(signed char)14])))));
        arr_19 [i_0] = ((/* implicit */signed char) arr_9 [i_0] [(short)19] [i_0] [i_0] [i_0] [(unsigned char)0]);
    }
    var_19 = ((/* implicit */int) var_7);
}
