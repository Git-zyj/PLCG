/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152915
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-10154))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0 + 1] &= ((/* implicit */int) min((-3505540837429594891LL), (((/* implicit */long long int) (+(((/* implicit */int) ((short) (signed char)-75))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-10154))));
                        var_12 = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)-10148))) - (var_8))))));
                    }
                } 
            } 
        } 
        var_13 ^= ((/* implicit */short) (~(min((var_7), (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)20] [i_0 + 1] [i_0 - 1] [i_0])) ? (-2147483633) : (0)))))));
    }
}
