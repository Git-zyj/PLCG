/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10131
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
    for (int i_0 = 4; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_4))));
            arr_6 [i_0 - 3] [(signed char)18] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_9 [i_0] [i_0 - 4] [i_0] = ((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 + 1]) + (arr_0 [i_0 - 3] [i_0 - 4])));
            var_18 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_2])))) ? (((/* implicit */int) arr_3 [i_2])) : (((int) (signed char)0))));
            var_19 *= ((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) + (((/* implicit */int) arr_3 [i_2]))))) - (((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned int) arr_5 [i_0])))));
            var_20 += ((((/* implicit */int) ((((/* implicit */unsigned long long int) 799477818)) != (240518168576ULL)))) << (((((/* implicit */_Bool) 377147721)) ? (((/* implicit */int) (_Bool)1)) : (15))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((arr_2 [i_0 - 3]) != (arr_2 [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
                            var_22 = ((/* implicit */signed char) (~(arr_16 [i_0 - 4])));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_6 + 1]))));
            arr_23 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)0)) ? (2101604182) : (997784158));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 24; i_8 += 4) 
                {
                    {
                        var_24 += ((/* implicit */signed char) var_15);
                        var_25 &= ((/* implicit */_Bool) var_5);
                    }
                } 
            } 
            var_26 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 + 1]))) | (16329580111043673894ULL));
        }
        var_27 |= ((/* implicit */unsigned int) (~(arr_7 [i_0 + 1] [i_0 - 3])));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_28 = ((/* implicit */_Bool) (~(var_11)));
            var_29 = ((/* implicit */unsigned int) ((arr_16 [i_0 - 1]) - (arr_16 [i_0 - 4])));
            var_30 = ((((arr_13 [(_Bool)0] [(unsigned short)12] [i_0 - 1] [i_0]) + (2147483647))) >> (((((/* implicit */int) var_2)) + (16))));
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 24; i_10 += 4) /* same iter space */
    {
        var_31 -= ((((/* implicit */_Bool) arr_10 [i_10 - 4] [i_10])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (arr_10 [i_10] [4ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_10 - 2])) ? (((/* implicit */int) arr_28 [i_10])) : (((/* implicit */int) (unsigned char)0))))));
        /* LoopSeq 3 */
        for (signed char i_11 = 1; i_11 < 24; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_12 = 4; i_12 < 22; i_12 += 3) 
            {
                for (unsigned char i_13 = 4; i_13 < 23; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            arr_45 [i_10] [i_14] [i_12] [i_12] [i_14 + 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_10 - 1])) - (((/* implicit */int) var_1))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */int) arr_28 [i_10]);
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(arr_15 [i_11 + 1] [i_11 - 1] [i_11 + 1]))))));
        }
        for (unsigned int i_15 = 1; i_15 < 24; i_15 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) > (arr_7 [i_10] [i_15 + 1]))))));
            var_36 = ((/* implicit */signed char) arr_2 [23]);
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (int i_17 = 1; i_17 < 21; i_17 += 3) 
                {
                    {
                        arr_55 [i_10] [i_15 - 1] [i_16] [i_17 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_10 + 1] [i_15 - 1] [i_15 + 1] [i_17 + 4]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_15 - 1] [i_15 - 1])) - (((/* implicit */int) arr_37 [i_15] [i_15 - 1]))));
                        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1776885775)) ? (arr_7 [i_10] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))))));
                        var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((6544888788107713676ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [5]))))))));
                    }
                } 
            } 
            var_40 = arr_38 [i_10 - 2];
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) var_4))));
            arr_60 [i_10] [i_18] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_37 [i_10] [i_18]))))));
        }
    }
    for (int i_19 = 4; i_19 < 24; i_19 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [14ULL])) + (2147483647))) << (((((((/* implicit */_Bool) min((11901855285601837940ULL), (((/* implicit */unsigned long long int) 20006526U))))) ? ((~(4294836224ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (18446744069414715391ULL)))));
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_19] [i_19 - 3] [i_19] [i_19] [i_19 - 4] [i_19])))) > (((((/* implicit */int) arr_12 [(unsigned char)6] [i_19 - 2] [i_19 - 1] [i_19] [i_19] [i_19 - 2])) / (((/* implicit */int) arr_12 [i_19 - 4] [i_19 - 2] [i_19] [i_19 - 1] [i_19] [i_19])))))))));
        var_44 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_19]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_20 = 2; i_20 < 23; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) 15);
                        arr_71 [i_19] [i_20] [i_21] = ((/* implicit */unsigned short) arr_44 [i_19] [i_20] [i_21] [i_22]);
                        var_46 = ((/* implicit */_Bool) ((signed char) arr_49 [i_19] [i_20] [i_21]));
                        arr_72 [i_22] [17ULL] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)31));
                    }
                } 
            } 
            arr_73 [i_20] = ((/* implicit */signed char) ((((7413760615202831760ULL) >> (((var_5) - (3417207675U))))) >= (((/* implicit */unsigned long long int) arr_58 [i_19 - 4]))));
            var_47 |= ((/* implicit */signed char) ((arr_5 [i_20 - 1]) % (-136550664)));
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    {
                        arr_79 [i_19] [i_19] [i_19] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_33 [i_19]);
                        var_48 = ((/* implicit */signed char) arr_32 [i_19 - 4] [i_19 - 4]);
                    }
                } 
            } 
        }
    }
    var_49 = ((/* implicit */unsigned long long int) (signed char)23);
    var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((var_8) % (((/* implicit */unsigned long long int) ((unsigned int) var_10))))))));
    var_51 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
    var_52 &= ((/* implicit */int) var_15);
}
