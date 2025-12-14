/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124326
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (short)31032))));
    var_14 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
        arr_4 [i_0] [i_0] |= ((/* implicit */unsigned int) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */short) (+((-(1661997254663592136ULL)))));
                                arr_16 [i_2] [(unsigned short)13] [i_2] [(unsigned short)13] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [(unsigned char)15] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_11))));
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [(unsigned char)13] [i_1] [(unsigned char)13] [(unsigned char)13]))));
                    arr_19 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        var_18 -= ((/* implicit */short) arr_10 [i_5] [i_5 + 1] [i_5 + 2] [i_5]);
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_2 [i_5 + 2] [i_5 - 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    }
    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16491396647392393024ULL)) ? (arr_23 [i_6] [i_6]) : (((-4434680320129960494LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))))));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        arr_36 [i_6] [i_6] [i_8] [i_9] = ((/* implicit */long long int) arr_26 [17]);
                        arr_37 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((7084295973219214394ULL) > (((/* implicit */unsigned long long int) arr_30 [i_9] [i_8] [i_6] [i_6]))))), (min((((/* implicit */unsigned char) (_Bool)1)), (var_11)))))) << (((((/* implicit */int) arr_28 [i_6] [i_7])) - (46554)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            arr_41 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((11362448100490337230ULL) != (((/* implicit */unsigned long long int) arr_24 [i_6]))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_6])) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) arr_32 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [i_10]))))));
            /* LoopNest 3 */
            for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    for (unsigned char i_13 = 3; i_13 < 18; i_13 += 1) 
                    {
                        {
                            arr_49 [4LL] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_13 - 3] [i_13 + 1] [i_13 - 3] [i_13 - 2] [i_13 + 1] [i_13 - 1])) ? (arr_47 [i_13 + 1] [i_13 - 1] [i_13 - 3] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 - 1]) : (arr_47 [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 3] [i_13 + 1] [i_13 + 1])));
                            var_20 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_30 [i_6] [i_10] [i_11] [i_13]))) != (((((/* implicit */_Bool) arr_47 [(signed char)13] [i_10] [i_10] [i_11] [2ULL] [(unsigned char)3] [(unsigned char)3])) ? (arr_40 [i_6] [i_13]) : (arr_27 [i_6] [6LL] [(unsigned short)15])))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_31 [11U] [i_10] [i_10] [11U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8)))) && (((/* implicit */_Bool) arr_39 [i_12]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (~(((unsigned long long int) var_1))));
                            arr_59 [i_6] [i_14] [i_14] [i_15] [(unsigned short)4] = ((/* implicit */unsigned short) (~(-45315044967684474LL)));
                            arr_60 [i_6] [(unsigned char)0] [(unsigned char)0] [i_14] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1))));
                            arr_61 [(signed char)10] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */signed char) var_8);
                            arr_62 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_14] [(_Bool)1] [i_14 - 1] [i_14] [(unsigned short)16])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)250))));
                        }
                    } 
                } 
            } 
            var_23 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_57 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        }
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            arr_65 [14] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) arr_34 [i_6] [(unsigned short)0] [i_6])), (arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_17])))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 995756928183866936ULL)) ? (((/* implicit */int) arr_51 [i_17])) : (((/* implicit */int) var_11)))))))));
        }
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            arr_69 [i_6] [i_18] = ((/* implicit */short) ((11715233020343855386ULL) & (((/* implicit */unsigned long long int) 5157900268976953211LL))));
            arr_70 [i_18] [i_6] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2113901596U)) ? (17450987145525684679ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201)))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 2; i_19 < 15; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    {
                        arr_76 [9] [i_18] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */signed char) arr_73 [(unsigned char)10] [(short)0] [i_19 + 1] [i_19 + 3] [i_20]);
                        arr_77 [i_6] [i_18] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        arr_78 [i_18] [(short)2] [i_20] [i_18] [(short)2] = ((max((17450987145525684679ULL), (28ULL))) + (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) + (515311666U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                    }
                } 
            } 
            var_25 = ((max((min((((/* implicit */long long int) var_3)), (arr_23 [i_6] [i_18]))), (((/* implicit */long long int) arr_44 [i_18] [i_18] [i_18])))) << (((((/* implicit */int) var_3)) - (79))));
        }
    }
}
