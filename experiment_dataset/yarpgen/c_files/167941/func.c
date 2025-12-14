/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167941
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_17 = min((((/* implicit */unsigned long long int) ((unsigned int) max((-7102704120696209445LL), (((/* implicit */long long int) var_8)))))), (max((((unsigned long long int) (signed char)117)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [12ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-4525))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)91))))), ((-(arr_7 [i_0 + 1] [i_0] [i_0] [i_2])))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) min((((long long int) max((((/* implicit */long long int) var_5)), (arr_6 [i_1] [i_1] [i_1])))), (((/* implicit */long long int) ((unsigned int) ((int) (unsigned char)53))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)42691)))))))));
                            var_20 = ((/* implicit */short) ((long long int) max((max((3LL), (var_16))), (min((arr_14 [i_0] [i_0] [i_0] [i_3] [i_1]), (var_12))))));
                            arr_15 [i_0] [i_0] [(signed char)13] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((unsigned long long int) (+(var_12))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            arr_18 [i_0 + 1] [i_1] [i_2] [i_0] [i_0 + 1] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) ((short) -2451113373227846481LL))))));
                            var_21 = ((/* implicit */short) ((unsigned long long int) ((long long int) max((var_0), (((/* implicit */unsigned short) var_6))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) ((unsigned char) arr_19 [i_0 - 1] [i_0 - 1] [i_0] [(signed char)3] [i_0] [i_0] [i_0])))), (((unsigned int) min((var_11), (((/* implicit */unsigned char) var_7)))))));
                            var_23 = ((/* implicit */signed char) (~(max((((int) 4LL)), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-10416))))), (max((max((((/* implicit */long long int) (short)1016)), (-6LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))));
                            var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned short) (short)-10397)), ((unsigned short)56497))))), (min((((/* implicit */long long int) ((signed char) 22U))), (max((-4LL), (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15766)))))))))));
                            arr_24 [i_0] [i_1] [i_0] [i_3] [i_3] [i_7] [i_3] &= ((/* implicit */unsigned char) ((short) max((((/* implicit */int) ((_Bool) var_1))), (max((-159241828), (((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((short) arr_5 [i_2] [i_0])));
                            arr_28 [i_0] [3ULL] [i_2] [i_0] [i_8] = ((_Bool) ((unsigned long long int) var_13));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 10984442321889534901ULL)))));
                            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_4)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((signed char) ((short) arr_1 [i_3] [i_1]))))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_3] [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) ((long long int) arr_13 [i_2] [i_1] [i_2] [i_3] [(signed char)6] [i_2] [i_0 - 1]))));
                            arr_36 [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((-(max((868382105U), (((/* implicit */unsigned int) (short)1017)))))), (((unsigned int) max((((/* implicit */long long int) arr_34 [i_0] [i_0] [i_10] [i_0] [i_0] [i_1])), (arr_26 [i_0 + 1]))))));
                            var_30 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((unsigned short) arr_4 [i_1] [i_10 - 2]))), (min((var_12), (((/* implicit */long long int) var_5)))))), ((+(min((-4457422196470888104LL), (((/* implicit */long long int) (unsigned char)255))))))));
                            arr_37 [i_0] [i_10] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((long long int) 36028797018959872ULL)))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (short)25405)))), ((+(max((((/* implicit */long long int) var_3)), (arr_6 [(unsigned char)11] [i_1] [i_2])))))));
                            var_32 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) (unsigned char)31)))));
                            var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((short)32748), ((short)22742))))))), (((unsigned long long int) min((12LL), (((/* implicit */long long int) arr_38 [i_0] [i_0])))))));
                            arr_42 [i_0] [i_1] [i_0] [i_3] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_0)))))), ((+(max((arr_22 [i_0] [i_0]), (((/* implicit */unsigned int) arr_31 [i_1] [i_2] [i_11]))))))));
                        }
                        arr_43 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) ((int) arr_14 [i_0] [i_0] [i_0] [i_0] [6LL]))))));
                        var_34 = ((/* implicit */signed char) (+((-((+(arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_2] [i_3])))))));
                    }
                    for (long long int i_12 = 4; i_12 < 14; i_12 += 2) 
                    {
                        arr_47 [i_12] [i_0] [i_1] [(signed char)11] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) ((unsigned short) -5853377715797426276LL))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((long long int) var_3))))));
                            var_36 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (4457422196470888103LL))))))));
                            var_37 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) var_11)))))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) min((min(((+(-4457422196470888085LL))), (((/* implicit */long long int) (~(arr_22 [i_2] [i_0 - 1])))))), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) 4LL))))))));
                            var_39 &= ((/* implicit */int) (~((-(-4457422196470888116LL)))));
                        }
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            var_40 = ((/* implicit */signed char) (~(min(((+(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (_Bool)1))))))));
                            var_41 = ((/* implicit */signed char) (-(max((max((var_12), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) min((arr_22 [i_2] [i_12]), (4294967295U))))))));
                            arr_56 [i_0] [i_1] [i_1] [i_1] = min(((unsigned short)44082), (((/* implicit */unsigned short) (unsigned char)239)));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) max((arr_53 [i_0] [i_1] [i_1] [i_2] [i_2] [i_12] [(unsigned char)4]), (((/* implicit */unsigned long long int) (unsigned char)255)))))))))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            var_43 ^= ((/* implicit */signed char) ((long long int) ((int) max((3021348952831332883LL), (((/* implicit */long long int) var_3))))));
                            var_44 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) 0))), (((short) arr_39 [i_0] [i_2] [i_12] [i_16]))))), (min((4457422196470888103LL), (-2497310669224877746LL)))));
                            arr_60 [i_0] [i_0] = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((int) var_8))))), ((!(((/* implicit */_Bool) max((7095207736388205148ULL), (((/* implicit */unsigned long long int) (short)-10412)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            arr_65 [(unsigned char)6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_8)));
                            var_45 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (unsigned char)31)))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            arr_68 [i_0] [i_0] [6] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((short) (unsigned char)31)))))));
                            var_46 = ((/* implicit */long long int) ((_Bool) min((max((((/* implicit */unsigned int) -946958015)), (1569385826U))), (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (0)))))));
                            var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)248))))))));
                            var_48 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), ((~(arr_7 [i_0] [i_2] [i_0] [i_12])))))));
                        }
                        /* vectorizable */
                        for (short i_19 = 2; i_19 < 14; i_19 += 4) 
                        {
                            var_49 = ((unsigned short) ((int) var_2));
                            var_50 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) 2725581444U)))));
                        }
                        var_51 += (-(((long long int) ((unsigned short) arr_55 [i_12]))));
                        var_52 = ((/* implicit */unsigned int) ((signed char) ((_Bool) (-(arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_12])))));
                    }
                }
            } 
        } 
        arr_71 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 7)))))), (((int) ((unsigned short) arr_41 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [i_0 - 1] [(short)15])))));
        var_53 -= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((int) var_6))), ((~(3287251156284857696ULL)))))));
        var_54 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) ((signed char) arr_13 [i_0 - 1] [i_0] [0U] [i_0] [(_Bool)1] [i_0] [i_0]))))));
    }
    var_55 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((short) var_7))))));
}
