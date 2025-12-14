/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1479
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 3] = ((/* implicit */int) ((((_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((arr_3 [i_1 - 1] [i_1 - 3]) - (((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 3]))))) : ((~(1979098782U)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (+(arr_14 [i_0 + 2] [i_4] [i_4] [i_1 - 1] [i_4])));
                                var_13 = (short)0;
                                var_14 = ((/* implicit */signed char) ((arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 2]) & (((/* implicit */unsigned long long int) ((2998877967U) & (2998877943U))))));
                                arr_15 [i_1 - 2] [i_3] [i_1 - 2] [i_1 - 2] [i_0 + 1] = ((/* implicit */unsigned char) arr_3 [i_4] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5] [i_5]))))) ? (((/* implicit */int) ((signed char) arr_17 [i_5] [i_5]))) : (((/* implicit */int) arr_16 [i_5] [i_5])))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_11))));
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)46))));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_5] [i_5]))));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) arr_17 [i_6] [i_6])) / (arr_20 [i_6]))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_21 [i_6]))))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (short)25953))))) ? (((/* implicit */unsigned long long int) (~(arr_20 [i_6])))) : ((~(arr_19 [i_6] [i_6])))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 14; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_21 [i_7]))))));
                        var_21 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_6] [i_8 - 2] [i_6]))));
                        var_22 = ((/* implicit */unsigned int) (+(arr_18 [i_9])));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_3))));
                    var_24 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6] [i_10] [i_10] [i_11])))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (short i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (short)9181))));
                                var_26 = (+(arr_40 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 -= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_7))));
    var_28 = ((/* implicit */int) var_9);
}
