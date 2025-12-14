/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154991
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(max((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_2]))) ? ((~(arr_6 [i_0] [i_0] [i_1] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (arr_2 [i_0])))))))));
                    arr_8 [i_2] [21] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (max((((/* implicit */int) var_11)), (arr_6 [i_1] [i_1] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_2 [i_0])))))) : (((unsigned long long int) (+(arr_0 [(_Bool)1]))))));
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_1 [i_0]))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_2]) ^ (arr_0 [i_0]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_3))))))) & (((((/* implicit */int) var_11)) - (((/* implicit */int) var_10))))));
}
