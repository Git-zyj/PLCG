/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103348
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
    var_11 = ((/* implicit */short) min((((/* implicit */int) (short)-12793)), (var_5)));
    var_12 += ((/* implicit */short) ((((/* implicit */unsigned int) var_5)) * (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-27339))))) + (var_6)))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = var_4;
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((long long int) arr_1 [i_0 - 1] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-18370)) ? (359826425824197471ULL) : (((/* implicit */unsigned long long int) 1443731092))));
            arr_9 [i_1] = ((/* implicit */short) ((arr_5 [i_1] [i_1 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18385)))));
            var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31225))) : (arr_5 [i_1] [i_1]))));
        }
        for (int i_3 = 2; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */int) ((short) ((((/* implicit */long long int) arr_10 [i_1])) | (-2328390707598686413LL))));
            var_16 -= ((/* implicit */unsigned long long int) ((arr_11 [i_3]) % (((((/* implicit */_Bool) arr_13 [(short)6])) ? (((/* implicit */long long int) arr_10 [4LL])) : (arr_11 [i_3])))));
            var_17 ^= ((((/* implicit */_Bool) arr_5 [i_3] [i_3 - 2])) ? (arr_7 [i_3 - 1] [i_3] [i_3 + 1]) : (((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_3 - 2]))) : (var_2))));
            var_18 = (~(arr_5 [i_1] [i_1]));
            var_19 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1 - 1]);
        }
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_20 = ((/* implicit */int) (short)-18377);
            arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 2])) ? (((/* implicit */int) arr_13 [i_1 - 2])) : (((/* implicit */int) arr_13 [i_1 - 2]))));
        }
        arr_18 [i_1] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2])) ? (((/* implicit */long long int) arr_10 [i_1 - 2])) : (((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)8]))) : (562949953421312LL))));
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(arr_15 [i_1 + 3])));
    }
    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_21 = (~(((unsigned long long int) (~(arr_22 [i_5])))));
        arr_23 [i_5] = ((/* implicit */short) -5056608748084400361LL);
    }
}
