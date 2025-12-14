/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13522
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2 + 3] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 2147483647)) ? (var_12) : (((/* implicit */long long int) arr_4 [i_0] [i_0])))) ^ (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_3 [i_0] [(short)8]) : (var_12))))) % (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0 - 3]), (arr_6 [i_0 - 1])))))));
                    arr_11 [i_0 - 4] [i_2] [i_0] = ((/* implicit */short) (unsigned char)233);
                    arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((int) max((var_8), (((/* implicit */unsigned int) (short)13639)))));
                }
            } 
        } 
    } 
    var_20 = var_16;
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 739345570))) ? (((((/* implicit */_Bool) var_12)) ? (2305843004918726656LL) : (((/* implicit */long long int) var_8)))) : (var_12)))) <= (max((((/* implicit */unsigned long long int) ((var_18) % (-1852859009466464056LL)))), (68719476735ULL)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_19) : (var_0))))) ? (var_13) : (((((/* implicit */_Bool) ((var_11) ? (var_17) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)64), (var_14))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_18)))))));
    var_23 = var_3;
}
