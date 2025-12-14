/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154826
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3017011376204557141LL)))))));
    var_17 = ((/* implicit */_Bool) ((unsigned int) var_3));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6827701451429813605LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) : ((~(((/* implicit */int) (signed char)-13))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((int) arr_0 [i_0])), (((arr_0 [(unsigned char)3]) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) : (var_3)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                    arr_10 [i_0] [i_1] [(short)9] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1]))) < (var_4))))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (short)32767)) - (32767)))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_8), (arr_8 [i_3 + 1] [i_3] [(short)4] [i_3 - 3])))) & (((/* implicit */int) ((arr_5 [i_3] [i_3 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 2]))))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) min((var_0), (((/* implicit */signed char) arr_1 [i_3])))))))) ? ((+(((/* implicit */int) arr_1 [i_3 + 2])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_3 + 3])) : (((/* implicit */int) arr_8 [i_3] [i_3] [(_Bool)0] [i_3]))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)40047))))));
    }
    for (long long int i_4 = 4; i_4 < 18; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4] [i_4 - 4])) | (((/* implicit */int) arr_20 [i_4] [i_4 - 1]))))) ? (((((/* implicit */_Bool) arr_20 [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_20 [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) arr_20 [i_4 - 3] [i_4 - 1])))) : ((~(((/* implicit */int) arr_20 [i_4 - 1] [i_4 - 4]))))));
        arr_22 [i_4] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((unsigned short) 3017011376204557141LL))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_4 + 1] [i_4 + 1])), (min((((/* implicit */unsigned short) arr_19 [i_4 - 3])), (var_13))))))));
        arr_23 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [(short)6] [i_4 - 1]))))) || (((/* implicit */_Bool) ((unsigned long long int) var_10))))))) | (((long long int) arr_18 [i_4 + 1]))));
    }
}
