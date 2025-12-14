/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165919
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 = min((min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-1)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2]))))))));
                    var_12 ^= ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_2] [1] [(unsigned short)14] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
