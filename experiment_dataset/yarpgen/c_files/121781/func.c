/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121781
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
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 3]))));
        var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 - 4]))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0 + 1]))));
    }
    for (unsigned short i_1 = 4; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / ((((_Bool)1) ? (((((/* implicit */int) (signed char)102)) * (((/* implicit */int) (signed char)-103)))) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) == (4294967295U)))), (arr_11 [i_2 - 1] [i_3] [i_4 + 1])))))));
                        arr_16 [i_4 + 1] [i_4] [i_2 - 1] [i_4] [i_1 - 2] = ((/* implicit */unsigned long long int) var_15);
                        var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-89))));
                        var_27 += ((/* implicit */int) arr_11 [i_1 - 1] [i_2 + 1] [i_4 + 3]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) (signed char)102);
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */_Bool) (((~(1220289272890757506LL))) | (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
                    }
                }
            } 
        } 
        arr_19 [i_1 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2434105576U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)102)))))))) ? (max((((((((/* implicit */int) (short)-18367)) + (2147483647))) << (((641710980U) - (641710980U))))), ((+(((/* implicit */int) (signed char)70)))))) : (((int) arr_11 [i_1 + 1] [i_1 - 2] [i_1 - 4]))));
        var_31 = ((/* implicit */int) arr_15 [i_1 - 4] [i_1 - 3] [i_1 - 3] [i_1 + 1]);
        var_32 = ((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 2]);
    }
    var_33 = ((/* implicit */short) ((((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_4)))))) ? (((/* implicit */unsigned int) ((int) max(((unsigned char)147), (((/* implicit */unsigned char) var_18)))))) : (((unsigned int) (+(((/* implicit */int) (unsigned short)50067)))))));
    var_34 &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-127)) & (((/* implicit */int) var_16))));
}
