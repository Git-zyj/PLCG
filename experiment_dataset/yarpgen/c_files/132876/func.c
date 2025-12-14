/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132876
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
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (short)1)) ? (2370031830U) : (((/* implicit */unsigned int) -1)))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */long long int) (~(1924935466U)))), (105553116266496LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0])) % (max((2370031830U), (((/* implicit */unsigned int) 2147483647)))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0] [i_2])) <= (((((/* implicit */_Bool) 1924935465U)) ? (((/* implicit */long long int) var_4)) : (arr_3 [i_0])))))) : (-2147483643)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned int) var_10)))));
    var_16 &= ((/* implicit */unsigned short) ((long long int) ((((_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)1))) ^ (5302402296503714763LL))) : (((/* implicit */long long int) (+(var_5)))))));
}
