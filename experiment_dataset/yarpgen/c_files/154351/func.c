/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154351
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-68)) & (((/* implicit */int) var_0))));
    var_21 = var_10;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) -541151119);
        var_23 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((int) (-(3861852648U)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) arr_0 [(unsigned short)4]);
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_26 = ((/* implicit */_Bool) arr_8 [i_2]);
            var_27 = ((/* implicit */unsigned short) var_8);
            arr_9 [i_2] = ((/* implicit */unsigned short) (~(2794030803U)));
        }
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)8176), ((short)-19007)))) <= (((((/* implicit */int) min(((short)8195), (((/* implicit */short) var_16))))) & (((/* implicit */int) var_11))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_17)), (arr_19 [(unsigned short)0] [i_4] [(unsigned short)0] [i_4])))))) ? ((~(((unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [(unsigned short)3] [i_4]))))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */long long int) min((((arr_14 [i_3]) / (((/* implicit */int) arr_22 [i_4])))), ((+(((/* implicit */int) arr_22 [i_4]))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    {
                        arr_31 [i_3] [i_9] [i_8] [i_9 - 1] = ((/* implicit */int) (-(939699596U)));
                        var_30 ^= var_10;
                        var_31 |= ((/* implicit */short) arr_28 [i_8] [12U] [(unsigned char)2] [(unsigned char)2] [i_8]);
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 3861852648U)) ? (((int) (short)19006)) : (((/* implicit */int) (signed char)-91))));
                        arr_32 [i_3] [i_4] [(unsigned short)9] [i_8] [i_3] [(unsigned short)9] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_20 [i_3] [8ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_20 [i_3] [i_3]))))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_17 [i_3] [(unsigned short)8]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_10 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) (short)-8177)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
            {
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18997)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8163)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)76)) || (((/* implicit */_Bool) 6)))))));
                        var_34 = ((/* implicit */unsigned char) ((signed char) arr_19 [i_3] [i_3] [i_3] [i_12 - 1]));
                    }
                } 
            } 
            var_35 = ((/* implicit */short) ((unsigned char) (~(arr_36 [i_3] [(short)9] [i_10]))));
            arr_44 [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-92)) ^ (-2004189047)))));
        }
        for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 2) 
        {
            arr_47 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_3])))))) == (((((/* implicit */int) arr_20 [i_3] [i_13 - 1])) | (((/* implicit */int) arr_13 [i_3] [i_13 - 1]))))))) / (((((/* implicit */int) (short)-19022)) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8178)))))))));
            arr_48 [i_3] [i_13 - 1] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_19 [i_3] [1ULL] [i_13] [i_13 + 1])) : (arr_17 [i_3] [i_13])))))));
        }
    }
}
