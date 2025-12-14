/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158266
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_0))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0])), (arr_0 [9LL]))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_8))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_9 [i_0]))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), ((-(var_1))))))))));
                        var_23 = ((/* implicit */int) min((var_23), (max(((-((-(var_16))))), (max((max((((/* implicit */int) var_6)), (var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2 - 1]))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 1])))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2 + 1] [i_2]))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_6))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2 - 1] [i_4])), (var_3))), (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (var_16))))))))))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_0))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((/* implicit */int) var_0)))))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_7)))))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_17))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_4 [i_0] [i_0] [i_2]))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_2))));
                        }
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_16 [10U] [10U] [10U] [i_0] [i_0] [i_0]))))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (short i_10 = 1; i_10 < 20; i_10 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_8)), (min((min((var_13), (((/* implicit */short) var_17)))), (max((((/* implicit */short) (signed char)89)), ((short)29835))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 2) 
                        {
                            var_38 = ((/* implicit */_Bool) min((var_38), ((!(((/* implicit */_Bool) var_6))))));
                            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_24 [i_10]))));
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-((-(((/* implicit */int) var_6)))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (var_11))))));
                        }
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_33 [i_8] [i_9] [i_9] [i_11]))));
                        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) max(((~((~(((/* implicit */int) arr_25 [1] [i_9] [i_9])))))), (((/* implicit */int) max((max((((/* implicit */unsigned char) arr_20 [i_8])), (arr_24 [i_8]))), (((/* implicit */unsigned char) arr_22 [i_9] [i_9]))))))))));
                    }
                    for (int i_14 = 1; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9)))))));
                        }
                        var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_41 [i_9])))))))));
                        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_12))));
                        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) arr_22 [i_9] [i_10]))));
                    }
                    for (int i_16 = 1; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (+(max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) min((arr_24 [i_8]), (((/* implicit */unsigned char) var_9))))))))))));
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_9))))))))))));
                        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), ((~(arr_27 [i_8]))))))))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) max((max((max((((/* implicit */long long int) var_13)), (var_1))), (((/* implicit */long long int) arr_41 [i_8])))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [(short)18] [i_9] [i_10 - 1]))))), (arr_24 [i_8])))))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_55 = ((/* implicit */unsigned long long int) min((var_55), (var_7)));
                                var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
