/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15161
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
    var_10 = ((signed char) ((((/* implicit */_Bool) (unsigned short)41471)) ? (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6135935514313753837ULL))))));
    var_11 ^= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned short)55783)) : (((/* implicit */int) (unsigned short)55781))));
                var_13 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(4575657221408423936LL)))) ? (167619783U) : (((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)8]))))));
                arr_5 [(unsigned char)4] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) arr_0 [i_1 + 2]));
            }
        } 
    } 
}
