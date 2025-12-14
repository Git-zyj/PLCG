/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137004
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
    var_10 = ((/* implicit */int) var_2);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_11 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_12 = var_7;
        var_13 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) arr_3 [i_1]);
        var_14 = ((/* implicit */int) min(((~(arr_4 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_4 [i_1] [0])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));
        arr_6 [i_1] = ((/* implicit */_Bool) var_1);
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        var_15 |= var_0;
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? ((~(((/* implicit */int) arr_0 [i_2])))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) ((arr_2 [i_2] [i_2]) != (var_7)))) : (arr_2 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((var_17), ((+(((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_11 [i_3] [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1]))) : (arr_8 [(_Bool)1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62855))))))))))));
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_3])) : (arr_2 [i_3] [i_3])))) <= (((long long int) var_4))))), (arr_8 [i_3] [i_3])));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            arr_16 [23ULL] [i_3] [i_3] = ((/* implicit */int) arr_3 [i_4 - 2]);
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
        }
        var_19 = ((/* implicit */int) arr_8 [i_3] [i_3]);
        var_20 ^= var_1;
    }
}
