/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133828
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
    var_15 = ((unsigned short) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_1 [i_0] [i_0]), ((unsigned short)24501))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(unsigned short)6] [(unsigned short)6] &= arr_4 [i_0] [(unsigned short)3];
                    var_16 += arr_1 [i_0] [i_0];
                    arr_10 [i_1] [i_1] = arr_3 [i_0];
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) arr_3 [i_2]))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_13 [i_3]))))));
        var_18 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [i_3])))))) | (((((/* implicit */int) arr_12 [i_3])) >> (((((/* implicit */int) arr_13 [i_3])) - (18124)))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_19 = arr_15 [i_3] [i_3] [i_3];
                        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_6])) & (((/* implicit */int) arr_17 [i_4] [i_5] [i_6]))))) ? (((/* implicit */int) max((arr_20 [i_3] [i_4] [i_5] [i_3]), (arr_15 [i_3] [i_3] [(unsigned short)15])))) : (((((/* implicit */int) arr_14 [i_5] [i_5])) & (((/* implicit */int) var_9)))))), ((+(((/* implicit */int) (unsigned short)45756))))));
                    }
                } 
            } 
        } 
    }
    var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_6)))))))));
}
