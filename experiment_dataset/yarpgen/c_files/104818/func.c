/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104818
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
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (2147483632) : (((/* implicit */int) var_6))));
    var_14 = max((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */int) var_9)) / (((/* implicit */int) ((signed char) var_8))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) var_6)) - ((+(((/* implicit */int) var_6)))))), ((-(((var_6) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_4))))))));
        var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) max((var_6), (var_9)))), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), ((unsigned short)41567)))))))) : (max((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) var_4))))), (((unsigned int) (unsigned char)248)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [(unsigned char)20] [(unsigned char)20] [i_2 + 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_10)))));
                    arr_9 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) min((((var_6) ? (((/* implicit */int) arr_7 [(short)15] [(short)15] [i_2 + 1])) : ((-(1420673290))))), (((int) min((((/* implicit */long long int) var_4)), (var_11))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19356))) >= (var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(-1308947677))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) > (min((((/* implicit */unsigned int) (unsigned char)23)), (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        arr_15 [i_3] = arr_5 [i_3];
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((arr_11 [i_3 - 3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << (((4384703623871460034LL) - (4384703623871460011LL))))));
        }
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_5)))));
                        arr_28 [i_3] [(signed char)0] [i_3] [i_5] [i_3] [i_3 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) var_7))));
                        var_20 = (-(((/* implicit */int) arr_7 [i_3 + 3] [i_5 + 1] [i_5 - 1])));
                    }
                } 
            } 
            var_21 = (+(((((/* implicit */_Bool) 1988738969)) ? (arr_14 [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 1988738977))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32746)))))));
            arr_29 [i_5] [i_5] = ((/* implicit */short) (+(1634815062U)));
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            var_23 = ((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (unsigned short)1676)) : (((/* implicit */int) (short)6651)))));
            arr_32 [i_3] [2ULL] [i_3] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 2]))) : (arr_23 [i_3] [i_8] [i_3 - 3] [i_8]));
            arr_33 [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) ((_Bool) arr_25 [i_8] [i_3 + 2] [i_8] [i_3] [i_3 + 3]));
            arr_34 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) var_0)) : (2717333967U))))));
        }
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            arr_37 [i_9] = ((/* implicit */_Bool) ((short) arr_4 [i_9 + 1]));
            var_24 = 1892011422;
        }
        arr_38 [i_3] = ((/* implicit */unsigned int) var_2);
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    }
    /* LoopSeq 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)427))))) ? (((/* implicit */int) (short)-14125)) : (((/* implicit */int) (signed char)-125)))), (((((/* implicit */int) var_4)) - (((/* implicit */int) var_10))))));
                    var_27 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
        arr_46 [i_10] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_45 [i_10] [i_10] [i_10])));
    }
    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    {
                        arr_59 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) ((604258361U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (max(((+(var_0))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_16])) && (((/* implicit */_Bool) var_10)))))))));
                        arr_60 [(unsigned short)20] [i_14] [(short)1] [i_16] [i_14] [i_14] = ((/* implicit */signed char) arr_51 [i_14] [i_14 + 1] [i_14]);
                        var_28 = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29707))) <= (3690708935U)))))), ((-(((/* implicit */int) arr_1 [i_13] [i_13]))))));
        /* LoopSeq 2 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_1 [i_13] [i_13])) - (72)))))))), (((arr_51 [i_17] [i_17] [i_17 - 1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13] [i_17])) ? (((/* implicit */int) var_4)) : (-1420673292))))))));
            var_31 = ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_8)) - (((/* implicit */int) var_6))))))) - ((-(((unsigned int) var_2)))));
        }
        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            arr_65 [i_13] [i_18] = min((arr_58 [i_13] [(signed char)3] [(unsigned char)0] [(_Bool)1]), (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_13] [i_13]))))), (arr_55 [i_13] [i_13]))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            arr_72 [i_13] [i_18] [(unsigned char)3] [i_19] [i_19] [i_19] [i_21] = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_68 [i_13] [i_18] [i_19] [i_19] [(unsigned char)19] [i_18]), (arr_68 [i_13] [i_18] [i_19] [i_13] [i_13] [i_18]))));
                            arr_73 [i_19] [i_20] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (arr_4 [i_13]))));
                            var_32 = ((/* implicit */unsigned long long int) var_10);
                            arr_74 [i_13] [i_18] [i_18] [i_18] [i_20] [13U] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
