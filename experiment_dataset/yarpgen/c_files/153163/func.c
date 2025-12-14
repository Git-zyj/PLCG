/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153163
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_3 [i_0] [20] = ((/* implicit */int) min((min((var_8), (((/* implicit */unsigned short) var_3)))), (min((((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1])), (var_8)))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) var_1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
            var_14 |= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) == (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 2]))));
            var_15 = ((unsigned long long int) -5);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1 - 1] [i_3]))));
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [14ULL] [i_3])))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
            arr_16 [i_1] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1]))) : (var_0))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [5LL])))))));
        }
    }
    for (short i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_18 += ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)254)) >> (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((arr_15 [i_5] [i_5 + 2] [i_5 + 1]), (arr_15 [i_5] [i_5 + 2] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
    }
    var_20 = ((/* implicit */unsigned short) max((max(((+(var_7))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (62371)))))) ? ((-(((/* implicit */int) var_11)))) : (var_10))))));
    var_21 = ((/* implicit */int) var_8);
    var_22 = ((/* implicit */short) ((long long int) var_3));
}
