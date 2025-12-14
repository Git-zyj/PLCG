/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188176
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) 1219440981);
                        arr_11 [i_3 + 1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_19);
                    }
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1219440980)))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned long long int) ((var_8) <= (arr_4 [i_0 - 1] [(unsigned short)4])))))));
                    }
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) 1051504243)), (2063028395U)))))) ? (max((((/* implicit */unsigned int) 1219440981)), (2525938599U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) (unsigned short)51014)) : ((-(((/* implicit */int) arr_5 [i_5])))))))));
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            {
                                arr_25 [1U] [i_6] [1U] [4U] [i_6] [i_1] = ((((/* implicit */_Bool) (((+(arr_0 [i_2]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)60040)))))))) ? (((unsigned int) ((arr_5 [i_7]) ? (1219440972) : (((/* implicit */int) (unsigned short)51018))))) : (4294967279U));
                                arr_26 [i_1] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) 710341995);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_17 [i_0 - 2] [i_1 + 3] [i_1 + 3]))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(min((arr_29 [i_0] [i_1 + 2] [i_2] [i_2] [i_9]), (arr_29 [i_1] [i_8] [i_2] [i_1] [(unsigned short)6]))))))));
                                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [3LL] [i_0 + 2])))))) ? (1457169374) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57902))))), (-710342008)))));
                                var_26 = 2244622923U;
                            }
                        } 
                    } 
                    arr_32 [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)51014))) ? (((((/* implicit */_Bool) arr_6 [8ULL] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)14506)) : (((/* implicit */int) arr_30 [i_0] [i_1 + 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))), ((((~(var_16))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [1U] [(unsigned short)5] [i_0 + 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58576))))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((var_19), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) > (min((arr_10 [i_0] [i_0] [(unsigned short)6] [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_15))))))) : (710341986)));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_17)) : (var_18))), (var_10)))));
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        for (unsigned short i_11 = 2; i_11 < 12; i_11 += 3) 
        {
            {
                arr_37 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_8))) << (((max((((/* implicit */unsigned int) 2147483647)), (2792542001U))) - (2792541986U)))))) ? (((((/* implicit */_Bool) var_10)) ? ((~(4294967263U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)4214)), (((((/* implicit */_Bool) arr_34 [(unsigned short)5] [i_10])) ? (-710341994) : (arr_34 [i_10] [i_11 - 2])))))), ((-(var_10)))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        arr_43 [i_13 - 2] [i_12] [i_11] [5ULL] [i_12] [i_10] = (unsigned short)27393;
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_12 - 2] [i_12 + 4] [i_12 + 1])) ? (((/* implicit */int) arr_39 [i_12] [i_12 + 1] [i_12 + 2])) : (((/* implicit */int) arr_39 [i_12 + 2] [i_12 - 1] [i_12 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        arr_46 [i_12] = var_16;
                        var_32 |= ((/* implicit */unsigned short) ((8U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_12] [i_12 + 2] [i_11 - 1])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_12 + 3] [(unsigned short)10] [(unsigned short)4] [(unsigned short)4])))))));
                        arr_50 [i_12] [i_12 + 1] [9U] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (arr_44 [i_12 - 2] [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 1])));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 10; i_17 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) arr_56 [i_12]);
                                var_35 = (-(823034987));
                                arr_58 [i_10] [i_11] [i_12] [i_16] = min(((-(((unsigned int) arr_35 [i_10])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_12]))))));
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14522))) : (1981368430U)));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_12])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)57902)) : (((/* implicit */int) (unsigned short)14522))))) : (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_10] [i_10] [i_11] [i_11 + 1] [(unsigned short)9])))))))) : (min((((/* implicit */unsigned long long int) (~(3016252183U)))), (((unsigned long long int) 1278715115U))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) var_19);
}
