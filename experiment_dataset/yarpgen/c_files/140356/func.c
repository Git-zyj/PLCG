/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140356
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)255)), (-8262546190105938603LL))))));
        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) : (((unsigned long long int) ((unsigned short) var_13)))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)31988)) : (((/* implicit */int) (unsigned short)31988))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)33548), (((/* implicit */unsigned short) (unsigned char)236)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) - (702654402U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_19 = max((var_10), (((unsigned int) arr_2 [i_0] [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) - (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)4] [(unsigned short)4] [i_1]))) : (0U))), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2]))))))));
            }
            var_21 = max((4294967295U), (((/* implicit */unsigned int) (unsigned short)31988)));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_22 = ((/* implicit */long long int) arr_0 [i_0] [i_3]);
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_3] [i_3])) > ((~(((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [(unsigned short)7] [i_3] [i_3]))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_11)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)8]))))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) & (arr_11 [i_3] [(unsigned short)4] [i_0]))) : ((~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (var_2)))))));
            var_26 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (-(4294967295U)))), (18446741874686296065ULL))) : (((/* implicit */unsigned long long int) -6011785188446678143LL)));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_27 *= ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned char)39)), (-6011785188446678143LL)))))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_4] [i_4])))) : (max((var_9), (((/* implicit */unsigned long long int) ((var_12) / (4294967295U)))))));
        arr_15 [i_4] = ((/* implicit */unsigned int) var_8);
        var_28 = ((/* implicit */long long int) ((((5601571326576437761LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */unsigned long long int) min((arr_7 [i_4]), (((/* implicit */unsigned int) arr_2 [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) 1U)) : (var_9)))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            var_29 *= ((/* implicit */unsigned char) 3592312894U);
                            arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) var_5)) | (arr_6 [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_5] [i_5 - 2] [i_8 - 2])) ? (max((var_9), (((/* implicit */unsigned long long int) 1737489914U)))) : (((/* implicit */unsigned long long int) 2887147598U)))) : (((((/* implicit */unsigned long long int) 2887147598U)) ^ (15590150504534277637ULL)))));
                            arr_29 [(unsigned short)12] [(unsigned char)13] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (~(((unsigned int) min((6011785188446678143LL), (((/* implicit */long long int) 702654388U)))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)63695)) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((2621394769U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35053))))))))) : (((var_12) >> ((+(0U)))))))));
                            arr_30 [i_5] [i_5 - 2] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_8 + 1] [i_7] [i_7] [i_7] [i_7 + 2]))) ? (((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_4] [i_4] [6U] [6U])) ? (((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2])) : (((/* implicit */int) arr_25 [i_8 - 3] [i_8 + 1] [i_7] [i_7 - 1] [i_6])))) : ((-(((/* implicit */int) arr_25 [i_8 - 1] [i_8] [i_8] [i_8 - 3] [i_8 - 1]))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned short) (+(15590150504534277637ULL)));
                            var_32 = ((/* implicit */unsigned short) 4294967295U);
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((-(0U))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_35 [i_4] [i_4] [i_6] [16U] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_7 + 2] [i_5 - 2])) ? (((((/* implicit */_Bool) 268434432U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6621))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_5]))) ^ (2887147598U)))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) (unsigned short)6324)), (arr_17 [i_4] [i_5 + 1]))), (3592312874U))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) (unsigned char)20);
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) arr_23 [i_6] [i_6] [i_6] [i_6]))), (3592312874U))))));
                        }
                        arr_39 [i_4] [i_5] [i_4] = ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5])) && (((/* implicit */_Bool) arr_1 [i_7 + 1])))))) : (max((var_0), (arr_16 [i_4] [i_6] [i_5]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)127))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
                        {
                            var_37 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2887147598U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_31 [i_4] [i_4] [(unsigned char)3] [4U] [i_4])) > (var_4))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) ^ (var_6))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_5 - 3])) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))))));
                            var_38 ^= ((/* implicit */unsigned int) (unsigned short)59212);
                            arr_43 [i_5] [i_5 - 2] [i_5 - 2] [i_6] [i_7 - 1] [i_12 - 1] = max((((((/* implicit */_Bool) ((unsigned int) arr_20 [i_4] [i_7 - 1]))) ? (((arr_6 [8U] [i_5]) ^ (arr_33 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6621))))), ((-(arr_19 [i_5 - 1] [14U] [i_7 + 2]))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) arr_17 [i_4] [i_5 - 1]));
                            var_40 = ((/* implicit */unsigned char) (+(1673572526U)));
                        }
                    }
                } 
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned int) var_5);
}
