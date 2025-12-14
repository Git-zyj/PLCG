/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171864
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0)))) | (max((((/* implicit */long long int) var_11)), (var_2))))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_17))))))))));
    var_20 = ((/* implicit */unsigned long long int) ((long long int) var_3));
    var_21 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) var_3);
        arr_3 [i_0] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)19483)) : (((/* implicit */int) arr_2 [i_0]))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_9)))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15254)) <= (((/* implicit */int) (short)15262))));
                                arr_17 [i_1] [i_1] [i_3 + 1] [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (739395986614729598LL)));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_16 [6U] [6U]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_26 = ((unsigned char) (_Bool)1);
                                var_27 = ((/* implicit */long long int) arr_18 [i_1] [i_2 + 2] [i_1] [i_3] [i_6 - 2] [i_7]);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)25517))))));
    }
    for (short i_8 = 1; i_8 < 14; i_8 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */short) arr_18 [(unsigned char)0] [(unsigned char)0] [i_8 + 2] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))))) ? (((/* implicit */int) ((signed char) var_16))) : (((/* implicit */int) arr_15 [8ULL] [i_8] [0ULL]))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned char) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]);
        arr_30 [i_8] = ((/* implicit */unsigned int) ((int) var_9));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            var_31 = ((/* implicit */short) var_17);
            arr_33 [i_8] = ((/* implicit */unsigned long long int) (short)-15277);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    {
                        var_32 = ((/* implicit */long long int) (((+((-(((/* implicit */int) (unsigned short)34528)))))) * (((/* implicit */int) var_7))));
                        arr_39 [i_9] [i_10] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_25 [i_8])))) ? (arr_6 [i_8]) : (((/* implicit */unsigned long long int) (((+(arr_12 [i_8 - 1] [i_8]))) * (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [3U] [i_8] [i_10] [i_10] [i_11] [i_10] [i_12] = ((/* implicit */int) ((signed char) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)175)))));
                            var_33 += ((/* implicit */long long int) ((unsigned long long int) 739395986614729578LL));
                            arr_44 [i_8] [i_9] [i_8] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) min((arr_12 [i_8 + 2] [i_8]), (((/* implicit */long long int) (short)15262))));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 3) 
                        {
                            arr_48 [i_8 + 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_35 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8 + 1])))), ((+(((/* implicit */int) arr_22 [i_13 - 1] [i_13 + 2] [i_9] [i_8 - 1] [i_8 - 1] [i_8] [i_8]))))));
                            var_34 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                            var_35 = ((/* implicit */short) var_7);
                            arr_49 [(signed char)10] [i_8] [i_9] [(_Bool)0] [i_10] [i_11] [i_13] = ((/* implicit */short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 4; i_14 < 14; i_14 += 2) 
                        {
                            var_36 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                            arr_54 [i_8] [i_8] [i_10] [i_11] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (15820274026289529379ULL)));
                            var_37 = ((/* implicit */short) var_1);
                            arr_55 [(unsigned char)14] [(unsigned char)14] [i_10] [i_10] [i_10] [i_8] [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_20 [i_8] [i_11] [i_10] [i_9] [i_8])) / (var_10)))));
                            arr_56 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            var_38 = ((/* implicit */_Bool) (((_Bool)1) ? (8667675478950058552LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46053)))));
                            var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)24495)), (832231642560704715LL)));
                            arr_59 [i_8] [7LL] [i_8] [6LL] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((unsigned long long int) 7U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                    }
                } 
            } 
        }
    }
    var_40 = ((/* implicit */short) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1)));
}
