/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125608
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-2147483641)))) && (((_Bool) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_2);
        var_15 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)209)) & (((/* implicit */int) (unsigned char)224))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1327101490) == (((/* implicit */int) var_4))))) >> (((((/* implicit */int) (unsigned char)159)) - (134)))));
                        arr_13 [i_2] [7ULL] = ((/* implicit */unsigned int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]);
                    }
                } 
            } 
            var_17 = arr_12 [i_1];
        }
        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            var_18 -= ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]);
            var_19 = ((/* implicit */int) ((3340957433U) + (((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned char)0), ((unsigned char)24)))))))));
            var_20 = ((/* implicit */long long int) min((var_20), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) / (((((/* implicit */_Bool) 3340957438U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (0U)))))), (3949647668360622305LL)))));
            arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 3340957424U))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3949647668360622305LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_5 - 3] [i_5 - 2] [11LL]), (var_7)))))));
        }
        var_21 -= ((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))) : (arr_10 [(unsigned short)3])))) : (((((/* implicit */_Bool) -1LL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) << (((arr_4 [i_1]) - (3426356595U)))))))))));
        var_22 = ((/* implicit */unsigned char) (-(arr_5 [i_1] [i_1])));
        arr_18 [1] = ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2315648307U)) ? (((/* implicit */long long int) 0U)) : (arr_5 [i_1] [i_1])))), (var_5)))));
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_24 -= ((/* implicit */long long int) ((int) (((~(arr_20 [i_6] [i_6]))) - (arr_19 [i_6] [i_6]))));
        var_25 = ((/* implicit */unsigned int) min((arr_20 [i_6] [i_6]), (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((/* implicit */int) (((+(max((((/* implicit */unsigned int) (unsigned char)62)), (4294967295U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))));
        var_26 -= ((/* implicit */unsigned int) var_9);
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
    {
        var_27 = ((/* implicit */int) min(((~(3340957433U))), (((/* implicit */unsigned int) var_9))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (max(((((((_Bool)1) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7])))))) : (arr_4 [i_7]))), (((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 2] [i_7])) ? (3340957431U) : (((/* implicit */unsigned int) -291030659))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_29 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3148131171717853011LL)))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (signed char)-31))))));
            var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)163))));
            var_31 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)111))));
            arr_28 [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) (signed char)37)) - (33)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_8] [i_8] [i_8] [i_8]));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [0U])) & (((/* implicit */int) var_2)))))));
        }
        for (int i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) 15639589798001843510ULL);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3340957431U)) ? (2807154275707708111ULL) : (((/* implicit */unsigned long long int) 954009863U))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_7 + 1] [i_9 - 1]), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)121))))))) ? (max((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)98))))))))));
                    }
                } 
            } 
            arr_38 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3200354532401223288LL)) ? (-1LL) : (9223372036854775807LL)));
        }
        for (long long int i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                var_36 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_13))))))));
                arr_45 [i_7] [i_12 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) min((3340957433U), (1983471210U))))) % (2807154275707708092ULL)));
            }
            arr_46 [i_7] [i_7 + 3] [i_12] = ((/* implicit */_Bool) 1364204387U);
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (int i_15 = 1; i_15 < 11; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 728505385)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (954009866U)));
                            var_38 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_51 [i_7] [i_14] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_51 [i_7] [i_16] [i_16] [i_16])))));
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7 + 3])) ? (arr_5 [i_7] [i_7 - 1]) : (((/* implicit */long long int) 1983471223U)))));
        }
    }
    var_40 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)20)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_2)))))))));
    var_41 = ((/* implicit */long long int) var_11);
    var_42 = ((/* implicit */unsigned short) (((~(var_0))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
