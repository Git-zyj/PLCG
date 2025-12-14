/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115654
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (5980245708907686840LL) : (5980245708907686854LL))))))), (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) var_7)) ? (4344281506165688894LL) : (((/* implicit */long long int) var_8)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5980245708907686840LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)15065))));
                arr_8 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5980245708907686860LL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((/* implicit */long long int) (unsigned short)65535)), (5980245708907686840LL))) : (((/* implicit */long long int) ((arr_6 [i_0] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)7933);
                arr_10 [(unsigned short)0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)38780)) >> (((-5980245708907686841LL) + (5980245708907686854LL))))) << (((max((-5980245708907686841LL), (((/* implicit */long long int) arr_0 [i_0] [i_1])))) - (38860LL)))))) ? ((+(((((-6183704915488230955LL) + (9223372036854775807LL))) >> (((var_10) - (3358777114283593495LL))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4129)) ? (var_13) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (-5980245708907686841LL))))))))));
            }
        } 
    } 
}
