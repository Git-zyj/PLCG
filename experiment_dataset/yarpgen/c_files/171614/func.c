/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171614
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
    var_18 ^= ((/* implicit */long long int) ((int) var_9));
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_13)))))) ? (((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) var_12))))) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) 1486301143U))), (((signed char) var_12)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) (unsigned char)53);
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(max((1486301143U), (1524932132U)))))) >= (((long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])))))));
                        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1])) & (2564805261269156343ULL)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_0] [i_4] [i_2] [i_1])) : (min((12131982557457672793ULL), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]))))));
                        arr_15 [i_0] [i_4] = (~(262549666U));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_19 [i_5] [i_5] [i_5] [i_5] [i_5 + 2]));
                        var_22 = ((/* implicit */_Bool) ((long long int) arr_16 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5]));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
                        {
                            var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_6 + 2] [i_6] [i_6 + 1] [i_6 - 1] [i_6]))));
                            arr_23 [i_0] [i_1] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */int) (short)3673);
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 12131982557457672793ULL)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_2])))));
                    var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? ((+(1713112597U))) : (((((/* implicit */_Bool) -1677771581)) ? (2060380235U) : (arr_8 [i_1] [i_1])))))));
                    arr_25 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((1681196109U) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1]), (((_Bool) var_5))))))));
                        var_26 = ((/* implicit */unsigned int) (_Bool)1);
                        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 2) 
        {
            var_28 *= ((/* implicit */unsigned char) 2934574566U);
            var_29 = ((/* implicit */long long int) arr_12 [i_9] [i_9] [i_9] [i_9 - 1]);
            var_30 = ((/* implicit */unsigned long long int) arr_13 [i_9] [i_9] [i_8] [i_8] [i_9] [i_9]);
        }
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            arr_35 [i_8] = ((/* implicit */unsigned short) (((_Bool)1) ? (((long long int) arr_33 [i_8] [i_8])) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 1537261666U)) || (((/* implicit */_Bool) 2613771187U)))) ? (((((/* implicit */_Bool) 33554431)) ? (1360392729U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_8])))))))))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((min((arr_31 [6] [i_10]), (arr_31 [(_Bool)0] [i_10]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [8U] [i_10])) || (((/* implicit */_Bool) arr_31 [10U] [10U]))))))))));
            var_32 = ((/* implicit */unsigned short) ((min(((~(arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10]))), ((-(2808666152U))))) >> ((((-(arr_28 [i_8]))) - (2576873882U)))));
        }
        for (long long int i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_11 + 2] [i_11])) ? (arr_16 [i_8] [i_11] [i_11] [i_11 + 1] [i_8]) : (arr_16 [i_8] [i_8] [i_8] [i_11 + 2] [i_11]))) << ((((~(arr_16 [i_8] [i_11] [i_8] [i_11 + 2] [i_8]))) - (2380099893U)))));
            var_34 = ((/* implicit */long long int) (-(((unsigned long long int) min((arr_5 [i_8] [i_11]), (((/* implicit */unsigned long long int) 2204227370U)))))));
            arr_39 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_11] [i_11] [i_11 + 1] [i_11])) > (((/* implicit */int) (!(arr_34 [i_11 + 1] [i_11 + 2]))))));
            var_35 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_33 [i_8] [i_8])), (0LL)))), (((((/* implicit */_Bool) arr_17 [i_8] [i_11] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (6314761516251878822ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_11])))));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 11; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_40 [i_13] [i_8] [i_8] [i_8])))) - (((arr_37 [i_13] [i_12] [i_11]) - (((/* implicit */unsigned long long int) arr_28 [i_11]))))))) ? (((/* implicit */int) arr_32 [i_8] [i_8])) : ((((!(((/* implicit */_Bool) arr_8 [i_11] [i_11])))) ? (((/* implicit */int) arr_21 [i_12] [i_12] [i_12 + 2] [i_12] [i_12])) : (((/* implicit */int) arr_17 [i_8] [i_11 + 1] [i_11 + 1] [i_11] [i_12 + 2]))))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1853)) || (((((/* implicit */_Bool) 2307030224U)) && (((_Bool) (signed char)-90))))));
                    }
                } 
            } 
        }
        for (int i_14 = 2; i_14 < 11; i_14 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) (signed char)-83);
            var_39 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_14 + 2] [i_14] [i_14]))))));
        }
        var_40 = ((/* implicit */_Bool) arr_30 [i_8] [i_8]);
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 924328671249706514LL)) ? (((/* implicit */int) ((arr_48 [i_8] [i_8] [i_8]) >= (min((((/* implicit */unsigned int) (_Bool)1)), (3057450961U)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [i_8]))) : (4948386159120780165ULL)))))))));
    }
}
