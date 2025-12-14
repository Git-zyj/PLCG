/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128365
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (9083183330118917537LL))), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)29814)), (-1585339695356933929LL)))) ? (((/* implicit */int) ((unsigned short) (unsigned char)112))) : (((/* implicit */int) max(((unsigned short)55541), (((/* implicit */unsigned short) (signed char)95)))))))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5261128203221200686ULL)) ? (((/* implicit */unsigned long long int) -335649671)) : (5261128203221200686ULL)))) ? (((((((/* implicit */_Bool) -1115725245)) ? (((/* implicit */int) (short)-2590)) : (((/* implicit */int) (unsigned char)143)))) * (((/* implicit */int) (signed char)76)))) : (335649671)));
            }
        } 
    } 
    var_21 = var_8;
}
