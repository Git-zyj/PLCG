/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181519
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
    var_10 = ((/* implicit */unsigned short) ((signed char) var_7));
    var_11 = ((/* implicit */unsigned char) 130023424U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 10303199777385527989ULL;
                arr_5 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) var_5);
                var_12 |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 10303199777385527989ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59337))) : (8143544296324023626ULL))));
            }
        } 
    } 
}
