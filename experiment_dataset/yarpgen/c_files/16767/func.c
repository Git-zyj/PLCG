/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16767
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
    var_15 |= ((/* implicit */signed char) var_14);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
    var_17 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_18 *= ((/* implicit */_Bool) var_3);
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)-56))))))));
                        var_19 = ((/* implicit */unsigned short) min(((((_Bool)0) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (~(min((((/* implicit */long long int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (var_8))));
                        arr_15 [6LL] [i_1] [i_1] [i_3] [i_1 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_8 [i_1]))))));
                    }
                } 
            } 
            arr_16 [i_1] = ((/* implicit */int) min((min((((/* implicit */long long int) 2003766647)), (arr_10 [9] [i_1 + 1] [i_1] [i_1 + 3] [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1 + 3] [i_1] [i_1 + 3] [i_1])))))));
        }
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            arr_19 [(signed char)3] [i_4] = ((/* implicit */_Bool) min(((+(-1LL))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned char)189))))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_2))));
                            arr_29 [i_0] [(short)1] [i_0] [i_0] [i_4] = ((/* implicit */long long int) (signed char)83);
                        }
                    } 
                } 
            } 
            arr_30 [i_4] [i_4] [i_4] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((unsigned short) var_6))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) : (var_13))))))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) min(((-(var_0))), (((/* implicit */int) ((short) var_3)))))) >= ((-(min((((/* implicit */long long int) var_5)), (0LL))))))))));
                            arr_40 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) % (-5896776118560411972LL)));
                            var_22 = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0]);
                            arr_41 [i_11] [i_11] [i_11] [i_11] [i_8] [i_0] = ((/* implicit */unsigned short) min((-2003766648), (((/* implicit */int) (short)-18))));
                            arr_42 [i_0] [i_11] [i_9] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */unsigned long long int) min((2003766647), ((+(min((0), (92366611)))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) arr_8 [(_Bool)1]))))) ? (min((arr_23 [(_Bool)1] [i_8] [i_0] [i_8] [i_8] [(short)6]), (-1))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-116)) == (((/* implicit */int) (signed char)-91)))))))) % (var_2)));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0])), (var_8)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (2315769150793047306ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_8] [6])))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)7998)) : (((/* implicit */int) (unsigned short)60747))))))) : (((arr_36 [i_0] [0LL] [i_0] [i_0]) ? (((/* implicit */long long int) ((arr_8 [2]) ? (arr_20 [i_0] [i_0] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [0ULL] [4U] [(unsigned short)6] [i_0])))))) : (((var_8) | (((/* implicit */long long int) 4294967268U))))))));
        }
        for (int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            arr_45 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)115))) >= (var_7)));
            arr_46 [(short)0] [i_12] [0ULL] = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_1 [i_12])), ((+(((/* implicit */int) arr_36 [i_0] [i_12] [i_12] [i_12]))))))));
            arr_47 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (-(arr_43 [i_0] [i_0] [i_12])));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((short) ((var_2) | (-1LL))));
                arr_50 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13])) ? (arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [(unsigned char)2]) : (arr_12 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13 - 2])));
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                var_26 ^= ((/* implicit */_Bool) (+(arr_49 [i_0] [i_12] [i_12] [i_14])));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 4; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_27 |= ((/* implicit */short) (-((+(arr_33 [i_0])))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_12] [i_16 - 4])) ? (((/* implicit */int) arr_2 [i_12] [i_16 + 1])) : (((/* implicit */int) arr_2 [i_12] [i_16 + 1]))));
                            var_29 = ((/* implicit */short) ((signed char) arr_28 [i_16 - 2] [i_16] [i_16 - 1] [i_15] [i_15]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_0))))));
                    arr_66 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)37))));
                    arr_67 [i_0] [i_0] [i_17] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6252)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_22 [i_0] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))));
                    arr_68 [i_12] [i_12] [i_17] [9ULL] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) % (3478645789457388969LL))) == (((((/* implicit */_Bool) arr_52 [i_0] [i_12] [i_0])) ? (var_7) : (((/* implicit */long long int) arr_62 [7U] [i_12] [i_17] [i_18]))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_71 [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                    arr_72 [i_19] [i_12] [i_12] [i_0] = ((/* implicit */long long int) ((signed char) ((long long int) (short)-1)));
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_31 [(signed char)11] [i_12] [i_17]))))));
                    var_32 = ((/* implicit */_Bool) 2147483644);
                    var_33 = ((/* implicit */unsigned int) (-(((unsigned long long int) 4294967295U))));
                }
                arr_73 [i_0] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_9);
                var_34 = (+(((int) ((unsigned int) var_2))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_76 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-116));
                var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_0] [i_12])) || (((/* implicit */_Bool) (unsigned short)22488))))), (min((((/* implicit */long long int) -714603388)), ((+(var_2)))))));
            }
        }
        arr_77 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [0ULL]), (63)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [(short)0] [6U] [i_0])) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) 14913238193811739485ULL)) ? (1U) : (((/* implicit */unsigned int) var_12))))))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        arr_81 [i_21] = ((/* implicit */unsigned int) (+((~((+(483244981)))))));
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            for (unsigned char i_23 = 1; i_23 < 11; i_23 += 4) 
            {
                for (short i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_89 [i_22] [i_23] [i_23 + 1] [i_23] [i_23 - 1] [i_23 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-55), (((/* implicit */signed char) arr_36 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1])))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_31 [i_23 - 1] [i_23 + 1] [i_23 - 1])))));
                        var_37 = ((/* implicit */short) ((min(((~(arr_0 [i_22]))), (((/* implicit */long long int) (unsigned char)238)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))))));
                        var_38 = min((min((((/* implicit */unsigned long long int) var_9)), (arr_37 [i_21] [i_23 - 1] [i_23 - 1] [5]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))))));
                        arr_90 [i_21] [(_Bool)1] [i_23] [i_24] = ((signed char) 6355718670353040594LL);
                        var_39 = ((/* implicit */signed char) 13609985978503918530ULL);
                    }
                } 
            } 
        } 
        arr_91 [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_2))))), (var_7))))));
        var_40 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_21] [i_21] [i_21] [i_21]))))), (var_8)))));
    }
}
