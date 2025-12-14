/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180827
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [i_0]))));
                var_18 = arr_5 [(unsigned char)15];
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_4 [(unsigned short)18] [i_1]))), (min((((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [(signed char)10] [i_1])) : (var_3)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) 4032LL))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (4032LL))) : (-4024LL))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((4294967295U) == (((/* implicit */unsigned int) var_3))))), ((unsigned short)65525)))))));
}
