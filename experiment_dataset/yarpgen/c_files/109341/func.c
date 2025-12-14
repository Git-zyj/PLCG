/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109341
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
    var_14 = ((max((var_3), (var_5))) | (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max(((~(var_4))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)30)) > (((/* implicit */int) (unsigned short)36366)))))));
                    var_16 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_0])))));
                    var_17 = ((/* implicit */signed char) ((unsigned char) (+(14653102569915223437ULL))));
                    arr_8 [i_1] = ((/* implicit */int) arr_6 [i_1 - 1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_4);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)17)) : (var_2)))) ^ (4568229509277615761LL)))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_13)) : (var_12)))));
    var_20 = ((/* implicit */unsigned char) var_13);
}
