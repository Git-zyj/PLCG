/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122881
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) var_6);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (signed char)-91)))), (((/* implicit */unsigned long long int) min((-3066252413952508946LL), (((/* implicit */long long int) var_17))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)6659))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)24)));
                        var_22 = ((/* implicit */short) max(((-(((/* implicit */int) ((unsigned char) 942960227792308142ULL))))), (((((/* implicit */int) arr_2 [i_1 + 1])) - (((/* implicit */int) arr_2 [i_1 - 3]))))));
                        arr_14 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((var_7) ^ (((/* implicit */unsigned long long int) (-(var_9))))));
                        var_23 = ((/* implicit */unsigned int) var_4);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_1)))))))), ((~((~(((/* implicit */int) var_17))))))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_15)))))), (var_16))))));
    var_26 = ((/* implicit */signed char) var_3);
}
