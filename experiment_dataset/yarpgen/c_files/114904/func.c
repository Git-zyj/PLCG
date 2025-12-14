/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114904
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) -3795876842992750490LL))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_3]);
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_1] [i_2] = max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (min((-3442796031920406803LL), (((/* implicit */long long int) var_1))))))), (((((/* implicit */_Bool) -4504003697247665322LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_1]))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_0]))) : (arr_12 [i_3]))))));
                    }
                } 
            } 
            arr_15 [(short)13] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [6] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) * (arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_12 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [i_0]))))))));
            arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_9);
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_16 -= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_4))));
                        var_17 = (-(((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_4] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                        arr_23 [i_0] [(short)12] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0] [i_4] [i_5]))))) - (((((/* implicit */_Bool) arr_4 [i_5] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_5]))) : (arr_22 [i_0] [i_0] [(short)17]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))));
                    }
                } 
            } 
            arr_24 [i_1] = ((/* implicit */signed char) var_9);
        }
        var_18 ^= ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 3442796031920406802LL)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)-10486))))) - ((+(7LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_13), (var_13))))));
    }
    for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)45968)) ? (((/* implicit */int) min((((/* implicit */short) var_13)), ((short)128)))) : (((/* implicit */int) var_14)))));
        arr_27 [i_6] [i_6 + 3] = ((/* implicit */signed char) arr_25 [i_6 - 2]);
        var_20 = ((/* implicit */short) var_12);
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */_Bool) max((((/* implicit */short) arr_21 [8] [(unsigned short)9] [i_8] [i_9] [i_9])), (arr_32 [14U])));
                        arr_36 [i_6] [i_7] [i_6] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)38431)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 1; i_10 < 16; i_10 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_6 - 2])) ? ((+(((/* implicit */int) arr_40 [i_6 + 3] [i_6 - 2])))) : (((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((((/* implicit */int) (short)-32762)) == (((/* implicit */int) (unsigned short)65521)))) ? ((~(arr_8 [i_10]))) : (((/* implicit */int) arr_37 [i_6] [i_6 + 1] [i_11 - 1]))));
                        var_24 = ((/* implicit */int) var_12);
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_6 - 2] [i_10 + 2])) ? (((/* implicit */int) arr_29 [i_6 - 2] [i_10 + 2])) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) arr_21 [i_6] [i_10 + 1] [(short)17] [(short)13] [i_10 - 1]);
        }
    }
    var_27 += ((/* implicit */unsigned short) min((((((/* implicit */int) var_8)) < (((((/* implicit */int) var_6)) + (var_7))))), (((((/* implicit */int) (!(((/* implicit */_Bool) -217939341))))) != (((/* implicit */int) min((var_12), (var_1))))))));
}
