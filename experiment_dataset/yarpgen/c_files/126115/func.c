/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126115
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)17701))) / (var_7))), (((/* implicit */long long int) var_1))))) : ((~(var_0))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                                arr_12 [i_4] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) (+(min((arr_3 [i_2]), (((/* implicit */long long int) var_5))))));
                                var_12 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) arr_11 [i_0]))), (arr_7 [i_4] [i_0] [i_0] [i_0])));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned int) 1657518216U)))));
                            }
                        } 
                    } 
                    var_14 &= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(short)6]))) : (var_4)))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
        {
            var_16 &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_1 [i_5 + 2] [i_5 + 2])) : (((13835058055282163712ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
            arr_16 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_5] [i_0]), (1334567059139836016LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) (short)-11379)) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? ((-(arr_15 [i_5 + 2] [i_5 - 1]))) : (max((arr_7 [i_5 - 1] [i_5 - 2] [i_5] [i_5 - 1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_5 + 2] [i_5 - 3])))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
        {
            var_17 &= ((/* implicit */unsigned char) ((arr_13 [i_0] [i_6 - 1] [4LL]) - (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (short i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                var_18 = ((/* implicit */long long int) (unsigned char)255);
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_19 = ((short) (short)-9270);
                            arr_27 [i_9] [i_6] [i_7] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_8] [i_6] [i_6] [i_0])) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (-5854153429735691292LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20))))) : (((/* implicit */long long int) 26U))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_9)) ? (4294967246U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3498420791715267014LL)) ? (arr_13 [i_6] [i_6] [i_6]) : (((/* implicit */int) var_6)))))));
                var_21 -= ((/* implicit */unsigned short) (((+(var_2))) & (((/* implicit */long long int) arr_11 [i_7 + 1]))));
            }
        }
        arr_28 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0])) ? (3905388341U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            {
                var_22 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_10]))) < (arr_30 [i_10 - 1])))))));
                arr_35 [i_10] [i_11] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_30 [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_10] [i_10])) ? (var_0) : (((/* implicit */unsigned long long int) -3962513849011958169LL))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_29 [i_10] [i_10])) : (((/* implicit */int) arr_29 [i_10] [i_10])))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) var_3)))))))));
                var_23 *= ((/* implicit */unsigned short) ((long long int) (+((-(((/* implicit */int) (short)11883)))))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) * (1334567059139836018LL))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((((/* implicit */_Bool) min((var_6), (arr_34 [i_10] [i_10] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_9)))))) : (arr_31 [i_10] [i_11] [i_11]))), (((/* implicit */long long int) ((_Bool) (+(var_2))))))))));
                            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_38 [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_38 [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) arr_38 [i_10 - 1] [i_10 - 1])))) >> (((((unsigned long long int) ((((/* implicit */int) arr_41 [i_10] [(unsigned char)23] [(unsigned char)23] [i_10])) | (((/* implicit */int) arr_29 [i_12] [i_13]))))) - (18446744073709537146ULL)))));
                        }
                    } 
                } 
                var_27 += ((/* implicit */long long int) 1657518202U);
            }
        } 
    } 
}
