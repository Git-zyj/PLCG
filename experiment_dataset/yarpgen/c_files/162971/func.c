/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162971
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
    var_14 = ((/* implicit */unsigned short) (!((!((_Bool)0)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) var_7);
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (short)560)))) : (((/* implicit */int) var_9)))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] |= ((/* implicit */unsigned short) (signed char)-119);
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (signed char)119))));
        arr_13 [i_3] &= ((/* implicit */signed char) ((short) (signed char)119));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) ((unsigned char) (short)-17634));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            arr_21 [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (short)11135)) : (((/* implicit */int) var_11))))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (!(var_10)))))));
                arr_25 [i_4] [18LL] [i_5] = ((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                arr_26 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
            }
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_32 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                    arr_33 [i_8] [i_7] [i_7] [i_5] [i_4] [i_4] |= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)119))));
                }
                arr_34 [4LL] [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) / ((+((~(((/* implicit */int) var_9))))))));
            }
            for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                arr_37 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (short)11135);
                arr_38 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)11135)) ? ((+(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_1))))));
            }
            arr_39 [i_4] = ((signed char) var_4);
        }
    }
    var_15 = ((/* implicit */_Bool) ((unsigned char) (+(-7630984387461336377LL))));
    var_16 |= (signed char)-119;
}
