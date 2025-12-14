/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124831
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = (-(523707495));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(min((-943600930279768235LL), (943600930279768209LL)))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_5 [i_1]))))), (((2833783833398629959LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_1])));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]))));
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2] [i_2])) >= (719204394)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_4))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_2) > (((/* implicit */long long int) arr_10 [i_3] [i_3]))))) >> (((arr_4 [i_3]) - (5315075203272689488LL)))));
    }
    var_18 &= ((/* implicit */unsigned long long int) var_8);
    var_19 = ((/* implicit */unsigned short) (+(var_1)));
}
