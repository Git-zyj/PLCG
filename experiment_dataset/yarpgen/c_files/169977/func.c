/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169977
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (12795269350672169918ULL) : (((/* implicit */unsigned long long int) var_10)))))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_13)))) < (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((int) arr_4 [(signed char)14])))));
        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_3 [i_1]))))));
        var_19 ^= (~(((arr_5 [i_1]) % (1577920567))));
        arr_6 [i_1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (680550813) : (arr_5 [i_1 - 1]));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_20 ^= ((/* implicit */signed char) ((int) ((unsigned int) arr_14 [i_1] [i_2] [(signed char)5] [i_4] [i_1])));
                            var_21 = ((/* implicit */unsigned char) arr_12 [i_1] [16] [i_3] [i_1]);
                        }
                        var_22 -= ((/* implicit */unsigned short) arr_11 [i_1] [i_1 - 1] [i_1] [i_1 - 1]);
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_4] [i_4])) ^ (((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (arr_15 [i_1] [i_2] [i_3] [i_4] [i_3] [i_4]) : (((/* implicit */int) var_1))))));
                            var_24 = ((/* implicit */short) var_2);
                            arr_21 [i_1] [i_2] [15U] [i_3] [i_1] [15U] = ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1])) : (arr_5 [i_1 - 1]));
                            var_25 |= ((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_19 [i_4 - 3] [i_3] [i_3] [i_6] [i_6]))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4])) ? (arr_8 [i_1]) : (2096527757)))) || (((/* implicit */_Bool) 10381309839143232739ULL))));
                            arr_25 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)98)) || (((/* implicit */_Bool) (signed char)-99)))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_29 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -921838440))));
                            var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_1] [i_2] [i_2] [i_2] [i_3] [(unsigned short)18]))))));
                            var_28 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3])))))));
                            arr_30 [i_1] [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] = ((/* implicit */signed char) arr_28 [i_4]);
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 3; i_10 < 18; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_22 [i_11] [i_10 - 1] [i_9] [i_11]) : (arr_22 [i_12] [i_10 - 2] [i_12] [i_12]))) / ((-(arr_22 [i_11] [i_10 - 1] [i_11] [i_11])))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10926)))))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)34315)) - (max((((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9])), (arr_5 [i_10 - 1]))))) < (((((/* implicit */_Bool) 1598796300)) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (unsigned short)2746))))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222))))), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned char) (~((~((~(arr_8 [i_9])))))));
        arr_42 [i_9] = ((/* implicit */signed char) ((int) (+(var_12))));
        var_34 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) ((var_8) != (((/* implicit */int) var_15))))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) (unsigned short)23872))))), ((+(arr_41 [i_9] [i_9])))))));
        var_35 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (unsigned char)238)))))), (arr_33 [i_9])));
    }
    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) (~(((((arr_44 [i_13] [i_13]) && (((/* implicit */_Bool) var_6)))) ? (var_0) : (((/* implicit */unsigned long long int) -676823725))))));
        var_37 = ((/* implicit */_Bool) max((arr_45 [i_13] [i_13]), (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_5))))))));
    }
    var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (short)24189))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 17530359379800318775ULL)) ? (1689783054U) : (((/* implicit */unsigned int) -767924364))))));
    var_39 -= ((((/* implicit */int) (signed char)-5)) >= ((((((~(((/* implicit */int) var_1)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) var_12))) - (1))))));
    var_40 |= ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_3))))));
}
