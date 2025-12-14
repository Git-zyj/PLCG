/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109815
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
    var_21 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_22 -= ((/* implicit */short) min((((/* implicit */long long int) (((~(((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)240))) / (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-20364)) ? (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (short)22682)) : (((/* implicit */int) (unsigned short)6231)))) : (((((/* implicit */_Bool) (unsigned short)8790)) ? (((/* implicit */int) arr_0 [(short)4])) : (((/* implicit */int) (short)-22686)))))), (max((((((/* implicit */int) arr_0 [15])) & (arr_3 [i_0] [(short)13] [i_0]))), ((+(((/* implicit */int) (unsigned short)57955)))))))))));
                var_24 = ((/* implicit */int) arr_2 [(unsigned short)8]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 7; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_12 [i_2] [i_3 - 3] [i_2] [(short)2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_2] [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 7; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [(unsigned short)2] [(unsigned short)2])))) | (min((arr_6 [i_2]), (((/* implicit */int) var_11)))))), ((~(((arr_10 [(short)4] [i_2]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_16 [(short)8] [(short)8] [i_4] [(short)8] [i_6]))))))));
                                var_26 = ((/* implicit */unsigned char) arr_10 [i_2] [i_5 - 2]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) arr_7 [i_2] [i_3 + 2]);
                    var_28 |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_3 + 3] [i_3 + 3] [i_3 - 3] [(unsigned short)6] [i_3 - 2])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4] [(short)2])) ? (((/* implicit */int) arr_4 [(short)9] [(short)9])) : (((/* implicit */int) arr_16 [(short)1] [(short)9] [i_2] [i_3 - 3] [i_4])))))), (min(((~(((/* implicit */int) arr_10 [(unsigned char)0] [i_3 - 3])))), ((+(((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
}
