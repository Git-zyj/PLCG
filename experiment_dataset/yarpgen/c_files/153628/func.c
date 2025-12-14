/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153628
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) arr_0 [i_0]);
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_1 [i_0]))))) ^ (1572864U))) - (1572858U)))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_14))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (((arr_0 [i_0]) >> (((((/* implicit */int) var_0)) + (47))))))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_18 |= arr_2 [i_1];
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) arr_5 [i_2] [i_2]);
        arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) | (1572864U)));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_7 [i_2] [i_2])), (var_12)));
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_22 = ((/* implicit */signed char) var_12);
            arr_14 [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_4]))) | (var_4)));
        }
    }
    var_23 = ((/* implicit */short) max((max((((/* implicit */long long int) var_13)), (max((var_12), (((/* implicit */long long int) var_0)))))), (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) / (var_12))) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        var_24 = ((/* implicit */long long int) var_6);
        arr_18 [14U] |= var_13;
        var_25 -= ((/* implicit */unsigned char) ((long long int) arr_16 [(short)4]));
        var_26 = ((/* implicit */unsigned int) var_2);
    }
}
