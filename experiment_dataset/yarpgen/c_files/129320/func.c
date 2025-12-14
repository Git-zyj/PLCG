/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129320
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_6)))))) >= (((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [4] [i_2])))));
                    var_15 = ((/* implicit */short) var_8);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_2 [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_17 = (-(((/* implicit */int) (unsigned char)245)));
                        var_18 += ((short) ((unsigned char) -1));
                    }
                    var_19 = arr_9 [i_0] [(unsigned char)5] [i_4] [i_3 - 1];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_17 [i_0] [i_0] [i_6] = ((/* implicit */short) var_7);
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 8; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 7; i_8 += 2) 
                {
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (-1) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])))) <= (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_3))))));
                        arr_26 [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7] [i_6] [i_7] [i_7 - 1] [i_8 + 2] [i_7])) ? ((~(((/* implicit */int) arr_24 [i_0] [i_8] [i_6] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0])))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 2] [i_0])) < (((1428699008) - (((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            var_21 = ((/* implicit */short) var_12);
            var_22 += ((/* implicit */short) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_10 [i_0] [i_9] [i_9] [2]))));
        }
    }
}
