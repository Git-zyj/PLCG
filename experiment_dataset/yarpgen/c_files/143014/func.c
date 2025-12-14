/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143014
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
    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (signed char)-3))))) | (((/* implicit */int) max((var_5), (var_15))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_7) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) * (var_6)));
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))));
        }
        var_22 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46095))) / (arr_3 [i_0] [i_0] [i_0])));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
        {
            arr_10 [i_3] [8ULL] [i_3] = ((/* implicit */short) arr_0 [i_3]);
            arr_11 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned short)46093);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((arr_16 [i_2] [i_2] [i_4 + 1] [i_4 - 1]) << (((arr_21 [i_4] [i_4 - 1] [(short)2] [i_4] [i_4 + 1] [i_4 + 1]) - (2108361345106432293LL)))));
                            arr_22 [i_2] [12LL] [i_5] [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_4 + 1] [i_5] [i_6]))) / (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_21 [i_2] [i_2] [i_5] [i_6] [i_2] [i_7])))));
                        }
                    } 
                } 
            } 
            arr_23 [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned short)46093)) : (((/* implicit */int) (unsigned short)46090))))) ? (((((/* implicit */_Bool) arr_1 [i_4] [i_2])) ? (arr_21 [i_2] [i_2] [i_2] [i_4 + 1] [i_2] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19446))))) : (arr_12 [i_2])));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_24 = ((/* implicit */long long int) var_8);
                /* LoopSeq 1 */
                for (unsigned short i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    var_25 |= var_13;
                    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((int) arr_25 [i_9] [i_9] [i_9 - 1] [i_9 - 1])))));
                    arr_29 [i_2] [i_4] [i_8] [i_4] = ((/* implicit */int) arr_13 [i_2]);
                }
            }
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_10 + 1])) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_1))))));
                var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)77)) ? (arr_8 [i_4 + 1] [i_4 - 1]) : (((/* implicit */int) (unsigned short)19445))));
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 3; i_12 < 16; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) arr_28 [i_2] [i_12] [i_12] [14ULL]);
                            arr_42 [i_13] [i_11] [i_11] [i_12 - 1] [i_11] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned short)46093)), (arr_20 [i_13]))) / (max((((arr_30 [i_12] [i_12]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (arr_20 [i_11 + 1])))));
                        }
                    } 
                } 
            } 
            var_31 = ((arr_38 [i_2] [i_2] [i_11 + 1] [i_11]) - ((-((-(((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_11] [i_11])))))));
            arr_43 [i_2] [i_11] = ((/* implicit */int) ((unsigned char) arr_33 [i_11] [i_11]));
        }
        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
        {
            arr_48 [i_2] = ((/* implicit */short) ((arr_33 [i_2] [i_15 + 1]) >= ((+(arr_33 [i_2] [i_15])))));
            var_32 += arr_24 [i_2] [i_2];
            /* LoopSeq 3 */
            for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                arr_52 [i_2] [i_16] = ((/* implicit */signed char) 4105751877606288788LL);
                arr_53 [i_2] [i_2] = ((/* implicit */_Bool) arr_44 [i_2] [i_15] [i_16]);
                arr_54 [i_2] [i_15 - 1] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_15] [i_16])) ? (arr_17 [i_16] [i_16] [i_15 + 1] [i_15 + 1] [12LL] [i_15 + 1]) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_2] [i_16])) | (((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_17 [i_16] [i_16] [15ULL] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_2] [i_16]))) : (arr_35 [i_2] [i_15 + 1] [i_16]))) : (((/* implicit */long long int) max((arr_15 [i_2] [i_16]), (((/* implicit */int) arr_2 [i_2] [i_2])))))))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                var_33 = ((/* implicit */signed char) var_5);
                arr_59 [i_2] [(unsigned short)9] [i_17] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [4] [i_2]))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_32 [i_2] [i_2])))), (max((((/* implicit */unsigned long long int) arr_6 [i_2])), (arr_46 [i_2] [i_15] [i_17])))))));
            }
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                arr_63 [(unsigned short)1] [(unsigned short)1] [i_18] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5317793182411567762LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)17))))) ? (arr_17 [i_2] [i_2] [i_2] [i_15 + 1] [i_2] [i_18]) : (((arr_1 [i_18] [0ULL]) / (((/* implicit */long long int) arr_38 [i_2] [i_15] [i_18] [i_18])))))));
                var_34 = (unsigned short)19465;
                arr_64 [i_2] [i_15] [i_2] = ((/* implicit */unsigned short) -5317793182411567752LL);
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 16; i_20 += 1) 
                    {
                        {
                            var_35 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_1)), (arr_3 [i_18] [10ULL] [i_20]))) >> (((((((/* implicit */unsigned long long int) arr_61 [i_2] [i_2])) | (arr_36 [7ULL] [i_15]))) - (15839041753835335522ULL)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_15])) && (((/* implicit */_Bool) arr_30 [i_2] [i_2]))))), (5317793182411567749LL)))));
                            arr_70 [i_2] [i_20] [i_18] [i_19] [i_20] = ((/* implicit */unsigned long long int) 4105751877606288788LL);
                        }
                    } 
                } 
            }
        }
        arr_71 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_41 [i_2] [i_2] [i_2] [i_2] [2]))))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) 
    {
        arr_74 [i_21] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)5094)) && (((/* implicit */_Bool) arr_37 [i_21] [i_21] [i_21] [i_21]))))));
        var_36 = max((((/* implicit */unsigned long long int) max((arr_15 [i_21] [(_Bool)1]), (arr_15 [10ULL] [(unsigned short)12])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))));
    }
    var_37 = ((/* implicit */short) ((_Bool) var_17));
}
