/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138160
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 124787305)))));
                    var_16 = ((_Bool) var_0);
                    var_17 ^= ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2] [i_2 + 1])) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_13)))) : (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_3 [i_1])))));
                }
            } 
        } 
        var_18 = (+((+(((/* implicit */int) var_7)))));
        arr_9 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) var_5);
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */long long int) -931865576)) : (-2396175036525331558LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_3 + 2])) : (arr_13 [i_3 + 1] [i_5]));
                    arr_19 [i_3] [i_3] = ((/* implicit */short) ((signed char) arr_14 [i_5]));
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */long long int) ((unsigned short) 1755532808U));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (unsigned char)61);
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_24 [i_3 - 1] [i_3] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_26 [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_23 [i_7] [i_3 + 3] [i_3] [i_3 + 3]) : (arr_23 [i_3 - 1] [i_3 - 1] [i_7] [i_7])));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3 + 3])) ? (((/* implicit */int) arr_12 [i_3 + 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))));
                        var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_8 + 2]))));
                    }
                }
            } 
        } 
    }
}
