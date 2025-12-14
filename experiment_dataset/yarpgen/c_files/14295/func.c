/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14295
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) var_10);
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0 - 1]) >= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned short)12137))))) & (arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_22 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0]);
                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
            }
            var_24 = ((/* implicit */unsigned short) var_3);
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))));
            arr_9 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)242))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)83)) << (((((/* implicit */int) (unsigned char)78)) - (69)))));
            arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) ^ (((((/* implicit */int) var_17)) - (((/* implicit */int) (unsigned char)167))))));
        }
        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            var_26 = ((/* implicit */_Bool) arr_13 [i_3] [i_3 - 1] [i_3 - 1]);
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [13ULL] [i_3 + 1]))) : (arr_0 [i_5 + 1]))))));
        }
        arr_18 [i_3] = ((/* implicit */unsigned char) arr_15 [i_3]);
    }
    var_28 &= ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_15)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
}
