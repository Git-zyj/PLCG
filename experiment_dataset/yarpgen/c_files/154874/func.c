/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154874
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
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_4 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 17738021768925107620ULL)))) : (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) var_12);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (short)28095))));
        arr_11 [i_1] = ((var_12) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 3279679545124958176ULL)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (short)29550))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_2]), (-2LL)))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])), (15167064528584593440ULL))) : (max((((/* implicit */unsigned long long int) (short)15143)), (3279679545124958176ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35923))) + (26ULL)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)29591))) : (((/* implicit */int) max((var_0), ((short)-15137)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (64512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14162)))))))))));
        arr_16 [i_2] = ((/* implicit */unsigned char) (-((+(((708722304784443995ULL) | (var_8)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64204))) <= ((+(13106947286701620820ULL)))));
            arr_20 [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            arr_21 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)38561)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119)))) & (((((/* implicit */int) (short)-13588)) + (((/* implicit */int) (short)23206))))));
        }
        arr_22 [i_2] = ((/* implicit */long long int) max((((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_17 [i_2]))))), (((short) (~(((/* implicit */int) (signed char)10)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_32 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))) : (arr_18 [i_2] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_4]))) : (((2560269187577386460ULL) << (((-2LL) + (44LL)))))));
                        arr_33 [i_6] [i_5] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_4]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                arr_36 [i_7] [i_7] [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_2]))) / ((+(var_8)))));
                arr_37 [i_7] [i_4] [i_7] = ((/* implicit */unsigned char) var_11);
                var_15 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44474)) ? (((/* implicit */int) (unsigned short)1362)) : (((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) (unsigned short)26974)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29612))))));
            }
            for (unsigned short i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            arr_45 [(short)18] [i_8] [i_9] [i_8] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_9] [i_9] [i_9] [i_9] [(_Bool)0] [(unsigned short)7] [i_9])) ? (arr_0 [i_9] [i_4]) : (arr_0 [i_2] [i_10])));
                            var_16 ^= ((/* implicit */_Bool) (short)-25068);
                            arr_46 [i_2] [i_4] [i_2] [i_9] [i_8] [i_4] = ((/* implicit */short) ((5339796787007930798ULL) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1297)))))));
                            arr_47 [i_2] [i_4] [i_8 + 1] [i_9] [i_8] [i_10] [i_2] = ((/* implicit */unsigned short) ((short) var_3));
                        }
                    } 
                } 
                arr_48 [i_2] [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2] [i_4] [i_8] [i_8])) ? (var_8) : (arr_18 [i_2] [i_4]))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_52 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_2] [i_4] [i_2] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_23 [i_2])) ? (var_2) : (var_12)))));
                arr_53 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_2] [i_2])) | (((/* implicit */int) var_11))));
                var_17 *= ((/* implicit */unsigned short) ((arr_26 [i_2] [i_2] [i_2]) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2] [i_4]))) : (2560269187577386453ULL)))));
                arr_54 [(signed char)12] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2560269187577386467ULL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_0))));
                arr_55 [i_2] [i_4] [i_11] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_2]));
            }
            arr_56 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_2] [i_4] [i_4])) ? (arr_27 [i_2] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (signed char)127))));
}
