/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114915
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
    var_19 = ((/* implicit */unsigned short) var_15);
    var_20 = var_17;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_4 [i_1] [(short)0] [i_1 + 1]), (arr_4 [i_1] [(unsigned short)10] [i_1 - 2])))), (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)42))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)22)))))));
                    arr_9 [7ULL] [i_1] [i_1] [i_0] = var_0;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (-(max(((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_1))))));
}
