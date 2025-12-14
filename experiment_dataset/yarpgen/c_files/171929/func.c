/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171929
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) max((3106828134U), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_3])))))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_3])) ? (-1LL) : (((/* implicit */long long int) 1188139172U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (1188139175U) : (((/* implicit */unsigned int) arr_0 [i_1])))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max(((~(3106828134U))), (((/* implicit */unsigned int) (short)32767))));
                var_20 = ((/* implicit */short) max((((int) (_Bool)1)), (((int) var_14))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
    {
        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    arr_21 [i_5] [i_5] [i_4 + 3] [i_6] = ((/* implicit */unsigned short) ((unsigned char) var_4));
                    arr_22 [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_6 + 1] [i_6])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        arr_25 [i_5] = min((min((arr_20 [i_5] [i_5 - 2]), (arr_20 [i_5] [i_5 + 4]))), (((((/* implicit */_Bool) var_15)) ? (arr_20 [i_5] [i_5 + 2]) : (arr_20 [i_5] [i_5 + 1]))));
                        var_21 -= max((max((((unsigned int) var_13)), (((/* implicit */unsigned int) ((unsigned char) var_2))))), (arr_20 [i_4] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        arr_28 [i_4] [i_5 + 1] [i_4] [i_8 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)231))))) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_6])) ? (((/* implicit */int) arr_24 [i_4 - 1] [i_5 + 4] [i_6] [(signed char)6] [i_5 + 4])) : (var_17))) : (((/* implicit */int) var_1))));
                        arr_29 [(unsigned short)0] [(_Bool)1] [i_4] [i_4] [i_5] [i_4] &= ((/* implicit */short) ((unsigned int) var_17));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_4] [i_6] [(unsigned char)18] [i_4])) ? (((/* implicit */int) arr_26 [i_4] [i_5] [i_5] [i_8] [(signed char)23] [i_8 - 1])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_6] [i_8]))) > (var_3)))) : ((-(((/* implicit */int) arr_24 [(short)22] [i_4] [i_5] [i_6] [(short)5]))))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1188139199U))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((-1LL), (((/* implicit */long long int) ((((/* implicit */int) ((short) var_11))) & (((/* implicit */int) var_14)))))));
}
