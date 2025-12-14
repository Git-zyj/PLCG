/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13911
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
    var_11 = ((/* implicit */unsigned char) (_Bool)1);
    var_12 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (min((var_10), (var_5))) : ((+(var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) + ((+(((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [22])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))))))));
                var_13 = ((int) (signed char)0);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                            arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_5 [i_0])) : (arr_3 [i_2 + 1])))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (min((278320444), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (arr_8 [(_Bool)1] [5] [i_1]) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */unsigned long long int) (-2147483647 - 1))) ^ (54043195528445952ULL))));
                            var_15 = ((((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_1] [i_1])))) / (((((/* implicit */_Bool) -1459831399)) ? (1138684594) : (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (_Bool)1)));
                            arr_13 [i_0 + 2] [i_1] [i_2 + 1] [i_1] = ((/* implicit */signed char) min(((-(((unsigned long long int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) || (((/* implicit */_Bool) arr_5 [i_0 - 1])))))));
                            var_16 = arr_3 [i_3];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    arr_16 [i_0 - 2] [i_1] [i_4 - 2] [i_1] = ((int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [12LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_1]))));
                    var_17 = ((/* implicit */int) arr_3 [i_0 - 1]);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((arr_15 [i_4 + 2] [i_4 + 2] [i_0] [i_0 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 3; i_8 < 10; i_8 += 2) 
                    {
                        var_20 = arr_9 [(signed char)15] [i_6 + 2] [i_7] [i_5];
                        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_14 [19LL] [i_8] [i_8] [i_5 - 1]), (((/* implicit */unsigned long long int) (signed char)0))))))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_26 [i_5] [i_6 - 1] [i_7]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_35 [i_10] [i_9 + 2] [i_10] [i_7] [i_10] [i_6 + 2] [i_5] = ((/* implicit */_Bool) var_1);
                                var_23 = ((/* implicit */int) (_Bool)1);
                                var_24 = (+(((/* implicit */int) arr_28 [(unsigned char)2] [(_Bool)1] [i_9 + 3] [i_9] [i_9 - 1] [i_5])));
                                var_25 = arr_8 [17] [18] [i_10];
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_6 + 2] [i_6 - 1] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 1] [i_5 + 1] [i_5])) : (((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 1] [i_5 + 2] [1])))) > (((/* implicit */int) arr_27 [i_6 + 2] [i_6 - 1] [i_5 + 1] [(_Bool)1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            var_27 -= (-(((/* implicit */int) ((unsigned char) min((var_8), (((/* implicit */unsigned long long int) 165598716)))))));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_28 [i_11] [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5])) : (((/* implicit */int) var_9)))), (((((/* implicit */int) (_Bool)1)) & (arr_26 [i_11] [i_11] [i_5])))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((arr_7 [i_5 - 1] [i_11]) + (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_11] [i_5] [i_5] [i_11] [i_11])) % (arr_26 [(_Bool)1] [i_5] [i_11])))))))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_5] [i_12])) ? (arr_14 [i_5 + 2] [i_5] [i_5 + 1] [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_30 = arr_11 [i_5];
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
        {
            arr_43 [i_5 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_5 - 2])))) ^ (max((((/* implicit */long long int) (_Bool)0)), (arr_20 [i_5 + 1])))));
            arr_44 [i_5] = ((/* implicit */_Bool) arr_38 [i_13]);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (-1029777384)));
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (96212746))))));
        }
        arr_45 [i_5 + 1] = arr_21 [i_5 - 1];
    }
    for (int i_14 = 2; i_14 < 10; i_14 += 2) /* same iter space */
    {
        arr_49 [i_14] = ((signed char) ((_Bool) ((((/* implicit */int) arr_36 [i_14] [i_14 - 1] [(_Bool)1])) >= (((/* implicit */int) (unsigned char)0)))));
        var_33 = ((/* implicit */signed char) (-(1023)));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_14] [i_14])) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (2147483635))))));
    }
}
