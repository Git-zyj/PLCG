/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15071
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)18))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)18)) << ((((~(((((/* implicit */_Bool) (short)-14654)) ? (15419167817857403164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18441))))))) - (3027576255852148442ULL)))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_2 [i_1]) & (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2364021017U))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                var_17 = ((/* implicit */signed char) ((unsigned short) (short)-20591));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_11);
}
