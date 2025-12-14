/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10411
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
    var_11 |= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) > ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)6970)) < (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [(unsigned char)3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)108)))))));
        var_12 &= var_9;
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)86)))) != ((~(((/* implicit */int) (signed char)71)))))))));
        var_13 = ((/* implicit */unsigned short) (signed char)115);
        arr_6 [i_0] = ((/* implicit */signed char) var_0);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_9 [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1])) >= (((/* implicit */int) (unsigned short)13202))));
        var_14 ^= ((/* implicit */unsigned short) (signed char)-103);
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 23; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (unsigned char)0);
                                arr_22 [i_1] [i_3] [i_3] [(signed char)20] [i_5] = arr_11 [(unsigned short)18];
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (unsigned short)25129))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_29 [i_3] = ((/* implicit */signed char) arr_19 [(unsigned char)8] [(unsigned short)11] [i_6 + 1] [i_2 - 4] [i_1] [i_3] [i_1]);
                                var_17 *= ((/* implicit */signed char) ((unsigned char) (unsigned short)12));
                                arr_30 [i_1] [i_2] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) var_3);
                                arr_31 [i_7] [(signed char)4] [(unsigned short)21] [(unsigned short)14] [i_3] [i_6] = var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((var_18), ((signed char)-52)));
    }
}
