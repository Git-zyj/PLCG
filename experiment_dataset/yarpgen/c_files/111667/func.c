/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111667
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (unsigned short)18756)))));
                var_15 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-24147)), ((unsigned short)30461)))) > (((int) 34358689792ULL))));
                var_16 -= ((/* implicit */long long int) min((max(((short)-23850), (((/* implicit */short) (unsigned char)57)))), (((/* implicit */short) var_4))));
                arr_6 [3U] = ((/* implicit */_Bool) (short)-24147);
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)8160), ((short)8154))))))), (((var_8) % (((/* implicit */int) var_0))))));
}
