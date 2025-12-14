/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157492
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
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (unsigned short)62475))))) ? (((((/* implicit */_Bool) 4927674632581406378LL)) ? (var_3) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((int) var_11)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = ((/* implicit */_Bool) max((max((arr_5 [i_4] [i_2] [i_3 + 2] [i_2]), (arr_5 [i_4] [i_3] [i_3 + 2] [i_3]))), (((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((((/* implicit */unsigned long long int) max((((unsigned int) arr_2 [i_2])), (min((((/* implicit */unsigned int) var_1)), (var_12)))))), (var_3)))));
                                var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62491)) ? (((/* implicit */int) (unsigned short)3015)) : (((/* implicit */int) var_1))))), (arr_7 [i_4] [i_3 - 3] [i_1] [i_0]))), (((long long int) arr_8 [i_3 + 1] [i_3]))));
                                var_18 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */short) 16777215LL);
                            var_19 *= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(min(((_Bool)0), (arr_3 [i_0] [i_5 + 2])))))) : (((/* implicit */int) ((var_7) >= (max((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_6 - 2])), (var_10)))))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_18 [i_0] [i_5] [i_5] [i_6]), (var_2))))));
                        }
                        arr_22 [i_0] [i_5] [i_2] [i_2] [i_5 - 3] [i_5 - 1] = ((/* implicit */_Bool) (short)8191);
                        arr_23 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_5 - 2])) - (166)))));
                    }
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_7] [i_1]);
                        var_21 = ((/* implicit */signed char) var_3);
                        arr_29 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (arr_4 [i_0])))), ((+(((/* implicit */int) (unsigned short)62503)))))));
                        var_22 -= ((/* implicit */long long int) max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62521)))))));
                    }
                }
            } 
        } 
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
    {
        arr_33 [i_8 + 2] = ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)3015), (((/* implicit */unsigned short) arr_24 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 + 1]))))), ((~(((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8]))))));
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) 1073741823);
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_10))));
            var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3154872864U))))), (((((/* implicit */_Bool) 1140094411U)) ? (3154872864U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                arr_42 [i_8] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) var_13);
                var_25 = ((/* implicit */int) var_3);
                var_26 = ((/* implicit */_Bool) ((((var_10) >= ((+(((/* implicit */int) (unsigned short)23183)))))) ? (((/* implicit */unsigned long long int) 349668523448412871LL)) : (min((((/* implicit */unsigned long long int) ((unsigned int) 377070819U))), (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                var_27 -= min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65530)) || (((/* implicit */_Bool) ((signed char) var_3)))))), (min(((unsigned short)65532), (((unsigned short) (unsigned short)11)))));
                var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)62480)), (((unsigned long long int) ((arr_11 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_10] [i_10] [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (unsigned char)231)) << (((((/* implicit */int) arr_46 [i_8] [i_8 + 2])) + (46))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62506))))) ? (((/* implicit */int) (unsigned short)3044)) : (((/* implicit */int) (short)17863))));
                var_31 = ((/* implicit */unsigned short) var_8);
                var_32 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_1)), (((((/* implicit */int) arr_1 [i_9] [i_9])) ^ (((/* implicit */int) arr_41 [i_8] [i_9] [i_8] [i_11])))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3917896476U)))) < ((+(arr_38 [i_8 + 1] [i_9] [i_9] [i_11]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_8 - 2])) ? (((((/* implicit */_Bool) (unsigned short)3029)) ? (var_7) : (((/* implicit */int) (unsigned short)3015)))) : (((/* implicit */int) arr_14 [i_12] [i_11] [i_8 + 2] [i_8 + 2] [i_8 + 2]))))), ((+(arr_0 [i_8 + 2])))));
                    var_34 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)3040)) ? (((/* implicit */unsigned int) var_7)) : (3154872865U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                {
                    var_35 = ((/* implicit */_Bool) max((arr_7 [i_8] [i_8] [i_8 - 2] [i_8]), (((/* implicit */long long int) arr_24 [i_13] [i_13] [i_13] [i_8]))));
                    var_36 = ((/* implicit */_Bool) max((1140094429U), (((/* implicit */unsigned int) (unsigned char)157))));
                    arr_57 [i_8 - 1] [i_8] [i_8 - 1] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)3045)), (((((/* implicit */_Bool) max((var_0), (730038358)))) ? (((var_7) + (((/* implicit */int) arr_46 [i_8] [i_14])))) : (((/* implicit */int) (unsigned short)3030))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) ((long long int) ((((var_5) << (((arr_0 [i_8 - 1]) - (4235020629U))))) << (((((var_7) + (1382109085))) - (11))))));
    }
    var_38 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */int) ((max((((/* implicit */unsigned int) var_9)), (3154872862U))) <= (max((((/* implicit */unsigned int) (short)-1)), (3154872867U))))))));
}
