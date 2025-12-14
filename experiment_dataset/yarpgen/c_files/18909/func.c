/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18909
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
    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (12905755696232214537ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) ? (((max((((/* implicit */unsigned long long int) var_9)), (var_7))) >> (((/* implicit */int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_8)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) var_9)) : (var_6))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((unsigned long long int) (-(arr_1 [i_0 - 1]))));
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
        arr_2 [14ULL] &= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [6U])))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) arr_0 [0U]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((arr_3 [i_1]) <= (var_7))))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) * (arr_7 [(_Bool)1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                arr_10 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_2] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_3 - 2] [i_2] [i_1] [i_1]))))), ((~((-(8U)))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                var_24 = ((/* implicit */_Bool) var_17);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_25 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            var_26 &= ((/* implicit */_Bool) ((((unsigned int) (unsigned short)13328)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (arr_11 [i_1] [i_1] [i_5 - 2])))))) ^ (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
            var_27 = ((arr_8 [(unsigned short)13] [i_4] [i_4] [i_4]) ? (((((/* implicit */_Bool) (-(-821552832)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) min((-1097579676), (((/* implicit */int) arr_8 [i_1] [i_4] [13U] [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))));
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))));
        }
        for (unsigned int i_8 = 3; i_8 < 14; i_8 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)96)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_8] [i_1] [i_8 + 1] [i_8] [4U]))) : (var_16)))))))))));
            var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))));
            arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) arr_21 [i_1] [i_8] [(unsigned short)1]);
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) 1131673054363506096ULL);
                arr_29 [(signed char)10] &= ((/* implicit */unsigned short) (unsigned char)182);
            }
            for (short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_30 = (((~((+(((/* implicit */int) (unsigned char)217)))))) ^ (((((/* implicit */int) (unsigned char)12)) | (((/* implicit */int) arr_27 [i_1])))));
                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_24 [i_1]), (((/* implicit */unsigned char) (signed char)0)))))));
            }
            arr_33 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+((((_Bool)1) ? (var_3) : (((/* implicit */int) var_4))))));
            arr_34 [i_1] [i_9] [i_1] = ((/* implicit */unsigned char) (short)8176);
            arr_35 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_1] [i_9] [i_9] [i_9])), ((~(((/* implicit */int) var_13))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_31 = (+(min((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (min((((/* implicit */unsigned int) 337770711)), (1122300271U))))));
            var_32 = ((/* implicit */unsigned int) (~(arr_30 [i_12])));
            arr_40 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((13308233255307582064ULL), (arr_3 [i_1])))) ? (((int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_8 [i_1] [i_12] [i_12] [i_12])));
            arr_41 [i_1] [(unsigned short)12] &= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)44119));
            arr_42 [i_1] [i_12] = ((/* implicit */unsigned char) max((((var_11) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_1] [i_12] [i_12] [i_12])), (var_13)))) / (((/* implicit */int) arr_21 [i_1] [i_12] [i_12]))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 1; i_15 < 17; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 4) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) var_2);
                        arr_52 [i_13 + 1] [i_14] [i_15] [i_15] [i_13] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13]))) % (var_7)))));
                        arr_53 [i_13] [i_14] [(_Bool)1] [i_16] = ((/* implicit */short) (+(4167216737U)));
                        var_34 = ((/* implicit */unsigned int) var_4);
                        arr_54 [i_13] [i_13] [i_15] [19] = ((((/* implicit */_Bool) arr_45 [i_13 + 1] [i_13])) ? (arr_45 [i_13 - 2] [i_13]) : (arr_45 [i_13] [i_13]));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 2; i_18 < 18; i_18 += 4) 
            {
                {
                    arr_61 [8LL] [i_13] [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                    var_35 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)5487)) / (796377204)));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65522))))) : (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_9))))), (((var_7) ^ (((/* implicit */unsigned long long int) var_14))))))));
}
