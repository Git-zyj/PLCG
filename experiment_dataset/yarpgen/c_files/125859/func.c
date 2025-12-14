/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125859
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) 594157970);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)3])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : ((~(((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))))) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_2] [i_0])) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 1])))) : (((((/* implicit */_Bool) 5452873565098161927ULL)) ? (((/* implicit */int) (unsigned char)253)) : (594157970)))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1998081452)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7964029581312570362ULL)) ? (arr_3 [i_1] [i_1 - 1]) : (arr_3 [i_1] [i_1 - 1])))) : ((-(2637640813U)))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3137649864U)) ? (((/* implicit */unsigned long long int) 1657326482U)) : (12993870508611389689ULL))))));
                }
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_0 + 1] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (594157970) : (((((/* implicit */_Bool) arr_5 [i_4] [i_1])) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_4] [i_6] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [17U] [i_5])))))))));
                            var_22 = ((/* implicit */unsigned short) 5452873565098161926ULL);
                            var_23 = ((int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_24 = (unsigned char)104;
                        }
                        var_25 = ((/* implicit */unsigned char) var_17);
                    }
                    arr_19 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */int) (unsigned char)203);
                }
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_26 = ((/* implicit */signed char) (~(3083831163U)));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_15 [i_0] [i_1] [i_7] [(unsigned short)14] [i_0 + 1]))));
                    var_28 &= (-(((/* implicit */int) (unsigned char)104)));
                    var_29 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [(unsigned short)15]);
                    arr_22 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [10] [i_1] [i_0 - 1] [i_1 - 1])) ? (arr_11 [(unsigned char)17] [i_1] [i_0 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76)))))) ? (2943850955716666571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)18] [i_1] [i_7] [i_0 + 1] [i_0])))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (-(3834906405U))))));
    var_31 = ((/* implicit */unsigned short) var_14);
    var_32 = ((/* implicit */unsigned char) var_6);
    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((int) (unsigned short)59311)))))) ? (((/* implicit */int) var_5)) : (((int) (+(var_11)))));
}
