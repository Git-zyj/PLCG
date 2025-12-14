/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167436
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_8)) < (((((/* implicit */_Bool) 7809292748606532540ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11960))) : ((-9223372036854775807LL - 1LL)))))) ? (((/* implicit */int) var_16)) : (min((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) (short)26179)))), (((((/* implicit */int) var_13)) >> (((((/* implicit */int) (unsigned short)17363)) - (17343)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [i_0])))) ? (min((((/* implicit */unsigned int) ((int) 1562826622U))), (3325886699U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)24])))));
                var_18 &= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)213));
                var_19 = var_16;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) % (2725819400U)));
}
