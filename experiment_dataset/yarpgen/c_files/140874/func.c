/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140874
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
    var_11 = ((/* implicit */short) 1102676625);
    var_12 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] [(short)4] [i_1] = (unsigned short)0;
                var_13 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14580)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (unsigned short)65522))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (max((((/* implicit */long long int) (unsigned short)65535)), (-406735063335797505LL))))), (406735063335797488LL)));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) < (7724492394769098773LL)));
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) max((var_9), ((short)6106)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-2147483628) >= (((/* implicit */int) (_Bool)1)))))) : (var_4))), (min((6045150166219277301LL), (var_4)))));
}
