/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153634
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1 + 1] [i_0] = ((/* implicit */_Bool) (+((~(((int) -1176894170))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) arr_5 [(unsigned char)10])))))));
                var_10 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_2 [i_1]))))));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 - 1]))) && (((/* implicit */_Bool) ((arr_2 [i_1]) ^ (arr_2 [i_1]))))))) >= ((+((-(((/* implicit */int) arr_0 [(_Bool)1]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) var_0)) - (((/* implicit */int) var_6)))), ((~(((/* implicit */int) (_Bool)1)))))) >> ((((-(((/* implicit */int) ((short) var_8))))) - (27934)))));
}
