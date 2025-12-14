/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120778
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
    var_19 = ((unsigned short) ((unsigned short) var_2));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_20 -= ((unsigned short) ((unsigned short) (unsigned short)11391));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) ((unsigned short) arr_7 [i_0] [i_1] [i_2 + 1])))));
                            arr_14 [(unsigned short)13] [i_1] [(unsigned char)0] [(unsigned char)5] [(unsigned short)11] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_10 [i_2 - 2] [(unsigned short)8] [i_3])));
                            var_22 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 2])));
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_18 [i_3] [i_2] = ((unsigned short) ((unsigned short) (unsigned char)0));
                            arr_19 [i_3] [(unsigned short)8] [i_3] [i_3] [i_3] = ((unsigned short) ((unsigned char) arr_11 [i_2 + 2] [i_2] [i_2] [(unsigned char)11] [i_2 - 2] [i_2]));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) ((unsigned char) (unsigned char)167)))));
                            var_24 = ((unsigned char) (unsigned short)21);
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((unsigned char) arr_10 [i_2 - 2] [i_2 - 2] [(unsigned char)2]));
                            arr_25 [(unsigned short)12] [i_1] [i_2] [(unsigned short)1] [i_7] = ((/* implicit */unsigned short) ((unsigned char) var_2));
                        }
                        var_26 = ((unsigned short) ((unsigned char) (unsigned char)11));
                        arr_26 [(unsigned char)19] [i_1] [i_2] [i_1] = ((unsigned short) ((unsigned short) (unsigned short)47961));
                    }
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)97));
                }
            } 
        } 
    } 
}
