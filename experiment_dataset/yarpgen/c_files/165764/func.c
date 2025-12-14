/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165764
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 += ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((arr_0 [i_0]), ((short)15313)))) >> (((max((((/* implicit */unsigned long long int) (unsigned short)65527)), (var_10))) - (2416247814532033451ULL)))))));
            var_20 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_1]);
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((min(((unsigned short)65529), ((unsigned short)7355))), (((/* implicit */unsigned short) (!(var_9))))))) ? (((max((((/* implicit */unsigned long long int) var_12)), (var_10))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned char)183))))))))));
        }
        for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 4; i_3 < 13; i_3 += 1) 
            {
                arr_11 [i_0] [i_2] [i_2] [i_0] |= ((/* implicit */_Bool) ((min((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_14))))), ((~(((/* implicit */int) (short)15312)))))) | (arr_8 [i_2])));
                var_22 *= ((/* implicit */_Bool) var_15);
                var_23 = ((/* implicit */long long int) ((max((max((((/* implicit */int) var_17)), (arr_3 [i_3] [i_2] [i_0 - 2]))), ((~(((/* implicit */int) arr_9 [i_0] [i_3 - 2])))))) ^ ((~(((((/* implicit */_Bool) 320721591U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [(short)10] [i_2]))))))));
                arr_12 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (+(var_0)));
            }
            var_24 = ((/* implicit */unsigned int) var_8);
            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2] [i_0]))))) > (((((/* implicit */_Bool) var_16)) ? (1045902482U) : (((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 2]))))));
            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2] [i_0 - 1]))))), (arr_1 [i_0 - 2]))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) 2154902720U);
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_21 [i_4] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) max((min((arr_4 [i_0] [i_0 - 1] [i_4]), (arr_16 [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)13649)) : (((/* implicit */int) var_8))))))))));
                        }
                        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) var_6);
                            var_29 = ((/* implicit */unsigned char) ((((unsigned int) var_12)) >> (((((((((/* implicit */int) arr_17 [i_2 - 1] [i_0 - 1] [i_0] [i_0])) + (2147483647))) >> (((3974245704U) - (3974245699U))))) - (67108693)))));
                            var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((3312763732U) >> (((((/* implicit */int) var_2)) - (48772)))))) - (max((((/* implicit */unsigned long long int) var_5)), (arr_16 [i_0 - 2] [i_2])))));
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) (_Bool)1)))))) : (min((((long long int) var_5)), (((/* implicit */long long int) ((arr_18 [i_0] [i_2] [i_4]) > (((/* implicit */int) var_2)))))))));
                        }
                    }
                } 
            } 
        }
        arr_24 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (((unsigned int) ((((/* implicit */_Bool) (short)15307)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        arr_32 [i_0] [i_10] [i_8] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_10] [i_8] [i_9] [7ULL])) ? (arr_28 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (min((arr_31 [i_10] [i_8] [i_9]), (((/* implicit */unsigned int) (unsigned short)3543)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)21)), ((short)3056))))))), (((/* implicit */unsigned int) var_2))));
                        arr_33 [i_10 - 3] [i_9] [i_10] [i_10] [i_0] [i_0 - 2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(arr_1 [i_0])))), (31ULL)))) ? ((~(((long long int) arr_23 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 + 1])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (((arr_22 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10 + 1] [i_8])))))))));
                    }
                    var_32 = ((/* implicit */short) arr_2 [i_9] [i_0]);
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_33 *= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [i_8])))) ^ (((/* implicit */int) min((arr_29 [i_12]), (((/* implicit */short) arr_15 [i_0] [i_8] [i_9] [i_11] [i_0]))))))), (((/* implicit */int) var_11))));
                                arr_40 [i_0] [i_8] [i_9] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                arr_41 [(_Bool)1] [i_0 - 1] [i_8] [i_9] [i_9] [i_9] [(_Bool)1] = ((/* implicit */_Bool) 352319031U);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (min((arr_16 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((+(15734958176592333229ULL)))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned short)5328), ((unsigned short)38086)))), (((var_7) ? (3974245697U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))))))));
}
