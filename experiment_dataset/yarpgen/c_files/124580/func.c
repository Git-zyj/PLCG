/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124580
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((((_Bool) (unsigned short)12360)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_5 [i_1] [i_1] [i_0]))))) : (min((2199023255520LL), (((/* implicit */long long int) arr_1 [i_2 - 2])))))), (max((((/* implicit */long long int) var_4)), (arr_3 [i_2 - 3] [i_2] [i_2 - 1])))));
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_2 [i_2 - 1]))))));
                    var_12 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_1), (max((var_1), (((/* implicit */short) var_3))))));
}
