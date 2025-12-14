/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152746
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_11), (((/* implicit */unsigned int) (unsigned short)57021))))))) ? ((((~(var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) var_9)), (var_1)))) ^ (((/* implicit */int) min((var_12), ((unsigned short)60291)))))))));
    var_20 = ((/* implicit */short) ((min((((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) var_13)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))))));
    var_21 = ((/* implicit */short) (-((-(17873387745266151206ULL)))));
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-88))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58))))) >> (((((((/* implicit */_Bool) (short)29993)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (12349455321860931928ULL)))));
        var_24 = ((/* implicit */long long int) (-(arr_1 [i_0])));
        var_25 = ((/* implicit */unsigned char) ((11242154679772183247ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))) >= (((((/* implicit */_Bool) (unsigned short)54033)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)5245))))));
        var_26 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_13)))) > (((/* implicit */int) (unsigned short)54033))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (arr_6 [i_2 - 2] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
            var_28 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
        }
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14095)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-27583))) != (var_8)))) : ((-(((/* implicit */int) var_4))))));
        arr_8 [(unsigned char)8] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_11 [3ULL] [(unsigned short)0] |= (unsigned char)188;
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            var_30 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_4 - 1] [i_3 + 2]))));
            arr_14 [12U] [(short)10] [i_3 + 1] = ((/* implicit */unsigned char) var_14);
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3 + 1] [(signed char)7])) < (((/* implicit */int) arr_16 [i_3 + 1] [i_5]))));
            var_32 = ((/* implicit */signed char) ((unsigned int) var_6));
            arr_17 [i_5] [i_3] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (17390058301162874566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_5])))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            var_33 *= ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_3]) >= (arr_19 [i_3]))))) : (arr_3 [i_3 - 2])));
            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_0)) >= (var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) arr_4 [i_3 - 3] [i_6 + 1]))));
            var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))));
            var_36 = ((/* implicit */unsigned short) (~(((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_7] [i_8]))));
                        var_38 -= ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_7] [i_6])) | (((/* implicit */int) var_13)))) < (((((/* implicit */_Bool) arr_5 [(unsigned char)11] [(short)9])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)175))))));
                        var_39 = var_17;
                        arr_26 [i_6] [i_8 - 1] [i_7] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) / ((~(((/* implicit */int) var_12))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((short) ((6445044241924691566ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5))))));
                            arr_29 [i_3] [(unsigned short)4] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29993))) : (var_11)));
                        }
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_3 - 1] [i_10]))));
                            arr_32 [(short)3] [i_6] [i_6] [i_6] [i_10] = ((/* implicit */short) (~(arr_10 [i_6 - 1] [i_3 - 3])));
                        }
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_23 [i_3] [i_3 + 1] [(unsigned char)5] [i_3] [(unsigned char)3]))))));
    }
    for (unsigned char i_11 = 3; i_11 < 11; i_11 += 3) /* same iter space */
    {
        var_43 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (7553011226748202504LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_11] [i_11])) : (((/* implicit */int) arr_12 [i_11 + 2] [i_11])))))))));
        var_44 &= ((/* implicit */short) var_2);
        arr_35 [i_11] = (~((-(1758681538U))));
        var_45 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_11] [i_11 - 3]))))), (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_11))), (((/* implicit */unsigned int) var_14))))));
    }
}
