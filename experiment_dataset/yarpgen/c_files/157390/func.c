/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157390
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 |= min((((unsigned long long int) -8508155552468251214LL)), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) + (4315)))))));
                arr_5 [(short)8] [i_1] = ((/* implicit */short) ((unsigned char) ((short) (unsigned char)62)));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_2))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)44337)))) % (((/* implicit */int) ((_Bool) ((unsigned short) var_6)))))))));
}
