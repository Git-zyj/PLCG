/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165870
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_8) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (unsigned char)240)))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 65024)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16320)) ? (arr_10 [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3])))) : ((+(((/* implicit */int) arr_12 [i_3]))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((unsigned int) arr_11 [18]))) | (arr_11 [(short)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_10 [i_3]))) - (((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) -2147483647)))))))))))));
    }
    var_17 |= ((int) max((min((31ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(var_8))))));
}
