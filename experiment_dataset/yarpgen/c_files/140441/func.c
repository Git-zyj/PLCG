/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140441
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
    var_18 &= ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_3)) * (((unsigned long long int) 2588926409597850416LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */long long int) var_10)), (2588926409597850416LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1730324054150372297LL)) ? (2229916177U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32756)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = (+(min((((/* implicit */long long int) (+(((/* implicit */int) (short)-32766))))), ((-(-2588926409597850417LL))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_7 [i_1] [i_0] = 9223372036854775807LL;
                arr_8 [i_0] [i_0] = ((((long long int) (~(3834309909U)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [12LL]))));
            }
        } 
    } 
}
