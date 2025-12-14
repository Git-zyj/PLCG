/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16337
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
    var_13 = ((/* implicit */unsigned short) (!(((((((/* implicit */unsigned long long int) var_12)) % (17901719593433327429ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */unsigned short) var_7);
    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (((((((/* implicit */_Bool) (unsigned char)240)) ? (var_6) : (18446744073709551596ULL))) ^ (max((18446744073709551596ULL), (var_4)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_5))) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0] [i_1] [i_2]))) : (max((var_6), (((/* implicit */unsigned long long int) var_9)))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (unsigned short)11849))))) : ((-(arr_1 [i_0]))))) - (11799ULL)))));
                    var_17 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_0))))), (((long long int) arr_6 [i_0] [i_0] [i_1] [(unsigned char)10]))))));
                }
            } 
        } 
        arr_7 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((((/* implicit */int) var_0)) ^ (arr_3 [i_0]))) : (((/* implicit */int) ((arr_4 [i_0] [13ULL] [i_0]) >= (((/* implicit */long long int) arr_3 [i_0])))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(arr_3 [i_0])))), (((long long int) arr_2 [i_0] [i_0] [i_0]))));
    }
}
