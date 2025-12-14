/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103667
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (min((0ULL), (((/* implicit */unsigned long long int) ((long long int) (short)0)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (unsigned char)32);
                    arr_10 [i_1] [i_1] [i_1] = var_17;
                }
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) ((short) 6ULL))))));
        arr_14 [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5))) : (2893705699498616930LL)))));
    }
    var_23 = ((/* implicit */long long int) var_2);
    var_24 = ((/* implicit */long long int) var_8);
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))))));
}
