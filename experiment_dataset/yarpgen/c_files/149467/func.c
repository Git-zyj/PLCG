/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149467
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
    var_11 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-13990)) ? (((/* implicit */int) (short)13989)) : (((/* implicit */int) (short)-13990)))) % (((/* implicit */int) min(((short)13989), (((/* implicit */short) var_1)))))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13990)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)20264))))), (((((/* implicit */_Bool) var_1)) ? (17074778111846485403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-13990))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((short) arr_7 [i_0] [i_0 + 1] [i_0] [i_0]));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */short) (-((+(arr_0 [i_0 - 1] [i_0])))));
                            var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_10 [i_4] [i_2 - 1] [i_2 - 1] [i_1] [i_0])))))));
                            arr_14 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((17074778111846485403ULL) % (((/* implicit */unsigned long long int) var_2))))) ? (arr_4 [i_0 + 4] [i_1] [i_4]) : (17074778111846485423ULL)));
                            var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_2 - 1] [i_2] [i_3 + 1] [i_0 + 4])) << (((((((/* implicit */int) arr_3 [i_1] [i_0])) + (93))) - (1)))));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_17 [(unsigned char)4] [i_1] [i_1] [i_1] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14003)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)13988))));
                            arr_18 [i_0] [(signed char)8] [i_0 + 2] [i_0] [i_2] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0 - 1] [i_0] [i_0]);
                            arr_19 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [1] [i_1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)13988)))));
                        }
                    }
                } 
            } 
            arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13989)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (short)14002))))) > (var_8)));
            var_16 = ((/* implicit */short) 17074778111846485403ULL);
            var_17 = ((/* implicit */_Bool) (-(arr_11 [i_0] [i_0 + 2] [(unsigned short)12] [i_1] [i_0] [i_0 + 4] [i_0 + 2])));
            var_18 = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_16 [(unsigned char)0] [(_Bool)1] [6LL] [i_0 + 1] [i_0] [i_0 + 3])))));
        }
        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13979)) ? (((/* implicit */int) (short)-14003)) : (((/* implicit */int) (short)-13989))));
            var_19 = ((/* implicit */signed char) (short)14004);
            var_20 = var_5;
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    arr_35 [i_0] [i_0] [i_8] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)13989))) & (arr_5 [i_9] [i_0 + 4] [i_9])));
                    var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_0 + 2] [5ULL] [i_0 - 1] [i_0] [i_0]))));
                    arr_36 [i_0] [i_7] [i_9] = ((/* implicit */unsigned char) var_2);
                    arr_37 [i_0] [i_7] [i_8] [i_9] [i_8] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 + 2])) ? (arr_8 [i_0 + 2] [i_9] [i_9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1])))));
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    arr_41 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-13997))));
                    var_22 = ((/* implicit */_Bool) (short)-13990);
                    arr_42 [(_Bool)1] [i_7] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-13980)) ? (arr_12 [i_0] [i_7] [i_8] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 + 4])))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_23 = ((((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1] [i_11])) & (((/* implicit */int) (signed char)-21)));
                        arr_45 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)20)))))));
                    }
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13989)) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_33 [i_10] [(unsigned char)2] [i_7] [i_7] [i_0 + 3])) : (-6))) : (((/* implicit */int) (short)13989))));
                }
                arr_46 [i_0] [(signed char)11] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-14005))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (int i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] &= (signed char)20;
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_13])) ? (((/* implicit */int) (short)-14003)) : (((/* implicit */int) (short)14008)))) / (((/* implicit */int) (short)-13990))));
                            var_26 = ((/* implicit */unsigned short) (short)13981);
                            arr_53 [i_13] [i_12] [i_8] [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_0 + 4] [i_7] [i_13 + 1]))));
                            arr_54 [4U] [4U] [i_8] [i_8] [i_8] [i_12] [i_8] = ((/* implicit */long long int) arr_47 [i_12] [i_7] [i_8] [i_13]);
                        }
                    } 
                } 
                arr_55 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0] [(unsigned char)0])) ? (arr_4 [i_8] [i_7] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13995)))));
            }
            for (int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                arr_59 [i_0] [i_7] [i_14] = ((/* implicit */signed char) (-(-1735290876)));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_5 [i_7] [i_7] [i_14]))));
            }
            arr_60 [i_0 + 4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_0 + 3] [i_0] [i_0] [i_0 + 1])) <= (((/* implicit */int) arr_39 [i_7] [i_7]))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_0 + 4] [i_0 + 4] [i_0 + 1]))) & (var_8)))));
        }
        arr_61 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)8160))));
        arr_62 [(short)10] &= ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0 + 4] [i_0 + 3] [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 12; i_15 += 2) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                        {
                            arr_75 [i_16] [i_16] [i_15] [i_16] = ((/* implicit */unsigned char) (short)13989);
                            arr_76 [i_0] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-66))));
                        }
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) (short)13974)))))));
                        arr_77 [i_0] [i_16] = ((/* implicit */int) ((short) (+(((/* implicit */int) (short)-2832)))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_19 = 1; i_19 < 11; i_19 += 4) 
    {
        var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((-1) != (var_6)))))), (((unsigned long long int) arr_28 [i_19] [i_19 - 1] [i_19]))));
        var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) < ((-(var_0)))))) << (((/* implicit */int) ((((/* implicit */long long int) (~(arr_7 [i_19] [i_19] [i_19] [i_19])))) <= (min((var_9), (((/* implicit */long long int) var_5)))))))));
        var_32 = ((/* implicit */short) min((var_32), (var_3)));
    }
    var_33 = ((/* implicit */_Bool) 56237666674829294ULL);
}
