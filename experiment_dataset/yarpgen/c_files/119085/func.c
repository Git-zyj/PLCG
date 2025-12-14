/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119085
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = (-(arr_1 [i_0 + 3]));
                    var_17 = ((/* implicit */unsigned short) var_11);
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (signed char)-122)) + (127)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2]))) : (arr_0 [i_0] [i_0])))) : (arr_1 [i_0])));
                }
            } 
        } 
    } 
    var_18 += ((((min((var_6), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) (-(var_7)))))) != (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 2 */
    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((/* implicit */short) (~((+(((/* implicit */int) min(((signed char)117), (((/* implicit */signed char) (_Bool)1)))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (short)0)) : (var_10))) ^ (((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3 + 1])) >> (((((/* implicit */int) arr_12 [i_3 - 1])) - (75)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-125))))) ? (max((5109600166181166890ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13337143907528384725ULL))))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-106)) % ((+(((/* implicit */int) arr_12 [i_3 + 1]))))));
        var_22 = ((/* implicit */short) max((max((var_12), (((/* implicit */int) (short)26494)))), (((/* implicit */int) arr_12 [i_3]))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) & (16171865072097861170ULL)))) ? (((/* implicit */long long int) ((((var_10) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_4] [i_4])) + (9354)))))) : (min((3454766520595764104LL), (((/* implicit */long long int) arr_13 [i_6] [i_4]))))))) != ((-(arr_16 [i_3] [i_4] [i_5]))))))));
                        var_24 = ((/* implicit */unsigned short) var_12);
                        var_25 = (((_Bool)1) ? (((/* implicit */int) ((_Bool) 13337143907528384747ULL))) : (((/* implicit */int) var_11)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7]))) : (2134076201U)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned char) ((9205357638345293824LL) < (((/* implicit */long long int) ((arr_15 [i_7]) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) arr_5 [i_7])))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) var_10);
                        /* LoopSeq 2 */
                        for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */int) arr_27 [i_7] [i_8] [i_9] [i_9] [i_11]);
                            var_30 &= ((/* implicit */short) (!(((/* implicit */_Bool) 2848550124U))));
                            arr_31 [i_8] [i_8] = ((/* implicit */short) var_3);
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            var_31 -= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1))))));
                            var_32 = ((/* implicit */unsigned char) var_7);
                            var_33 = arr_4 [i_7] [i_7];
                        }
                    }
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_19 [i_13]))));
            var_35 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 164655871U)) * (0ULL))))));
            var_36 = ((/* implicit */unsigned short) var_0);
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) -370302848);
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14] [i_7] [i_7]))) ^ (arr_30 [i_14] [i_14] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_9))));
            arr_40 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_14]))));
            arr_41 [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)1)) != (7))));
            var_39 = ((/* implicit */unsigned long long int) arr_4 [i_7] [i_7]);
        }
        arr_42 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_7] [i_7]))));
        arr_43 [i_7] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            arr_48 [i_7] [i_7] = ((/* implicit */unsigned short) arr_26 [i_7] [i_15] [i_15] [i_15]);
            var_40 = ((/* implicit */signed char) ((arr_17 [i_15] [i_15] [i_15] [i_7] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10048)) ? (((/* implicit */int) (unsigned short)21959)) : (((/* implicit */int) (unsigned char)171))));
            var_42 -= ((/* implicit */unsigned int) var_5);
        }
    }
    var_43 ^= ((/* implicit */signed char) var_14);
}
