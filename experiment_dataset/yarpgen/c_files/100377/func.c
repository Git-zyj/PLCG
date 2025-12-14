/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100377
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_5))))) ? (((unsigned int) 9223372036854775807LL)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1])))))))), (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [(signed char)14])), (var_11)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) var_13);
                        arr_10 [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (max((max((((/* implicit */unsigned long long int) -9223372036854775807LL)), (var_16))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2] [(unsigned short)8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(11408733562120583433ULL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_1])), ((unsigned char)112))))))))));
                        var_21 = ((/* implicit */signed char) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)-32743))) - (-9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1] [i_2] [i_2])))) + (30931)))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((int) max((((unsigned int) 9223372036854775807LL)), ((~(var_10)))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((var_3) <= (var_3))) ? (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_6 [i_0] [i_1] [i_2] [i_2])))) : (((/* implicit */int) ((signed char) arr_5 [i_2])))))), (min((((((/* implicit */_Bool) (unsigned short)14839)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) > (3699840150U))))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) var_4)) ? (1813206976872738736ULL) : (16633537096836812877ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_1 - 3] [i_2]))))) ? ((+((~(36028792723996672LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_2] [i_1 - 2] [i_0 - 3])), (4010009083U))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) != (9223372036854775797LL)));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1805872130) : (((/* implicit */int) arr_5 [i_4]))))) ? ((-(3597519673U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_4]))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)18)))) : ((~(9223372036854775806LL)))));
                    }
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) min((3ULL), (((/* implicit */unsigned long long int) -9223372036854775807LL))));
                        arr_15 [i_2] [i_1 - 2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 11408733562120583424ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)433))) : (0LL)));
                        var_29 = ((/* implicit */long long int) var_2);
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((max((9223372036854775807LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-120))))))), ((-(-9223372036854775805LL))))))));
                    }
                }
            } 
        } 
    } 
}
