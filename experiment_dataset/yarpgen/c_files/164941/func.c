/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164941
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
    var_18 = ((/* implicit */int) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) >> (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_10))))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] |= ((/* implicit */signed char) (+(((var_3) >> (((var_15) - (722649534U)))))));
                        var_20 ^= ((/* implicit */signed char) ((-3679675401926825463LL) >= (((/* implicit */long long int) 1445046896U))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) % (((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned long long int) var_14)), (var_4)))));
        var_21 = ((/* implicit */unsigned char) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (var_12))))), (((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_0)))))))))));
    }
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) max((2849920417U), (1445046892U)))) >= (max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (min((0LL), (((/* implicit */long long int) (signed char)109)))))))))));
        var_23 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)70)), ((-(10304906106071910582ULL)))));
    }
    var_24 = ((/* implicit */unsigned int) var_14);
}
