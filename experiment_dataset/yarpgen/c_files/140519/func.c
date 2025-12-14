/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140519
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */signed char) var_7);
        arr_3 [i_0] [4LL] = ((((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) + (2147483647))) >> (((26U) >> (((var_7) - (3676680169768565285LL))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) 12);
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_5 [i_1]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        arr_11 [21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)59150)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))));
        var_12 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [8ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
        var_13 &= ((/* implicit */unsigned long long int) var_7);
        var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) 27383365)) ? (413840124U) : (((/* implicit */unsigned int) var_1))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))) | (-2614271594282441151LL)))) : ((+(var_10)))));
        arr_15 [i_3] [(signed char)18] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) 987269186)) % (((((/* implicit */_Bool) var_9)) ? (13ULL) : (12801568887057469912ULL)))))));
    }
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_4 [i_4 - 2]))) << (((min((((/* implicit */unsigned long long int) -5739813850193246713LL)), (arr_4 [i_4 - 2]))) - (12706930223516304846ULL)))));
        arr_19 [(unsigned short)20] = ((/* implicit */unsigned char) ((long long int) ((int) arr_7 [i_4])));
    }
    var_16 = ((/* implicit */signed char) min((var_16), (var_5)));
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 = ((/* implicit */long long int) max((var_18), (var_7)));
}
