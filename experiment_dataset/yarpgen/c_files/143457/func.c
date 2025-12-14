/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143457
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_3 [i_0]), ((_Bool)1)))) * (((/* implicit */int) var_12))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned short)15))));
        var_20 *= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned char)128))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) 1879048192U);
                        arr_16 [i_1] [14LL] [i_2] [i_2] [i_3] [i_4] = var_8;
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) ((signed char) (~(((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) var_9))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_8 [i_1] [i_1]))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) -3297157431272998550LL))) * (((10028081162311807568ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
}
