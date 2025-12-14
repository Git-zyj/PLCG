/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187970
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 = ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2])) & (((/* implicit */int) (short)-14549)));
                        arr_10 [i_0] [i_0] [i_0] = ((long long int) arr_9 [i_0 - 2] [i_2 + 3] [i_2 + 2] [i_2 + 1]);
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [i_4] [i_4]))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 1])), ((unsigned short)63488))))))));
                        arr_14 [i_0 - 2] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_13 [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 1] [i_2 + 2])))) | (((/* implicit */int) arr_13 [i_0 + 1] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_2 + 1] [(signed char)23] = ((/* implicit */int) (!((_Bool)1)));
                                arr_22 [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-59))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-2)))))))) : (((/* implicit */int) ((_Bool) arr_13 [i_0 - 2] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_12);
}
