/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149859
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
    var_16 = ((/* implicit */unsigned char) (-(var_7)));
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                arr_6 [i_1] [(signed char)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7903736876722775056ULL))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-83)))))));
            }
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 4; i_5 < 18; i_5 += 3) 
                    {
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_5 - 2] [(_Bool)1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)82))))));
                        arr_16 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 989970238U))))))))));
                        var_20 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32740))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_0))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_4 [15U] [i_1 + 1] [i_1])))))))));
                    }
                    arr_19 [i_0] [1U] [i_3] [i_1] = ((/* implicit */unsigned char) (-((~((~(-892331130)))))));
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])))))))));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                        var_25 = ((/* implicit */int) min((var_25), ((-((~(((/* implicit */int) arr_26 [i_1 - 1] [i_1 + 4] [i_1 + 4]))))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+((-((-(((/* implicit */int) arr_7 [i_1] [i_3] [i_7] [i_9])))))))))));
                        var_27 += ((/* implicit */long long int) (~(21U)));
                        var_28 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_29 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 2]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-118))));
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_3] [i_3]))));
                    }
                    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)82))));
                    arr_32 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_27 [i_1] [i_1 + 2] [i_1] [i_3] [i_7])))))))));
                    var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65514)))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)13884))));
                    var_34 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32740))))));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    arr_39 [i_1] = ((/* implicit */unsigned long long int) (+(arr_20 [(_Bool)1] [(short)4] [i_1 - 1] [i_3] [i_3] [i_12])));
                    var_35 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)82))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (~(4294967295U))))));
                }
                arr_40 [(signed char)14] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_9)))))))));
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1 + 4] [i_3] [i_3])))))))));
                var_38 = ((/* implicit */unsigned short) (-(3430929187U)));
                arr_41 [i_0] [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0])))))));
            }
            var_39 += ((/* implicit */signed char) (-((-(var_10)))));
            arr_42 [i_0] [i_0] |= ((/* implicit */signed char) (~((-(3753957108U)))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0] [(signed char)10] [i_0] [i_13] [i_13])))))));
            var_41 = ((/* implicit */unsigned short) (+(var_1)));
            var_42 = ((/* implicit */unsigned int) (+(arr_9 [i_0] [i_0] [i_0] [i_0] [i_13])));
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_43 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
                arr_51 [i_0] [i_14] [i_14] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_18 [i_0] [i_13]))))));
            }
            for (short i_15 = 1; i_15 < 17; i_15 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */signed char) (-(var_4)));
                var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (-(arr_20 [i_15] [i_15] [i_15] [i_15] [i_15 + 2] [i_15]))))));
            }
            for (short i_16 = 1; i_16 < 17; i_16 += 3) /* same iter space */
            {
                var_46 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-24975)))))));
                var_47 &= ((/* implicit */signed char) (~(var_6)));
                arr_57 [i_16] [i_16] [i_16 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-98))));
            }
        }
        arr_58 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)53310))));
    }
    var_48 -= ((/* implicit */short) (+(((/* implicit */int) var_8))));
    var_49 |= ((/* implicit */signed char) (~(3430929187U)));
}
