/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149084
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(short)0] = ((/* implicit */_Bool) var_3);
        var_14 ^= ((/* implicit */int) var_3);
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (+(var_13)));
        var_16 = ((/* implicit */long long int) ((int) ((short) arr_5 [i_1])));
        var_17 = ((/* implicit */int) arr_5 [i_1]);
        var_18 = ((/* implicit */signed char) (((~(var_2))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1243400520U)) ? (((/* implicit */int) var_1)) : (-1591292990)));
        var_20 &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (((((/* implicit */_Bool) 1243400514U)) ? (1243400514U) : (var_2))))))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_4);
        var_22 = ((/* implicit */int) ((unsigned char) ((((long long int) (unsigned short)16384)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))));
    }
}
