/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135414
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
    var_20 = ((/* implicit */unsigned short) (((+(var_7))) > (((/* implicit */int) (short)32767))));
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)31491)) : (((/* implicit */int) (short)-18619))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_16)), ((unsigned char)86)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_18)) : (var_7)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) >= ((+(((/* implicit */int) (signed char)125))))));
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)63066);
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((~(min((((/* implicit */unsigned long long int) var_0)), (var_12))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))))));
        var_23 += ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)192)) && (((/* implicit */_Bool) var_2))))) >> (((((((/* implicit */_Bool) (unsigned short)39145)) ? (((/* implicit */int) (unsigned short)13668)) : (((/* implicit */int) (short)192)))) - (13655))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_4] [6ULL] [(unsigned short)12] [i_2] [i_2] = (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)192)))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) 878281440589719798ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-103)))), (((/* implicit */int) (unsigned char)59)))))))));
                                var_25 = (short)189;
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-6449)) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) (short)-32763)) ? (var_15) : (((/* implicit */int) var_18))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_26 [(short)8] [i_2] [(short)8] [(short)8] [i_7] [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)1))));
                                arr_27 [i_1] [i_1] [6ULL] [i_6] [i_7] &= max((((((/* implicit */int) ((((/* implicit */int) (unsigned char)170)) == (((/* implicit */int) (unsigned char)170))))) != (((/* implicit */int) (short)183)))), ((!(((/* implicit */_Bool) (unsigned short)2470)))));
                                arr_28 [i_7] [i_2] [(unsigned short)5] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min(((unsigned char)179), (((/* implicit */unsigned char) (signed char)-10))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (arr_21 [(unsigned char)11] [i_2] [i_3] [(unsigned char)1] [(unsigned char)1] [(short)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_19)))))))));
                                arr_29 [11ULL] [i_2] [i_3] [(short)6] [i_7] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)183))))));
                            }
                        } 
                    } 
                    arr_30 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)-203)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) var_3)))), (min((var_13), (((/* implicit */int) (short)24949))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)0))))), (arr_8 [i_1] [i_2] [i_3])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 3; i_8 < 12; i_8 += 3) 
        {
            var_27 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_14 [i_8] [i_8] [i_1])))) | (((/* implicit */int) var_18))));
            arr_34 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4775)) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [(unsigned char)4] [i_1] [i_8])) : (((/* implicit */int) arr_33 [i_8 - 3] [i_8] [i_8 + 1]))));
            arr_35 [i_1] &= ((unsigned short) arr_25 [i_1] [i_1] [i_1] [(_Bool)1] [i_8] [i_8]);
            arr_36 [i_1] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-16564))));
        }
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_28 = ((/* implicit */short) ((unsigned char) ((_Bool) 1628238797)));
                        var_29 = (-((-(((/* implicit */int) (unsigned short)23026)))));
                    }
                } 
            } 
        } 
        var_30 -= ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)16)) & (((/* implicit */int) (short)16702)))))) ? ((-(((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)72))))))) : (((((((/* implicit */int) ((short) (signed char)-72))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-26977)))) + (26993))))));
    }
    for (short i_12 = 3; i_12 < 12; i_12 += 2) 
    {
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_14))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            arr_52 [i_12 + 1] [i_13] [i_13] = ((/* implicit */short) (-(((/* implicit */int) var_18))));
            var_32 ^= var_10;
            var_33 -= ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                var_34 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_14] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12] [(unsigned char)8] [i_12]))));
                var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)29678))));
                var_36 -= ((/* implicit */_Bool) (signed char)22);
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 11; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32751))));
                            arr_59 [i_13] [i_13] = ((/* implicit */signed char) (+(17255010291680327342ULL)));
                            var_38 = (short)20;
                            var_39 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)15958)) > (((/* implicit */int) (signed char)-113))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (short)2456)) >> (((((/* implicit */int) (signed char)-92)) + (92)))));
            }
        }
    }
}
