/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124215
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) (unsigned short)59090));
        var_19 = ((/* implicit */short) (-((-(arr_0 [i_0] [i_0])))));
        var_20 = ((long long int) ((unsigned short) arr_2 [i_0 + 1]));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) max((arr_1 [i_1 - 2]), (((/* implicit */unsigned int) ((unsigned char) 0ULL)))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 17270486460363220484ULL)) ? (1176257613346331131ULL) : (((/* implicit */unsigned long long int) -202284236)))) >> (((arr_1 [i_1 - 2]) - (2331244756U))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                arr_12 [i_1] [i_3] [i_2] [i_3] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_0 [i_3] [i_2 + 2])), (var_7))), (max((min((var_8), (arr_1 [i_1]))), (var_16)))));
                arr_13 [i_1] [i_1] [i_3] [i_1] &= ((/* implicit */unsigned char) (unsigned short)4095);
                var_22 = max((min((((/* implicit */long long int) (unsigned short)16352)), (min((arr_8 [(short)5] [(unsigned short)8] [(short)5]), (((/* implicit */long long int) (short)-26111)))))), (((max((6859597437417194078LL), (((/* implicit */long long int) (unsigned char)237)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))));
            }
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned short)9))));
            arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 - 2]))) ? (((/* implicit */int) ((unsigned short) ((int) arr_2 [i_2])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_2 [i_1])))));
        }
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) min((((max((((/* implicit */long long int) -202284236)), (1048575LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_12))));
        var_24 = ((/* implicit */int) arr_2 [i_4]);
        var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_10 [(_Bool)1] [i_4] [(unsigned short)10] [i_4]))))) : ((~(1048599LL)))))));
        arr_19 [i_4] = ((/* implicit */_Bool) var_9);
        var_26 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-14005))));
    }
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            arr_25 [i_6] = ((/* implicit */short) var_3);
            var_27 = ((/* implicit */signed char) var_11);
            /* LoopNest 2 */
            for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) ((int) 4294967280U));
                        var_29 = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) arr_20 [i_5]);
        }
        for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_40 [i_9] [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (1048576LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((long long int) 17270486460363220496ULL)), (((/* implicit */long long int) ((short) -202284236))))))));
                        var_32 = ((/* implicit */unsigned int) arr_2 [i_5]);
                        arr_41 [i_9] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(1048575LL)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)202))))))), (((/* implicit */int) (unsigned char)181))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        arr_46 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_9 + 1])) ? (min((var_17), (((/* implicit */long long int) arr_29 [i_5] [i_9] [i_9 + 2] [i_9 + 2] [i_5] [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) var_18))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) var_9);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_9 + 1])) ? (((/* implicit */int) (unsigned short)9232)) : (((/* implicit */int) arr_34 [i_9] [i_9] [i_9 + 1] [i_9 + 1]))));
                            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_4)))));
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1400746137648073507LL)) || (((/* implicit */_Bool) var_2)))))));
                        }
                        var_37 = ((/* implicit */unsigned int) arr_16 [i_5]);
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
            var_39 = ((/* implicit */unsigned short) arr_38 [i_5] [i_5] [i_15]);
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 10; i_16 += 1) 
            {
                for (unsigned short i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */int) var_14);
                            var_41 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (arr_59 [i_5] [i_17 + 1] [i_5] [i_17 - 2] [i_17] [i_16 - 1]) : (arr_59 [i_16] [i_17 + 1] [i_16] [i_17 + 1] [i_17] [i_16 + 1])))));
                        }
                    } 
                } 
            } 
        }
        var_42 = var_9;
    }
    var_43 = (unsigned short)44426;
}
