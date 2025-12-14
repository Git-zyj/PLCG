/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132743
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1]), (arr_4 [i_0]))))) ^ (((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */long long int) 1583300383)) | (8667958335765874755LL)))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (var_0)));
        }
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2 + 2] = ((/* implicit */long long int) arr_3 [i_0]);
            var_19 ^= var_2;
            arr_10 [i_0] [(signed char)13] = (~((-(((/* implicit */int) arr_6 [i_0] [i_2 - 1])))));
        }
        for (long long int i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_20 = ((min((arr_12 [i_0] [i_3]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3]))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_3 + 1]))))));
            arr_13 [i_0] [i_3 - 2] = ((/* implicit */unsigned long long int) ((var_11) != (((((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1])) ? (arr_11 [i_0] [i_3 + 2]) : (arr_11 [i_0] [i_3 + 3])))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_12 [i_0] [i_3 + 1])))) ? (max((arr_1 [i_3 - 2] [i_3 + 3]), (arr_1 [i_3 + 2] [i_3 + 3]))) : (((arr_12 [2] [i_3 - 1]) | (arr_1 [i_3 + 1] [i_3 + 2])))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_3 + 1]) ? (((/* implicit */int) arr_3 [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3 + 3]))))) && (((/* implicit */_Bool) var_15))));
        }
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51))));
        var_24 = ((/* implicit */signed char) var_17);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) ((arr_1 [i_4] [i_4]) >> (((((arr_0 [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))))) - (13145675256552135561ULL)))));
        arr_16 [i_4] = ((/* implicit */_Bool) ((arr_0 [i_4]) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_8 [i_4]))) - (14827767ULL)))));
        arr_17 [i_4] = ((/* implicit */signed char) (((!(arr_14 [i_4]))) || (arr_4 [i_4])));
        arr_18 [i_4] = ((/* implicit */unsigned int) (+(var_16)));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */int) var_13);
        var_27 = ((/* implicit */long long int) arr_7 [(_Bool)1] [(_Bool)1] [i_5]);
    }
    var_28 = ((/* implicit */signed char) var_12);
}
