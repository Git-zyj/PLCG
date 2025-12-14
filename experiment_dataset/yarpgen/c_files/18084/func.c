/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18084
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
    var_18 = ((/* implicit */unsigned long long int) max((1252778615), (((/* implicit */int) ((signed char) var_6)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 15490869297248079300ULL))));
                        var_20 &= ((/* implicit */signed char) arr_2 [i_2]);
                        var_21 = (-(-1252778599));
                        var_22 = ((/* implicit */long long int) -1252778604);
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [19LL])) ? (((/* implicit */int) arr_8 [i_0] [(signed char)14] [i_2] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2] [14]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) ((int) arr_4 [i_0] [i_0] [3]));
    }
}
