/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155131
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
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_3] [i_2 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_8 [(_Bool)1] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_3 + 2] [i_3])))) : ((-(arr_6 [i_1] [i_2 - 1] [i_1])))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                        var_23 = ((/* implicit */_Bool) var_4);
                        arr_10 [i_0] [i_1] [i_0] [(signed char)3] = ((/* implicit */int) ((unsigned short) (~(((var_7) ^ (((/* implicit */int) arr_5 [i_3 - 1] [i_1] [i_1] [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            {
                                arr_15 [i_1] [(_Bool)1] [i_4] = ((/* implicit */short) min(((unsigned short)38969), (((/* implicit */unsigned short) arr_4 [i_5 + 1] [i_5 - 1] [i_5 - 2]))));
                                var_24 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) arr_4 [i_0] [i_1] [18U]);
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    var_26 = ((unsigned short) arr_0 [i_1]);
                    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_6] [i_1] [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) ((arr_5 [i_1 + 3] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) var_0)) : (var_19)));
                        var_29 = arr_8 [i_7] [(unsigned char)2] [(signed char)4] [(signed char)4] [(signed char)4];
                        var_30 = ((_Bool) (short)(-32767 - 1));
                        /* LoopSeq 1 */
                        for (int i_8 = 4; i_8 < 18; i_8 += 3) 
                        {
                            var_31 = (+(((unsigned long long int) (short)(-32767 - 1))));
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1] [i_7] [i_8 + 1]))));
                        }
                        var_33 = ((/* implicit */int) var_3);
                    }
                    for (unsigned short i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        var_34 = arr_11 [i_1] [i_6] [i_1] [i_0 - 1];
                        var_35 = ((/* implicit */signed char) (short)-32762);
                        arr_25 [i_0] [i_1] [i_1] = ((_Bool) arr_24 [i_1] [i_1] [i_1 - 1] [i_1]);
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9 + 1] [i_6 - 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_14 [i_9 + 3] [i_6 + 2] [i_1 - 1] [i_1 + 3] [17] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_6 + 1] [i_0 - 3] [i_0 - 3]))));
                    }
                    var_37 = ((/* implicit */unsigned char) (~(7864320)));
                }
                for (signed char i_10 = 3; i_10 < 17; i_10 += 3) 
                {
                    var_38 = ((/* implicit */unsigned int) var_5);
                    var_39 = arr_27 [i_0] [i_0] [i_0] [i_0];
                    arr_28 [i_10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)109)), (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_24 [i_0] [i_1 + 3] [i_1] [i_1])) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))) ? (min((((/* implicit */int) var_4)), (arr_18 [i_1] [i_1 + 3] [i_10] [i_1 + 3]))) : ((+(((/* implicit */int) arr_9 [i_1] [i_1] [(short)2] [i_1] [i_1]))))))));
                }
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_19 [i_0] [i_0] [i_1] [i_0] [(signed char)19] [i_0]) / (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) (-(min((((/* implicit */int) var_12)), (((((/* implicit */int) (unsigned short)38969)) & (((/* implicit */int) (unsigned char)87))))))));
    var_42 = ((/* implicit */unsigned int) var_11);
    var_43 = ((/* implicit */signed char) min((((short) ((((/* implicit */_Bool) var_13)) ? (1056964608U) : (((/* implicit */unsigned int) 7864320))))), (((/* implicit */short) var_12))));
}
