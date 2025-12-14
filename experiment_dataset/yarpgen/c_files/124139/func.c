/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124139
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
    var_19 = ((/* implicit */_Bool) (unsigned short)44029);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [(short)5] = ((/* implicit */unsigned char) var_14);
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)44023))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), ((~(min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_0 - 3]))) > (var_9)))), (max((((/* implicit */unsigned int) (short)-12112)), (arr_4 [0ULL] [i_1] [0ULL])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_6);
    var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((((/* implicit */int) (short)-20)) + (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4092142057U)));
    var_24 = ((/* implicit */long long int) max((var_13), (((((((/* implicit */_Bool) (unsigned short)44011)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) var_8))))));
}
