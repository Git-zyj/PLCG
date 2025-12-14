/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174705
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
    var_18 -= ((/* implicit */short) ((int) var_10));
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) var_2)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) (~(arr_2 [(_Bool)1] [i_0 + 1])))))));
                    var_21 = ((/* implicit */unsigned long long int) (-((+(var_11)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((unsigned long long int) ((long long int) (signed char)94)));
                                var_23 += ((unsigned short) (+(arr_15 [i_2 - 2] [(unsigned short)8] [i_2 - 2] [i_2 - 2] [i_2 - 3])));
                                var_24 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_12)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (short)24007)))));
                        var_26 = ((unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                        var_27 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_16 [i_0 - 2] [i_0] [i_0] [i_2 + 1] [i_2 - 3] [(short)5]))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned char) (+((+(1602677537)))))))));
                        arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(((unsigned int) (signed char)-113))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                        var_30 += ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0 - 2]));
                        var_31 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (short)24007)))));
                            var_33 = ((/* implicit */signed char) (!(var_13)));
                            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [4] [i_2] [i_8 - 3] [i_8] [i_2] [i_8]))));
                            var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64423))));
                            arr_29 [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) -1602677558));
                        }
                        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            var_36 -= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 1602677549)))));
                            arr_33 [i_0] [13] [11] [i_0] [(signed char)12] [11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                            var_37 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-13459))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_2] [i_0] [i_10 + 1]))))));
                            var_39 += ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            var_40 = ((/* implicit */signed char) (~(arr_12 [i_11 - 1] [i_2 - 1] [i_2 + 1] [i_0 - 1])));
                            var_41 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_8)))));
                            arr_38 [i_0] [i_2 + 2] [i_0] [(unsigned short)13] [i_11] [i_7] [i_0] = ((/* implicit */long long int) ((int) (signed char)-42));
                        }
                        arr_39 [i_0] [17] [i_0] [i_2] = ((unsigned char) var_13);
                    }
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_4)))))))));
}
