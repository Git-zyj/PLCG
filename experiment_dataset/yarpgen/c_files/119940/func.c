/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119940
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = var_1;
                var_12 = ((/* implicit */unsigned short) ((signed char) var_2));
                var_13 = ((/* implicit */int) ((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)9)))) <= (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65059)) : (((/* implicit */int) (unsigned char)215))))))) <= (((/* implicit */int) ((-7066229119728863152LL) <= (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (signed char)-1)))))))))));
            }
        } 
    } 
    var_14 -= ((int) (short)26097);
}
