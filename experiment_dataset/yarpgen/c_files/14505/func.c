/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14505
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (var_5)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_9)) : (arr_3 [i_0] [i_0]))), (((/* implicit */int) var_2))));
            var_12 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)65516)))) : ((+(((/* implicit */int) arr_1 [i_0] [i_1])))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)114)), (max(((+(var_1))), (max((((/* implicit */unsigned long long int) var_0)), (var_3)))))));
        }
        var_14 *= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 1; i_3 < 7; i_3 += 1) 
        {
            var_15 = ((_Bool) (+(arr_6 [i_2])));
            var_16 -= ((/* implicit */unsigned int) arr_2 [i_2] [6ULL] [i_2]);
            var_17 -= ((/* implicit */short) (!(arr_11 [i_2] [i_2] [i_2])));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((arr_0 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        var_19 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_6)))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_2]))));
        }
        var_21 = ((/* implicit */unsigned char) max((min((arr_18 [i_2]), (arr_18 [i_2]))), (((arr_18 [i_2]) << (((arr_18 [i_2]) - (14092190851019452798ULL)))))));
    }
}
