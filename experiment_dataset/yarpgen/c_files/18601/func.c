/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18601
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [i_2 + 2] = min(((((+(((/* implicit */int) var_3)))) * (((/* implicit */int) min((arr_2 [i_2] [i_1] [(unsigned char)3]), (((/* implicit */short) var_0))))))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])));
                    arr_7 [i_0] [8] [6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((var_7), (((/* implicit */short) arr_1 [(short)6] [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_0] [(unsigned char)20] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (var_17)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [(short)20])) || (((/* implicit */_Bool) (unsigned short)33704))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_1])), (var_16))))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1 - 4] [i_1] [i_2] [i_1]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (var_4)))) ? ((~((~(((/* implicit */int) (unsigned short)47262)))))) : (((((/* implicit */_Bool) (unsigned short)54083)) ? (((/* implicit */int) arr_9 [(unsigned short)17] [i_1 - 1] [i_2 + 3] [i_2 - 1])) : ((~(((/* implicit */int) (unsigned short)33702)))))));
                    }
                    arr_13 [i_1] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */int) var_19)), (min((188606053), (((/* implicit */int) (short)-14636))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            {
                arr_18 [i_4] [i_4] = ((/* implicit */signed char) arr_1 [i_4] [i_4]);
                arr_19 [i_4] = ((/* implicit */unsigned short) (signed char)119);
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_24 [i_4] = ((((/* implicit */int) arr_2 [i_4] [(unsigned char)15] [i_6])) + (((/* implicit */int) arr_2 [i_4] [i_5] [i_6])));
                    arr_25 [(short)2] = ((/* implicit */unsigned char) ((((var_9) / ((+(((/* implicit */int) arr_3 [i_6])))))) / (((/* implicit */int) ((unsigned short) (unsigned short)27246)))));
                }
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    arr_29 [i_4] [i_7] [i_5] [i_7] = (unsigned char)91;
                    arr_30 [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_20 [i_4] [i_5] [(unsigned short)7] [i_7 - 1])), (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5] [i_7])) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_7 - 3] [i_5])) : (((/* implicit */int) arr_20 [i_4] [i_5] [i_7] [i_7]))))));
                    arr_31 [i_4] [(signed char)5] [i_7] = ((/* implicit */unsigned short) arr_14 [i_7] [i_7 - 1]);
                }
                arr_32 [(unsigned char)6] [i_5] = ((/* implicit */unsigned short) arr_1 [i_4] [i_4]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) (unsigned char)18);
    var_21 = ((/* implicit */short) var_12);
    var_22 = ((/* implicit */unsigned char) var_18);
}
