/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132141
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))) ? (((var_12) << (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) 545618266U)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_14 = ((/* implicit */unsigned int) ((unsigned short) var_10));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned int) max((min((((var_6) & (((/* implicit */unsigned long long int) 1391315599U)))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(3580769291U)))))))));
                arr_5 [3ULL] [i_1] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) ((var_8) <= (((unsigned long long int) (+(var_2))))));
        var_17 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_3))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_6 [i_2]))))) & (min((max((((/* implicit */unsigned int) var_0)), (545618293U))), ((+(3749349004U)))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((short) (_Bool)1))))) <= (min((((/* implicit */unsigned int) var_9)), (var_7))))))));
    }
    for (short i_3 = 4; i_3 < 17; i_3 += 1) 
    {
        var_20 += ((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3 - 4]))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 2]))) ^ (var_8))), (((/* implicit */unsigned long long int) arr_9 [i_3 + 3])))))))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned long long int) (short)-1);
        arr_12 [(signed char)16] |= ((/* implicit */short) var_10);
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_15 [i_4 - 1] = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_4)))));
            arr_16 [i_4 - 1] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((short) var_11)))))) * (((long long int) ((arr_10 [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_4] [i_4]))))))));
            var_23 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (370514364U)))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            arr_20 [i_4 - 2] = ((/* implicit */unsigned long long int) (signed char)15);
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_24 = var_6;
                var_25 |= ((/* implicit */short) var_9);
                arr_24 [i_4] = ((/* implicit */short) max((((unsigned short) var_7)), (min((((/* implicit */unsigned short) var_10)), (var_5)))));
            }
            var_26 = min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((min((16868186413666621112ULL), (arr_14 [i_4] [i_6] [i_4]))) - (16868186413666621107ULL)))))), (var_7));
            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_4 + 3])) : (((/* implicit */int) arr_11 [i_4 + 2])))))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                arr_29 [8ULL] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) min((var_12), (((/* implicit */unsigned long long int) var_4)))));
                var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_1)), (1588328042U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_4 + 3] [i_4 - 2] [i_4] [(signed char)3])))))) : ((+(arr_27 [i_4 + 1] [i_4 + 1] [i_6] [i_6])))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 3; i_9 < 20; i_9 += 3) 
                {
                    arr_33 [i_4] [i_4] [i_4] [(unsigned char)2] [i_4] &= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((unsigned int) ((((var_6) <= (((/* implicit */unsigned long long int) var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)52)), (var_1)))) : (((/* implicit */int) ((signed char) var_6))))))));
                    var_30 *= ((/* implicit */unsigned char) arr_27 [i_4] [i_6] [i_8] [i_9]);
                }
            }
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_10] [i_11])) ? (arr_34 [i_11] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) & (var_12)));
                        arr_41 [i_4] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_10))));
                    }
                } 
            } 
            arr_42 [i_4] [i_10] = ((/* implicit */unsigned int) var_4);
            arr_43 [i_4] [i_4] [i_10] = ((/* implicit */unsigned long long int) var_4);
            var_33 = ((/* implicit */int) (!(arr_13 [i_4 + 1] [i_4 + 2] [i_4 - 1])));
        }
        for (short i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
        {
            var_34 |= ((/* implicit */unsigned int) var_10);
            arr_48 [i_4] [i_13] [i_13] = var_5;
            var_35 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)19968))))));
            var_36 |= ((/* implicit */unsigned int) var_11);
        }
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
        {
            arr_52 [i_4] [8ULL] [i_4 + 2] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)-7)))))));
            arr_53 [i_4] [i_4] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4 - 2] [i_4 - 1] [i_4]))))) > (((unsigned long long int) arr_26 [i_4] [i_14] [i_14]))));
            arr_54 [i_14] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) arr_23 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 2])), (var_6)))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            var_37 -= ((/* implicit */short) (-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_61 [i_4 - 1] [i_14] [i_15] [i_16] [i_14])) : (((/* implicit */int) arr_61 [i_4 - 1] [i_14] [i_4 - 1] [i_16] [i_16]))))));
                            var_38 = (short)-1;
                        }
                        arr_63 [i_4] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) ((short) ((unsigned int) var_12)));
                    }
                } 
            } 
        }
        for (short i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
        {
            arr_68 [i_4 - 1] [i_18] [i_4] = ((/* implicit */int) (!(arr_64 [i_4] [i_18] [i_4 - 1])));
            /* LoopNest 3 */
            for (unsigned short i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                for (unsigned char i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    for (unsigned char i_21 = 1; i_21 < 22; i_21 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) max((arr_49 [i_4] [i_18]), (((/* implicit */unsigned short) arr_11 [i_4 + 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_4] [i_4] [22] [i_20] [(short)11]))))))) / (((/* implicit */int) arr_19 [i_4 + 2] [i_20])))))));
                            var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)79)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8603889183573768601ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))))));
                            arr_78 [i_4] [i_18] [i_21] [(short)13] [i_21] = ((/* implicit */short) var_7);
                            var_41 = ((/* implicit */unsigned short) ((unsigned char) var_7));
                            var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)11196))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_22 = 2; i_22 < 20; i_22 += 2) /* same iter space */
    {
        arr_81 [i_22 + 2] [i_22] = var_2;
        var_43 = arr_30 [i_22] [(unsigned short)10] [(unsigned short)10];
        var_44 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), (1546392896U)));
        var_45 = ((/* implicit */short) var_10);
    }
}
