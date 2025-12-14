/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173680
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((arr_2 [i_0] [i_0] [i_1]) ? (var_15) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), (((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0] [i_0]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) arr_8 [i_2] [i_1]);
                            var_21 *= ((/* implicit */short) arr_5 [i_1] [i_2] [i_3]);
                            arr_12 [i_0] [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned int) ((min((2491464246U), (((/* implicit */unsigned int) 1008285754)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [7U])))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((int) 15U)), (((/* implicit */int) min(((signed char)-5), (((/* implicit */signed char) (_Bool)1)))))));
        }
        var_22 = var_1;
    }
    var_23 ^= ((/* implicit */unsigned int) var_8);
    var_24 |= ((/* implicit */signed char) 1008285754);
}
