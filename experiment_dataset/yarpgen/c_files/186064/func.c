/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186064
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((4294967295U) >> (((((max((8299432865511974685LL), (((/* implicit */long long int) (unsigned char)2)))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)54))))))) + (8299432865511974729LL))));
                    var_17 = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((2698472419U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((255LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1808)))))))))));
    var_19 &= ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */long long int) var_3)) & (3079434023388988087LL)))) ^ (min((var_16), (((/* implicit */long long int) min(((short)842), (var_2))))))));
}
