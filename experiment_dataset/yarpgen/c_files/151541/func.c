/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151541
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_2))))));
        var_21 ^= ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            var_22 &= ((/* implicit */unsigned long long int) (~((~(arr_0 [i_1])))));
            var_23 += ((/* implicit */signed char) (+((-((~(((/* implicit */int) (_Bool)1))))))));
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_0 [i_1]))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    arr_16 [i_1] [i_3] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(var_11))))));
                    arr_17 [i_4] [i_3] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                }
            }
            var_25 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_2 [i_3]))))));
        }
        var_26 += ((/* implicit */_Bool) (~((-(((/* implicit */int) var_10))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            for (unsigned char i_7 = 4; i_7 < 13; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_27 = (+((-(((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) (-((-(var_14)))));
                            var_29 = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)39))))));
                            arr_27 [i_1] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) (+((~(var_12)))));
                        }
                    }
                } 
            } 
        } 
        var_30 += ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_4 [i_1]))))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_31 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))));
        arr_30 [i_10] [i_10] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_28 [i_10]))))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            var_32 = ((/* implicit */signed char) (~((~(arr_29 [i_10 - 1])))));
            var_33 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_28 [i_10 - 1]))))));
        }
    }
    var_34 = ((/* implicit */unsigned short) var_6);
}
