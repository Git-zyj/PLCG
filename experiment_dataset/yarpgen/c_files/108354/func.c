/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108354
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
    var_11 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_3)))));
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -1652859037)) ? (((/* implicit */int) (!(((-2003011682) >= (-1014218016)))))) : ((+(var_7)))));
                var_14 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_0])))))))));
                var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                var_16 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((min((var_6), (((/* implicit */short) (!(var_9)))))), ((short)-32746)));
}
