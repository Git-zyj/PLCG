/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160906
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = (signed char)(-127 - 1);
        arr_3 [7U] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53924))) - (((long long int) (unsigned short)53921))));
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)53927)) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53925)) && (((/* implicit */_Bool) ((min((var_7), (574208952489738240LL))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1])))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [(_Bool)0]))) ^ (arr_9 [i_2 + 2] [(_Bool)1] [i_3 + 2])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [(short)1])) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned short)53943))))), (max((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_15 = ((/* implicit */unsigned char) arr_12 [i_3 + 1] [i_2 + 2] [i_2 + 2]);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        arr_17 [i_4] [3LL] = ((/* implicit */signed char) (short)12573);
        arr_18 [0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_1), (var_1)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) 1986428696)), (arr_9 [i_4] [i_4] [i_4])))))) || (((var_2) && (((/* implicit */_Bool) -1799045421))))));
        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (arr_13 [i_4]) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (var_1)))));
    }
    var_17 = ((/* implicit */int) var_10);
}
