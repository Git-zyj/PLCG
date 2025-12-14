/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106049
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
    var_12 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
    var_13 = (short)31442;
    var_14 = ((short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((max((((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)31442)))), (((((/* implicit */_Bool) -1654069931)) ? (((/* implicit */int) arr_2 [7] [(unsigned short)20])) : (2147483618))))), (((/* implicit */int) var_6))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_0]);
            }
        } 
    } 
}
