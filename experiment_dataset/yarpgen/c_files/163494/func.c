/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163494
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */_Bool) var_2);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] |= ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 3] [i_1 + 1]));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_7))));
        }
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) max((var_15), ((+(arr_6 [i_0 + 2])))));
            var_16 = (-(((/* implicit */int) arr_2 [i_2] [i_2 - 1])));
        }
    }
    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1]))), (((signed char) arr_9 [i_3 - 1]))));
        var_18 = ((/* implicit */long long int) arr_8 [i_3] [i_3]);
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_13 [i_4]))))));
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_15 [i_4] [12U] [i_5]))));
            var_20 += ((/* implicit */unsigned long long int) (~((-((+(((/* implicit */int) var_1))))))));
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            arr_22 [i_6] [i_4] |= ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_9 [i_4 - 1])))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_29 [i_4] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) arr_27 [i_4] [i_7] [i_8] [i_9]);
                            var_21 = ((/* implicit */int) min((var_21), (min(((~((-(((/* implicit */int) arr_17 [i_4] [i_8] [i_9])))))), (max((((/* implicit */int) arr_13 [i_4])), ((~(arr_8 [i_4] [i_6])))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(min((arr_19 [i_4]), (((/* implicit */long long int) var_5))))))), (var_9))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((unsigned long long int) 2077146397271712211ULL)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_4 - 1]))))))))));
                            arr_30 [i_9] [i_8] [i_7] [i_6] [i_4] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) max((((/* implicit */short) arr_27 [i_4] [i_6] [i_8] [i_9])), (arr_13 [i_4])))), ((+(((/* implicit */int) arr_13 [i_4])))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_6] [i_4] [i_4] &= ((/* implicit */unsigned short) min((((signed char) (-(arr_21 [i_4])))), (arr_25 [i_4 + 2] [i_4] [i_4 + 3] [i_4 - 1])));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) arr_16 [i_4 - 1]))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (arr_21 [i_10])))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min(((+(((/* implicit */int) arr_18 [12U])))), ((~(((/* implicit */int) arr_18 [(signed char)2])))))))));
            var_26 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_7)))), ((+(arr_32 [i_4 - 1])))));
            var_27 = ((/* implicit */short) arr_12 [i_4] [i_10]);
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                for (unsigned short i_12 = 3; i_12 < 14; i_12 += 3) 
                {
                    {
                        var_28 = (+((+(max((((/* implicit */long long int) arr_7 [i_4])), (var_6))))));
                        var_29 += ((/* implicit */signed char) arr_15 [i_4] [(_Bool)1] [i_11]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_43 [(unsigned short)16] &= ((/* implicit */_Bool) arr_25 [i_13] [i_4 - 1] [i_4] [i_4 - 1]);
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            var_30 &= ((/* implicit */long long int) min((arr_7 [i_16]), (((/* implicit */signed char) min((arr_12 [i_4 + 1] [i_4]), (arr_12 [i_4 + 1] [i_4]))))));
                            arr_52 [i_4] [i_13] [i_15] [i_16] = min((((/* implicit */unsigned long long int) var_4)), (min((16369597676437839402ULL), (16369597676437839404ULL))));
                        }
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            var_31 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((var_3), (arr_45 [i_4] [i_14] [i_15] [i_17]))))))));
                            arr_56 [i_13] [i_17] = ((/* implicit */unsigned char) var_6);
                        }
                        var_32 = ((/* implicit */short) arr_9 [i_4]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_33 = ((/* implicit */int) ((unsigned short) var_7));
                            var_34 = ((/* implicit */signed char) arr_47 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 3]);
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (~(arr_39 [i_18]))))));
                        }
                        for (long long int i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            var_36 = ((/* implicit */short) var_5);
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_47 [i_4] [i_13] [i_15] [i_19]))));
                        }
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned int) var_5)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                for (unsigned short i_21 = 2; i_21 < 15; i_21 += 4) 
                {
                    {
                        var_39 = ((/* implicit */int) var_3);
                        arr_67 [i_13] [i_20] [i_13] [i_13] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((unsigned int) var_3)), (((/* implicit */unsigned int) min((arr_50 [i_4] [i_13] [i_21] [i_21] [i_13]), (arr_63 [i_21]))))))), ((~(min((((/* implicit */long long int) arr_48 [i_4] [i_4] [i_4] [i_4] [i_4])), (arr_19 [i_13])))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_22 = 0; i_22 < 17; i_22 += 2) 
            {
                for (signed char i_23 = 1; i_23 < 13; i_23 += 4) 
                {
                    for (int i_24 = 2; i_24 < 16; i_24 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) max((((/* implicit */short) arr_44 [i_4] [i_4])), (min((arr_72 [i_4 - 1] [i_23 + 2] [i_23] [i_24 - 2]), (var_8)))));
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_63 [i_4]))));
                        }
                    } 
                } 
            } 
            arr_77 [i_13] [i_13] = ((unsigned int) arr_38 [i_13] [i_13] [i_13] [i_4] [i_4]);
        }
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (+(-170965595))))));
    }
    var_43 |= ((/* implicit */signed char) var_2);
}
