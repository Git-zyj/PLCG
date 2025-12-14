/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14490
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
    var_18 &= ((/* implicit */unsigned short) var_12);
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (short)(-32767 - 1))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned char) var_16);
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+((+(var_0)))))), (((((/* implicit */_Bool) (unsigned short)31552)) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) == (557481943)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) var_3);
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_23 &= ((/* implicit */unsigned char) min(((unsigned short)33983), (((/* implicit */unsigned short) (short)32767))));
        arr_13 [i_3] [i_3] = (unsigned short)33983;
    }
    var_24 = ((/* implicit */unsigned int) var_10);
}
