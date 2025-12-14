/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183115
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) (unsigned short)52551);
        var_13 = ((/* implicit */_Bool) min((2132913355471332635LL), (((/* implicit */long long int) (unsigned char)85))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        arr_5 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned char)211))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((long long int) (-(arr_3 [(signed char)11] [i_1]))));
                        var_15 = ((/* implicit */_Bool) (short)32755);
                    }
                    var_16 = ((((/* implicit */_Bool) (+(arr_7 [i_3] [i_3])))) ? ((+((((_Bool)0) ? (((/* implicit */int) (short)32755)) : (arr_12 [10] [i_2] [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_1])))));
                    arr_14 [i_3] [i_3] [(_Bool)1] [i_1] = (~((~((~(1602682266U))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_3 [i_1] [i_2]))));
                }
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)14954)) : (((/* implicit */int) (signed char)24))))) ? ((~(((/* implicit */int) (unsigned char)0)))) : ((~(((/* implicit */int) arr_15 [i_5] [i_6]))))))));
                    var_18 = ((/* implicit */unsigned int) (-(((arr_7 [i_5] [i_6]) + (arr_7 [i_5] [i_6])))));
                }
            } 
        } 
        arr_23 [i_5] = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_21 [i_5] [11U] [(short)0] [i_5])) : (var_4))), (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_29 [(unsigned char)6] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)14])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) arr_20 [i_5] [(signed char)10] [i_5])) ? (arr_6 [i_5] [i_5] [i_5]) : (arr_16 [i_5] [i_5]))))) : (arr_9 [i_9] [3ULL] [3ULL])));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15))))) ? ((((~(((/* implicit */int) var_3)))) & (max((((/* implicit */int) var_9)), (arr_9 [i_5] [i_5] [i_5]))))) : (((/* implicit */int) ((unsigned char) (~(1996583964552683429ULL)))))));
                    var_20 = ((/* implicit */unsigned short) arr_17 [i_5] [i_8] [i_9]);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1602682266U)) ? (min((arr_7 [i_5] [i_5]), (((/* implicit */int) (signed char)47)))) : ((~(((/* implicit */int) var_10))))))));
                        var_22 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (unsigned char)185))))))));
                        var_23 = ((/* implicit */_Bool) ((int) 16450160109156868187ULL));
                    }
                }
            } 
        } 
        arr_32 [i_5] = ((/* implicit */unsigned char) (short)-1);
    }
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (2436197874U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) && (((_Bool) 191913483)))) ? (arr_34 [i_11]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [(signed char)14] [i_11] [i_11] [i_11])))))));
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (16450160109156868170ULL)))));
        var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_28 [i_11] [i_11] [12ULL] [i_11])))))) ? ((~((~(var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_11] [i_11] [5ULL])) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) min(((short)18062), ((short)-18062)))))))));
    }
    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_27 = ((/* implicit */short) (-(((var_0) ? (((/* implicit */int) arr_26 [i_12] [i_12] [i_12])) : (((/* implicit */int) (signed char)127))))));
        arr_39 [i_12] [i_12] = ((_Bool) arr_9 [i_12] [i_12] [i_12]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) 3343884661U)) : (4362862139015168LL)))));
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
                {
                    {
                        arr_50 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned char) ((signed char) arr_3 [i_15] [i_14]));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-57))))) & (((((/* implicit */_Bool) arr_9 [18] [i_13] [i_13])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13] [10U])))))));
    }
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (~(min((((/* implicit */int) ((unsigned short) arr_53 [i_17] [17U]))), ((~(((/* implicit */int) var_0)))))))))));
        var_32 = max(((~(min((var_4), (((/* implicit */int) arr_52 [i_17] [i_17])))))), (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) arr_52 [i_17] [i_17])))));
        /* LoopSeq 2 */
        for (short i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (arr_52 [i_17] [i_17])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17] [i_18]))) + (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) != (((/* implicit */int) (signed char)127)))))))), (((/* implicit */long long int) ((short) (~(((/* implicit */int) var_1))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        arr_60 [i_18] [i_20] [i_20] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_57 [i_17])) / (arr_59 [i_20])))));
                        arr_61 [i_20] [i_18] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_59 [i_20])) ? (1996583964552683429ULL) : (((/* implicit */unsigned long long int) arr_59 [i_20]))))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_51 [i_17] [i_17]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_17] [i_18]))))))));
        }
        /* vectorizable */
        for (short i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
        {
            var_35 ^= ((/* implicit */short) ((arr_58 [i_17] [i_21] [i_21]) ? (((/* implicit */int) (short)-28706)) : (((/* implicit */int) var_1))));
            var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) 548419465)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)127)))) : (((unsigned long long int) (unsigned short)52655))));
            var_37 = ((/* implicit */_Bool) var_8);
        }
    }
    var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
    var_39 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (3534849272U))))))));
}
