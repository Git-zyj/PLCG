/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143878
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
    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((var_17), (min((var_18), (((/* implicit */int) (short)15772)))))) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)59979))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)59979)) >= (((/* implicit */int) (unsigned short)56939)))));
                    var_23 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)0)), (((arr_3 [i_1 - 2] [i_2] [i_2]) * (((/* implicit */int) min(((unsigned char)61), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_8 [i_3 - 1]))))))));
        var_25 = ((/* implicit */short) (_Bool)1);
    }
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (short)32761)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)32761)))), (var_5))), (((/* implicit */int) var_15)))))));
}
