/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185222
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
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) : (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_15 = (unsigned char)95;
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_16 = min((((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1]))), (((/* implicit */long long int) ((short) 4163490132846749014LL))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_2 [i_0 - 1]) : (((/* implicit */int) var_8))))) * (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) * (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            var_17 = arr_4 [i_1];
        }
        var_18 = ((/* implicit */short) var_6);
    }
    for (signed char i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (~(((min((arr_1 [i_2]), (((/* implicit */long long int) var_1)))) & (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2] [(signed char)9]) : (((/* implicit */long long int) arr_3 [i_2]))))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_9 [3LL])))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (1682977589)))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)98)), (var_7)))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_19 [i_2] = ((/* implicit */unsigned int) -7755614721390966376LL);
                            var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)40652)))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)146)))) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)72)), (arr_18 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] [i_6])))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (short)-30281)))))) : (arr_5 [i_2 + 1] [i_3])))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-60)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-7755614721390966376LL))))) << (min((((/* implicit */unsigned long long int) arr_4 [i_4])), (min((((/* implicit */unsigned long long int) var_3)), (var_12)))))));
                            arr_24 [i_2] [i_2 - 1] [i_2 - 1] [i_3] [(unsigned char)3] [i_5] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44770))));
                            var_23 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2 + 1])) / (((/* implicit */int) var_11))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_8))))), (arr_14 [i_2 - 1] [i_2 - 1] [i_5] [i_3]))) : (((/* implicit */unsigned long long int) (((-(arr_11 [(unsigned char)7] [0ULL]))) / (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (1263201136313440766LL)))))));
                            arr_25 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_7] [i_4] [i_7] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) % ((~(((/* implicit */int) arr_17 [i_5] [7U] [i_4] [i_5] [i_2 - 1] [i_5] [i_7]))))));
                            arr_26 [i_2] = ((((arr_3 [i_2 - 1]) == ((-(((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_5] [i_5] [i_3] [i_7])))))) && (((/* implicit */_Bool) var_4)));
                        }
                        for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
                        {
                            var_24 = (+(((long long int) ((((/* implicit */_Bool) (unsigned char)39)) ? (var_10) : (((/* implicit */unsigned int) -1682977589))))));
                            arr_29 [i_2] [i_2] = ((/* implicit */unsigned int) var_1);
                            arr_30 [i_8] [i_8 + 1] [i_5] [i_2] [i_3] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) var_7);
                        }
                        arr_31 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) var_6);
                        arr_32 [i_5] [i_2] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_0))))));
                        var_25 &= ((/* implicit */short) var_2);
                    }
                } 
            } 
            arr_33 [i_2] [i_2] = ((/* implicit */signed char) ((((((int) var_10)) + (min((var_2), (((/* implicit */int) arr_22 [i_2] [i_2] [i_2 - 2] [i_2] [i_2])))))) <= ((~(((/* implicit */int) var_0))))));
        }
        for (unsigned short i_9 = 2; i_9 < 8; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                arr_40 [i_2] [i_9] [i_2] [i_9 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_3)), (var_0)))), ((+(-7755614721390966376LL)))))));
            }
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_43 [i_2])) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))), (((/* implicit */unsigned int) (unsigned char)109))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_11]))))) % (-9000139882249672046LL)))) ? (min((((arr_14 [i_2 + 1] [i_2 + 1] [i_11] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))))), (((/* implicit */unsigned long long int) ((var_10) ^ (var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                        var_29 = ((/* implicit */signed char) ((int) arr_21 [i_12 + 1] [i_11] [i_9] [i_2]));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 8; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                {
                    var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) (~(((/* implicit */int) (unsigned char)107)))))), (min((((/* implicit */long long int) arr_37 [i_2] [i_2] [i_13 - 2] [i_13])), (arr_34 [i_2] [i_13])))));
                    arr_50 [i_2] [i_13 + 2] [i_13 - 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)39))))) == (var_9))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 3) 
    {
        var_31 -= ((/* implicit */signed char) ((arr_54 [6U]) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (long long int i_16 = 2; i_16 < 9; i_16 += 2) 
        {
            for (unsigned char i_17 = 3; i_17 < 11; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 4; i_18 < 11; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            {
                                var_32 = 8854641177296862697LL;
                                var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_59 [i_15 + 2])) : (((/* implicit */int) (_Bool)1))));
                                var_34 = (-(((var_10) << (((var_5) + (1082621837262800073LL))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_63 [i_15 + 1])) : (((/* implicit */int) arr_63 [i_15 - 2]))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_15] [i_16])) || (((/* implicit */_Bool) arr_56 [i_15] [i_17 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 3; i_20 < 10; i_20 += 2) 
                    {
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            {
                                arr_71 [i_15] [i_16 - 2] [i_17 - 1] [i_20] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)13768))));
                                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_16 + 1] [i_15] [6] [i_17 - 2] [i_20 + 1])) ? (arr_56 [i_15 + 2] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12695)))));
                                var_38 = ((/* implicit */int) (-(var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_39 = ((/* implicit */short) var_2);
}
