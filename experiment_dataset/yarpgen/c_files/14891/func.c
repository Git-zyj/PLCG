/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14891
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
    var_12 = 629237848887092498LL;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */_Bool) ((short) -1180039228));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (var_1)))) != (((/* implicit */int) ((unsigned short) var_8)))));
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 3]))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)59155)) : (arr_11 [i_1] [i_3] [i_2] [i_1] [i_1])));
                            var_16 = ((_Bool) arr_12 [i_1] [i_1] [(signed char)7] [i_1]);
                            var_17 = ((/* implicit */long long int) ((_Bool) arr_15 [10LL] [i_1 + 2] [i_1 + 1] [i_1] [(_Bool)1]));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21570)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 4) /* same iter space */
        {
            arr_18 [i_0] [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) << ((+(((/* implicit */int) (_Bool)1))))));
            arr_19 [(signed char)13] [(signed char)13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_5] [i_5 + 3] [i_5 + 4] [i_5 + 4]))));
            arr_20 [9ULL] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_5 + 1]))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_5 + 2])) ^ (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) /* same iter space */
        {
            arr_23 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_12 [i_6] [i_0] [i_6] [i_6]));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8]))))) >> (((arr_11 [i_0] [i_9] [i_9 + 1] [i_7 - 1] [i_0]) - (620755740))))))));
                            arr_32 [i_0] [i_0] [i_9] [i_0] [1U] = ((/* implicit */unsigned int) arr_15 [i_9 - 1] [i_8] [i_0] [i_6] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    arr_35 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)0] = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_21 [i_0] [i_0])) >= (((/* implicit */int) var_7)))));
                    var_21 = ((/* implicit */long long int) (!((_Bool)1)));
                    var_22 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [3ULL] [(_Bool)0] [(unsigned char)7] = ((((/* implicit */_Bool) arr_21 [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_21 [i_7] [i_7 + 1])) : (((/* implicit */int) arr_21 [i_7] [i_7 + 2])));
                }
            }
        }
        for (int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            var_23 = (!(((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_34 [(unsigned char)12] [i_11] [i_11] [i_11])))));
            arr_39 [i_11] = var_10;
            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((var_0) || (var_5))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_4))) < (((/* implicit */int) (_Bool)1))));
        }
        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_5 [i_0])))))));
    }
    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        arr_44 [i_12] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((arr_7 [i_12] [(unsigned char)1] [i_12] [i_12]), (((/* implicit */unsigned short) arr_30 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))))) == (((/* implicit */int) min((max(((_Bool)1), (var_0))), (((_Bool) var_8)))))));
        arr_45 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_41 [i_12])), (arr_26 [i_12]))))) * (min((((/* implicit */unsigned int) min((arr_10 [11] [i_12] [i_12] [i_12]), (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12])))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_12] [i_12] [7ULL] [7ULL]))) : (var_2)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_26 = ((/* implicit */short) (~(((long long int) var_8))));
            var_27 += (+(((var_1) ? (var_2) : (var_9))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned int i_15 = 3; i_15 < 10; i_15 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_49 [i_16] [i_14] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15 - 1] [i_12]))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((signed char) var_9)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) ((unsigned char) arr_2 [i_15 + 1]));
                            arr_61 [(_Bool)1] [(unsigned short)5] [i_14] [i_14] [i_14] [i_12] [i_12] = ((/* implicit */int) ((unsigned long long int) arr_22 [10] [i_13] [10]));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                        {
                            var_31 -= ((/* implicit */short) ((var_5) ? (((/* implicit */int) ((_Bool) arr_33 [7ULL] [7ULL] [8LL]))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_12] [i_12] [3])))));
                            arr_66 [i_14] = ((/* implicit */long long int) var_2);
                        }
                        var_32 = (_Bool)1;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) 
                {
                    {
                        arr_73 [(_Bool)1] [(_Bool)1] [(_Bool)1] [1LL] [(unsigned char)9] [i_13] = ((/* implicit */short) (+(((/* implicit */int) arr_22 [i_20] [i_12] [i_12]))));
                        var_33 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned int) max((var_34), (var_2)));
                            var_35 = ((/* implicit */unsigned short) arr_28 [(unsigned char)5]);
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 2) 
        {
            arr_79 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_29 [i_22] [i_22] [i_12]), (((/* implicit */unsigned short) (_Bool)1))))) / (((/* implicit */int) ((arr_31 [i_22] [i_22] [i_22]) != (((/* implicit */unsigned long long int) arr_38 [i_12] [i_12] [i_12])))))))) ? (max((((((/* implicit */int) var_3)) | (((/* implicit */int) var_3)))), ((~(((/* implicit */int) var_11)))))) : (max((((/* implicit */int) min((arr_77 [i_12]), (arr_17 [i_12])))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
            var_36 = ((/* implicit */short) min((max(((_Bool)1), ((_Bool)1))), ((_Bool)1)));
        }
        for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            var_37 = ((/* implicit */unsigned long long int) arr_75 [i_12]);
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_27 [i_23] [12ULL] [i_12] [i_12]), (arr_27 [13U] [i_12] [i_12] [(unsigned short)1])))) ? (((((/* implicit */_Bool) arr_27 [i_12] [i_23] [i_12] [i_12])) ? (arr_12 [i_12] [i_23] [i_23] [i_23]) : (arr_12 [i_12] [i_23] [i_23] [i_23]))) : (((/* implicit */int) var_0))));
        }
        var_39 = ((/* implicit */signed char) (((!(arr_53 [i_12] [i_12] [i_12] [i_12]))) && (((/* implicit */_Bool) arr_28 [i_12]))));
    }
    var_40 = (_Bool)1;
}
