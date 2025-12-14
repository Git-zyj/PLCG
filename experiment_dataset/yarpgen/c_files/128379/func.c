/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128379
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
    var_10 = ((/* implicit */signed char) (-(((long long int) max((2816276764U), (1478690531U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((-((-(((/* implicit */int) arr_1 [i_0])))))) == (((/* implicit */int) ((1478690532U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))))))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */unsigned int) -1248245488)) < (arr_2 [4LL])))))) >> ((((-(arr_2 [6LL]))) - (2022290123U))))))));
        var_12 |= ((/* implicit */long long int) ((((_Bool) arr_0 [(signed char)3])) || (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-16))))), (((((/* implicit */_Bool) arr_2 [4LL])) ? (arr_0 [5]) : (((/* implicit */long long int) arr_2 [8ULL])))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_14 [i_4] [i_1] [i_1] [(short)17] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2816276764U)) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_1] [(_Bool)1])))));
                        var_13 |= ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) (-((-(((/* implicit */int) ((arr_8 [i_1] [i_1] [i_1]) <= (arr_5 [i_1]))))))));
    }
}
