/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10896
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) min((1768281030222786029ULL), (((/* implicit */unsigned long long int) (signed char)47))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [(signed char)15] [i_2] [i_1] = ((/* implicit */int) max((((short) var_9)), (((/* implicit */short) arr_1 [i_1 - 1]))));
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_1] [i_3]);
                        }
                    } 
                } 
                var_10 = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_1] [i_1 + 1] [i_0]) ? (((/* implicit */unsigned long long int) ((int) arr_3 [i_1 + 1]))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1])), (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [i_1 + 1])), (14627164313557471792ULL)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) (((+(((4077795110U) * (217172186U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_17 [i_4] = ((/* implicit */_Bool) var_4);
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_4 [i_4] [(_Bool)1])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (arr_13 [i_4]))))))))));
        arr_18 [i_4] = ((/* implicit */int) arr_1 [i_4]);
        arr_19 [(signed char)9] = arr_3 [i_4];
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 11; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) ((arr_1 [i_5 + 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_1)))) & (arr_10 [i_5 + 1] [(_Bool)1] [i_5] [i_5] [i_5])));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_0 [(_Bool)0] [i_5 + 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 1; i_7 < 8; i_7 += 2) 
            {
                var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7 + 3] [i_6] [i_5] [i_5] [i_5])))))));
                arr_29 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_5] [i_6] [i_7 + 2] [i_5 + 1] [15ULL]) : (arr_10 [i_5 + 1] [i_5 + 1] [i_7 - 1] [i_5 - 1] [i_7 - 1])));
            }
            for (short i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                {
                    var_14 |= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_9] [i_9])) >= (((/* implicit */int) arr_2 [i_5 + 1]))));
                    var_15 = ((/* implicit */unsigned int) ((_Bool) 67100672));
                }
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_8 [i_10 - 1] [i_8 - 1] [i_6] [i_5 + 1]))));
                    /* LoopSeq 2 */
                    for (int i_11 = 3; i_11 < 9; i_11 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned int) (+(arr_10 [i_5 + 1] [i_6] [i_8] [i_10 - 1] [i_11])));
                        var_18 = ((_Bool) (_Bool)1);
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_33 [i_10] [i_10])))) ? ((+(((/* implicit */int) arr_36 [(unsigned char)4] [i_10 + 1] [i_8 + 1] [4] [3ULL] [3ULL])))) : (((/* implicit */int) arr_26 [i_5 - 1] [i_8 - 1])))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_34 [i_11] [i_10] [i_5 + 1] [i_5 + 1]))));
                        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                    }
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_8 + 2]))));
                        var_23 = ((/* implicit */unsigned long long int) var_9);
                    }
                    arr_47 [(_Bool)1] [i_6] [i_8] [i_6] [i_6] [i_5] = ((/* implicit */signed char) arr_25 [i_5 - 1]);
                }
                for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned char) arr_28 [i_8] [i_8 + 1])))));
                        var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) arr_4 [i_14 + 1] [i_6]))))));
                    }
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        arr_55 [i_5] [i_13 - 2] [i_8 + 1] [i_5 + 1] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483631)))))));
                        var_26 = ((/* implicit */unsigned int) arr_28 [i_5 - 1] [i_6]);
                        arr_56 [i_5] [i_6] [i_8] [i_13 + 1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (-1671095196)));
                    }
                    arr_57 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_13] [5U]))));
                    arr_58 [i_5] [i_8] [i_6] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_6] [i_5 + 1]))));
                }
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_48 [i_5 - 1] [i_8 + 1] [i_8 + 1] [i_5 + 1]))));
                arr_59 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_5] [i_8 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5])) ? (arr_46 [i_5] [i_8 - 1] [i_5] [i_5 + 1] [i_5] [i_5]) : (((/* implicit */int) var_0))));
            }
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            arr_62 [i_5] = ((/* implicit */short) arr_32 [i_5] [i_5] [i_16]);
            arr_63 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_5 + 1] [i_16]))));
            arr_64 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)-29345))));
        }
        for (int i_17 = 1; i_17 < 10; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_44 [i_5] [i_17 - 1] [i_18] [i_18] [i_19]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2ULL)) ? (-1668304348) : (-1671095191)))) : (arr_53 [i_17 + 2] [0U] [i_17 - 1] [i_5 - 1] [i_17] [i_17] [i_5 - 1])));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(arr_0 [i_17 - 1] [i_5 - 1]))))));
                        arr_75 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1537724103)) ? (var_8) : (((/* implicit */long long int) 4077795109U))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((var_8) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_68 [i_19] [i_18] [2])) : (var_8))) - (1345548621LL))))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (+(arr_25 [i_17 - 1]))))));
                    }
                } 
            } 
            arr_76 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
        }
    }
    for (unsigned int i_20 = 2; i_20 < 13; i_20 += 2) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((((/* implicit */long long int) ((max((-269095130), (((/* implicit */int) (_Bool)1)))) >= ((+(((/* implicit */int) arr_1 [i_20]))))))), (max((max((arr_0 [i_20] [i_20 + 2]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_7)))))))));
        arr_80 [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_20])) == (1668304353))) ? (((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_20]))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_1 [i_20 + 1]))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)0] [i_20 - 2]))))) : ((+(((/* implicit */int) arr_77 [i_20]))))));
    }
    for (int i_21 = 1; i_21 < 16; i_21 += 1) 
    {
        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_82 [(_Bool)0]) ? (((/* implicit */long long int) ((arr_82 [(short)6]) ? (var_7) : (((/* implicit */int) var_5))))) : (var_8)))) ? (min((((/* implicit */int) (_Bool)1)), ((+(1668304369))))) : (((/* implicit */int) arr_81 [(_Bool)1]))));
        var_34 = ((/* implicit */signed char) (-((+(var_8)))));
        var_35 &= ((/* implicit */_Bool) ((max(((-(((/* implicit */int) arr_82 [10U])))), (((/* implicit */int) arr_81 [(unsigned char)12])))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_82 [2]))) != (var_8))))));
    }
    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */unsigned long long int) 4077795109U)) & (179788019160596826ULL))))));
    var_37 = ((unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))));
}
