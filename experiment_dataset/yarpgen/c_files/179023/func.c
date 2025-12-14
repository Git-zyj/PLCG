/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179023
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
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((((/* implicit */_Bool) (~(max((var_6), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_3))))) >= (var_6))))) : (((((/* implicit */_Bool) (~(-9075537866091043349LL)))) ? (min((9075537866091043343LL), (((/* implicit */long long int) 1751844687U)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_7)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_16 += ((/* implicit */_Bool) ((((var_5) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? ((-(var_3))) : ((-(((/* implicit */int) var_11))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0] [i_0 + 1]));
        arr_3 [i_0] = ((/* implicit */int) var_6);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1751844687U)) + (((((/* implicit */_Bool) 9075537866091043343LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (14444631000589315236ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = (i_1 % 2 == zero) ? (((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) 1751844698U))))), ((short)-22711)))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((1751844687U) << (((arr_5 [i_1]) - (3049932343U)))))) : (9075537866091043366LL))) : (((/* implicit */long long int) ((/* implicit */int) (((-(arr_0 [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) min(((short)-6222), (((/* implicit */short) var_13)))))))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) 1751844698U))))), ((short)-22711)))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((1751844687U) << (((((arr_5 [i_1]) - (3049932343U))) - (4086677659U)))))) : (9075537866091043366LL))) : (((/* implicit */long long int) ((/* implicit */int) (((-(arr_0 [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) min(((short)-6222), (((/* implicit */short) var_13))))))))))));
        var_17 ^= ((/* implicit */short) ((((((long long int) (~(((/* implicit */int) arr_1 [i_1] [i_1]))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2775196519U)))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((short) arr_6 [i_1]));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2]);
                    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -9075537866091043331LL)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))) : (((((/* implicit */unsigned long long int) 3727948385U)) ^ (var_10)))))));
                }
            } 
        } 
        arr_15 [i_2] = (-(9075537866091043366LL));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (3633608575U))))));
    }
}
