/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172055
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
    var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_11) + (2147483647))) << (((var_14) - (2016483022U))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (arr_1 [i_0])))))));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) 448433388))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned short) (((~(448433388))) + (((/* implicit */int) (unsigned char)11))));
                        var_24 ^= ((/* implicit */int) ((unsigned char) arr_2 [i_4]));
                        var_25 = ((/* implicit */unsigned long long int) arr_6 [i_4] [i_2] [i_1]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 2ULL))));
    }
}
