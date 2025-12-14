/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16451
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
    var_11 = var_9;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)48753))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((max((var_8), (var_1))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16782)) != (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [(unsigned short)12] = ((/* implicit */unsigned short) (((~((-(((/* implicit */int) (unsigned short)17)))))) != (((/* implicit */int) max(((unsigned short)16783), (arr_0 [i_0 + 1]))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62897)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            var_12 = ((/* implicit */unsigned short) max((var_12), (arr_5 [i_0] [i_1] [i_1])));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2])))))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_5), ((unsigned short)16383)))) || (((/* implicit */_Bool) min(((unsigned short)17), (arr_9 [i_0 - 2] [(unsigned short)9]))))))) << (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_5 - 1] [i_5 - 1])) >= (((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_5 + 2] [i_5] [i_5 + 1])))))));
                            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)16783)))));
                        }
                    } 
                } 
            } 
            var_15 = arr_9 [i_0] [i_2];
            arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)16383)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35977)) || (((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])))))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) | (((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) (unsigned short)37899)) : (((/* implicit */int) (unsigned short)65529))))));
            arr_21 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)7256)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))));
        arr_25 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) & (((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
}
