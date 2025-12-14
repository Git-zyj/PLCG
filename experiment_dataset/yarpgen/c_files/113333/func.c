/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113333
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
    var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) var_4))));
    var_11 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) != (268435455)));
    var_12 ^= ((/* implicit */signed char) var_2);
    var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (((unsigned char) (signed char)75))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32766))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) min((((/* implicit */unsigned short) min((arr_5 [i_1]), (((/* implicit */unsigned char) var_5))))), ((unsigned short)65535)));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned long long int) (((-(((/* implicit */int) (unsigned short)0)))) < (((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
