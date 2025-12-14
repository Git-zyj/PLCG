/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185788
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)24055)) + (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) max(((+(arr_1 [i_0 - 1] [i_0]))), (((/* implicit */unsigned int) ((unsigned char) arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))));
                    var_18 = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) var_15)), (((((/* implicit */int) arr_2 [i_0] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])))))));
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_19 ^= ((((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1115531170562458747LL)))) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((_Bool) var_11)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) var_0)), (var_4)))) ? (((/* implicit */int) max((arr_2 [i_0] [i_3]), (((/* implicit */unsigned char) (signed char)112))))) : (((/* implicit */int) var_14)))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_18 [(unsigned char)13] [i_0] = arr_0 [i_0 - 1];
                        var_22 = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned short)0))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_10 [i_1])) - (var_11)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_4 [i_3] [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) arr_14 [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_21 [(unsigned char)6] [i_0] [i_3] [i_0] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((var_2) ^ (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_6])), (492613869U)))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 7282548015789110170LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (13784240782481334739ULL))))))));
                            var_25 += ((/* implicit */unsigned long long int) (!(((_Bool) var_2))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned short) var_10);
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_3 [i_1] [i_5] [(_Bool)1]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1])) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_14 [i_0 - 1])))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_0 + 1] [5LL] [i_0 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_3] [i_5] [i_3])) : (((/* implicit */int) var_7)))))))));
                            var_28 = ((/* implicit */short) ((min((max((((/* implicit */unsigned int) var_16)), (var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 68719476608LL))))))));
                            var_29 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) min((var_6), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])))))))) : (((/* implicit */int) min(((_Bool)1), (arr_5 [i_8] [i_1] [i_0]))))));
                        }
                        var_30 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_22 [(_Bool)1] [i_5] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))) ^ ((((_Bool)1) ? (max((((/* implicit */unsigned int) var_14)), (var_8))) : (min((((/* implicit */unsigned int) var_5)), (arr_8 [14U] [(unsigned char)18] [i_3] [i_3])))))));
                    }
                    var_31 = ((((/* implicit */long long int) (-(arr_26 [8ULL] [i_1] [(_Bool)1])))) + (max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (((447546649221118463LL) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [5]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */short) max((var_32), (var_5)));
                                arr_36 [i_0] [i_1] [i_3] [i_9] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_16 [i_0] [i_1] [i_9 + 1])))), (((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))));
                                var_33 = ((/* implicit */unsigned int) min((var_33), (var_2)));
                                arr_37 [2ULL] [2ULL] [(short)19] [i_9] [i_0] [i_10] = (signed char)-43;
                                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_9 - 1] [i_1] [i_3] [i_9 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_1] [i_10] [i_10] [i_10] [i_1])) && (((/* implicit */_Bool) var_6))))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
                {
                    arr_42 [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) ((long long int) max((var_8), (((/* implicit */unsigned int) arr_28 [i_0 - 1] [i_1] [(_Bool)1] [(short)16] [i_0])))));
                    arr_43 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ? (((2233432227U) << (((((/* implicit */int) var_16)) - (244))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_41 [i_0] [(short)19]))))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0])))));
                    var_35 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (((!(var_15))) ? (((((((/* implicit */int) arr_27 [i_11] [(unsigned short)8] [i_11] [i_11 - 1] [(unsigned short)8] [i_11] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_15 [10LL] [i_11 - 1] [i_0] [(_Bool)1] [5LL])) - (33))))) : (((/* implicit */int) arr_17 [i_0] [i_0]))))) : (((/* implicit */_Bool) (((!(var_15))) ? (((((((((/* implicit */int) arr_27 [i_11] [(unsigned short)8] [i_11] [i_11 - 1] [(unsigned short)8] [i_11] [i_0])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_15 [10LL] [i_11 - 1] [i_0] [(_Bool)1] [5LL])) - (33))) + (46))) - (30))))) : (((/* implicit */int) arr_17 [i_0] [i_0])))));
                }
                /* vectorizable */
                for (long long int i_12 = 3; i_12 < 19; i_12 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) (_Bool)0))));
                    arr_47 [i_0] [i_0] [i_12] = arr_17 [i_12] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((signed char) ((long long int) arr_5 [i_0 + 1] [i_1] [i_14])));
                                var_38 -= ((/* implicit */unsigned long long int) (short)-5431);
                            }
                        } 
                    } 
                }
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [1LL] [i_1]))) : (3123078943657190656ULL)))));
                var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_26 [3ULL] [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 1])))))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_6))));
}
