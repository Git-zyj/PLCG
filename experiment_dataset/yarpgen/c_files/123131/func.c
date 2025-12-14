/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123131
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
    var_17 = var_11;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))) >> (((/* implicit */int) ((arr_1 [i_0]) >= (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) 2140918633U);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (unsigned short)4520)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) 6859618753955896696ULL)))));
        var_20 *= ((/* implicit */unsigned long long int) ((var_12) > (((/* implicit */unsigned long long int) var_3))));
        var_21 *= ((/* implicit */unsigned int) ((9679833292388054705ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_15 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41059)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))), (max((((/* implicit */unsigned long long int) var_9)), (arr_11 [21ULL]))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (var_12) : (((unsigned long long int) arr_9 [i_3]))))));
                    arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    {
                        arr_28 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) 8958637071131769399ULL);
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                        {
                            arr_31 [i_5] = ((/* implicit */unsigned long long int) 1228372383U);
                            arr_32 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-27174)) && (((/* implicit */_Bool) (unsigned short)22903))));
                            arr_33 [(unsigned short)11] [i_7] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_8))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                        {
                            arr_36 [(unsigned char)9] [i_8 + 1] [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)23196)) > (((/* implicit */int) (short)-27669)))))) & (4087564299404679136ULL))));
                            arr_37 [(unsigned char)2] [i_6] [(unsigned char)2] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(3325457194U)))) ? (min((arr_10 [i_5 + 1] [i_5 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)77)), (var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22216)))));
                            var_23 += ((/* implicit */short) ((((/* implicit */unsigned long long int) 2140918623U)) + (var_12)));
                        }
                        var_24 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((+(arr_26 [i_6] [(short)11] [i_7]))), (((/* implicit */unsigned int) arr_7 [i_5 - 2] [i_8 - 1]))))), (min((arr_3 [i_5] [i_5 - 1]), (((/* implicit */unsigned long long int) (unsigned char)197))))));
                        var_25 = ((/* implicit */short) 7204996726099905870ULL);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (short i_12 = 4; i_12 < 12; i_12 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) arr_25 [i_12 + 1])), (3066594919U)))))));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max((11804992619023473481ULL), (((/* implicit */unsigned long long int) (short)0)))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((unsigned char) (short)-27174)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_13 = 1; i_13 < 11; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) 
                        {
                            {
                                arr_52 [(unsigned char)13] [i_13 + 1] [i_14] [i_13 + 1] [i_16] = ((/* implicit */unsigned short) (short)-27174);
                                arr_53 [i_5] = arr_22 [i_13 - 1] [i_13 + 3] [i_13 - 1];
                                var_29 |= min((var_14), (var_14));
                                arr_54 [i_5] [i_13 - 1] [i_13 - 1] [i_15] [i_13 - 1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_1)) | ((+(((/* implicit */int) (unsigned char)205))))))));
                            }
                        } 
                    } 
                    arr_55 [i_5] [i_13 + 3] [i_14] = ((/* implicit */unsigned int) (short)14);
                }
            } 
        } 
        var_30 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
        var_31 = ((/* implicit */unsigned long long int) min(((((-(((/* implicit */int) arr_46 [i_5] [i_5] [i_5] [i_5])))) + (((/* implicit */int) (unsigned short)44632)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    }
    var_32 -= ((/* implicit */unsigned int) var_15);
}
