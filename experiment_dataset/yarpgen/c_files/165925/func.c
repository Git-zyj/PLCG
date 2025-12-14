/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165925
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
    var_18 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_13))));
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) -1898670257)) : (var_0)))) && (((/* implicit */_Bool) ((((arr_2 [i_1] [i_0]) && (arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                arr_5 [i_0] [i_1] = ((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [i_0])), ((short)-32765)))) << (((/* implicit */int) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0])))));
                var_21 = arr_0 [(_Bool)1];
            }
        } 
    } 
}
