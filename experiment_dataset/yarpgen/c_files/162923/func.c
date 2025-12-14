/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162923
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22027)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2587770388U))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))))))))));
        var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned short)43509)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (!((((-(((/* implicit */int) arr_6 [i_0] [i_1] [15ULL] [i_0])))) < (((/* implicit */int) (unsigned short)22027)))));
                    var_12 |= ((/* implicit */short) max(((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_2 + 1])))), (((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1] [i_2 - 1])))));
                    var_13 = min((((/* implicit */int) (signed char)-125)), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2])) : (((/* implicit */int) var_6)))));
                }
            } 
        } 
        arr_9 [i_0] [(short)12] |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
        var_14 -= ((/* implicit */short) 4294967290U);
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-3323))) % (((max((-8055398554636626508LL), (var_4))) % (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))))));
}
