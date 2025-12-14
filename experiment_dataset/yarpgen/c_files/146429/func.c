/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146429
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned char) (_Bool)1);
        var_13 *= ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))) : (((unsigned int) 2027080382)));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_10))));
        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) ((signed char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_5 [i_1] [i_1])) - (234))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_4 [i_1])), (var_5))), (var_5)))))))));
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (short)-17855)), ((unsigned short)32208))), (((/* implicit */unsigned short) ((_Bool) arr_9 [i_2] [i_2 - 1])))));
        var_20 = ((/* implicit */int) max(((-(8111935434486495357LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22232)) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1])))))));
    }
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned char i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) var_6);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)127)))) : (((unsigned long long int) (unsigned char)113))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (signed char)124)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2795913193U)));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) max((905256545), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767))))))) < (((long long int) (signed char)21)))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((14109811616923792811ULL) - (14109811616923792796ULL)))));
        var_26 ^= ((/* implicit */unsigned short) (+(((((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_11)))) + ((-(((/* implicit */int) var_1))))))));
    }
}
