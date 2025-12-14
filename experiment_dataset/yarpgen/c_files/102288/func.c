/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102288
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
    var_16 -= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) (unsigned char)0);
        var_18 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)90));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)166))))));
        arr_3 [i_0] = 6U;
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 9854639502135490760ULL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned char)243))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (3534743222U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))))) ? (((((/* implicit */_Bool) 148523852U)) ? (((/* implicit */int) (unsigned short)42498)) : (((/* implicit */int) (short)-128)))) : ((+(((/* implicit */int) (unsigned char)12))))));
                        var_21 ^= ((((/* implicit */_Bool) min((((unsigned int) (unsigned char)91)), (4146443451U)))) ? (min((148523852U), (((/* implicit */unsigned int) (unsigned char)89)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_3]))));
                        arr_15 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) max(((+(var_11))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_23 = ((/* implicit */unsigned int) ((((5041540770517198938ULL) > (((/* implicit */unsigned long long int) var_8)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)23037))));
}
