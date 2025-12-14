/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106479
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned char)9] [i_0] = ((/* implicit */unsigned int) 3168039804325985872LL);
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)239)) ? (-3168039804325985872LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4028)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)22029)))))));
                        var_14 = ((/* implicit */unsigned char) (short)4027);
                        var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) * (((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3]))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_0 - 1] [i_0])), (var_11)))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (7169680533111779194ULL)));
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((_Bool) var_6)))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_6 [i_4] [i_4]), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    var_17 = ((/* implicit */signed char) var_3);
}
