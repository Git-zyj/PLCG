/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114276
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [(unsigned short)4] [(unsigned short)4] [i_1] = ((/* implicit */signed char) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) / (((/* implicit */int) arr_1 [i_1 - 3] [i_1 + 1])))))));
                    var_14 = ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_15 = 3364725920U;
        var_16 ^= ((/* implicit */unsigned short) (~(1889601502U)));
        /* LoopNest 3 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        arr_22 [10U] [i_4] [5U] [i_6] [i_3] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_3] [i_3] [i_5 - 1] [i_6] [i_4 + 1]))) ? (min((((/* implicit */unsigned int) var_1)), (var_12))) : (1889601487U)));
                        var_17 = var_10;
                        var_18 = ((/* implicit */unsigned int) arr_11 [i_3]);
                        var_19 = ((/* implicit */unsigned int) arr_16 [0U] [i_4] [2U] [i_6]);
                    }
                } 
            } 
        } 
    }
    var_20 ^= ((/* implicit */signed char) 2405365797U);
}
