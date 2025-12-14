/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185850
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)133)) >> (((((/* implicit */int) (short)-8)) + (23)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)-25729))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) (short)28053)) - (28049)))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                arr_15 [i_2] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_3])) == (((/* implicit */int) (short)9880))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3]))))))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1] [(unsigned char)3] [i_3 + 1])))) : (((/* implicit */int) ((((/* implicit */int) (short)21998)) < (((/* implicit */int) (short)-28127)))))));
                var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_8 [i_3] [i_1])) : (((/* implicit */int) arr_13 [i_3] [i_2]))))) || (((((/* implicit */_Bool) arr_9 [i_3] [i_2])) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))))))) : (((((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_2 [i_2] [i_2])))) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 4; i_4 < 11; i_4 += 4) 
                {
                    arr_18 [i_2] [i_1] [(unsigned char)10] [i_3] [i_4] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_9 [i_1] [i_2]))))));
                    arr_19 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_1 [i_4 - 3])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 + 1] [i_4])) << (((((/* implicit */int) arr_5 [i_1])) + (7392))))))))));
                }
            }
            /* LoopNest 2 */
            for (short i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 3; i_7 < 8; i_7 += 4) 
                        {
                            var_20 = arr_11 [i_2];
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((((/* implicit */int) arr_8 [i_7 - 3] [i_7 - 3])) ^ (((/* implicit */int) arr_12 [i_1] [i_2] [i_5] [i_6])))))))));
                        }
                        arr_28 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_1])) ? (((/* implicit */int) arr_26 [i_6] [i_5] [i_2] [i_1])) : (((/* implicit */int) arr_21 [i_6] [i_2] [i_1]))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1] [i_1])))))))))))));
                        arr_29 [(unsigned char)11] [i_2] [i_2] [i_1] = arr_20 [i_6] [i_1] [(unsigned char)11];
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [i_1] [i_1] [i_8] [i_1]))));
            var_24 = ((/* implicit */short) min((var_24), (arr_27 [i_8 - 2] [i_1] [i_8 - 2] [i_1] [i_8 - 2])));
        }
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            arr_34 [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-9859))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1]))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_9])))))))));
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_1])) * (((/* implicit */int) arr_31 [i_1] [i_1] [i_1])))) > ((-(((/* implicit */int) arr_5 [i_1]))))))), ((-((~(((/* implicit */int) arr_32 [i_9]))))))));
        }
        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_10]))));
            arr_38 [i_1] [i_1] = arr_16 [i_1] [i_1] [(short)3];
        }
    }
    var_27 += ((/* implicit */unsigned char) max((((((((/* implicit */int) var_7)) << (((((/* implicit */int) var_0)) - (35))))) >= (((/* implicit */int) min(((short)31), ((short)14)))))), ((!(((/* implicit */_Bool) (short)17954))))));
}
