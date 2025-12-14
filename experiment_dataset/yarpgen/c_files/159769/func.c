/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159769
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_4)));
        var_11 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_6);
        arr_4 [i_0] = ((/* implicit */short) var_6);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_12 = ((/* implicit */long long int) var_3);
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 + 1] [i_3])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_1] [(unsigned char)1] [i_2] = ((/* implicit */short) arr_8 [i_4 - 2] [i_2] [i_4 - 1]);
                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (arr_8 [i_1] [i_1] [i_4]) : (arr_8 [i_4] [i_1] [i_4]))) : (((/* implicit */long long int) var_0))));
                var_15 = ((/* implicit */signed char) (+(arr_12 [i_1])));
                arr_15 [i_1] [22LL] [8] |= ((/* implicit */unsigned char) (+(arr_8 [i_1] [i_1] [i_4 - 1])));
            }
            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_1] [i_2]))));
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) var_3))));
        }
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1] [i_1])));
        var_19 = (+(((/* implicit */int) var_8)));
    }
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_6))))))))));
}
