/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164838
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
    var_12 = ((/* implicit */int) ((((((/* implicit */int) ((_Bool) var_5))) * (((((/* implicit */_Bool) (unsigned short)42367)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) < (((/* implicit */int) (short)14728))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)0] [i_1] [(unsigned short)0] [(unsigned short)0] = (((-(((/* implicit */int) (unsigned short)65535)))) >= (((/* implicit */int) ((_Bool) ((int) (unsigned short)6)))));
                    var_14 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [6U]))));
                }
            } 
        } 
    } 
}
