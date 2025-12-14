/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187929
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
    var_17 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12)))))) >> (((min((((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-26)))), (((((/* implicit */int) (signed char)55)) >> (((/* implicit */int) (_Bool)1)))))) + (148)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */long long int) min((((/* implicit */int) (signed char)-124)), ((~(arr_6 [i_0] [i_0] [i_0])))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))) ? (((long long int) (unsigned char)224)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)135))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = (i_4 % 2 == zero) ? (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((16U) << (((((/* implicit */int) arr_13 [i_4] [i_4] [i_4 + 2] [i_4] [i_1])) - (2236)))))))) : (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((16U) << (((((((/* implicit */int) arr_13 [i_4] [i_4] [i_4 + 2] [i_4] [i_1])) - (2236))) - (45160))))))));
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)54))))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7637061047271670625LL)) ? (((/* implicit */long long int) ((arr_3 [i_4 + 2] [i_1] [i_3 + 2]) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)130)))))))) : (var_10)));
                                arr_15 [i_3] [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((unsigned char) ((_Bool) 6449487483683864573ULL)));
                                var_23 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 3] [i_4 + 1])), (arr_13 [i_4] [i_1] [i_4 + 1] [i_4 + 1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */unsigned char) arr_7 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_25 -= ((/* implicit */long long int) var_6);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (unsigned char i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) arr_27 [i_8 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9]);
                            var_27 = ((/* implicit */long long int) min((((int) arr_27 [i_9 - 1] [i_6] [i_9 - 1] [i_8] [i_9])), (((/* implicit */int) (signed char)-113))));
                            arr_29 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_0);
                            arr_30 [i_8] [i_9 - 1] = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4))))), ((-(arr_27 [i_5] [i_6] [i_7] [i_8 - 3] [i_9])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_38 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_11]))))), (((/* implicit */unsigned int) (unsigned char)31)))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9204142750948186464LL)))) ? (((/* implicit */int) arr_25 [i_5] [i_6] [i_10])) : (((/* implicit */int) (unsigned char)31))))))));
                        var_29 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_34 [i_5])) ? (((/* implicit */int) arr_34 [i_6])) : (((/* implicit */int) (unsigned char)120)))) * (((/* implicit */int) arr_34 [i_5]))));
                        arr_39 [i_5] [i_10] = ((/* implicit */signed char) 8593125061634954776ULL);
                        var_30 = ((/* implicit */_Bool) max((var_30), (((((((/* implicit */_Bool) arr_16 [i_6] [i_11])) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_10])) : (((/* implicit */int) var_8)))) <= (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (unsigned short)41793))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_33 [i_5] [i_12 + 1] [i_12 - 1]), (((/* implicit */unsigned short) arr_40 [i_5] [i_5] [i_12 - 1]))))) & (((/* implicit */int) var_3))));
            var_32 = ((/* implicit */unsigned char) arr_25 [i_12] [i_12] [i_12 + 1]);
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)75))));
        arr_45 [i_13] = arr_0 [i_13];
    }
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_33 = ((/* implicit */long long int) ((unsigned char) var_4));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) 4294967295U))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_31 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1])), (arr_37 [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))), (((((/* implicit */_Bool) arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1])) ? (arr_3 [i_15] [i_15] [i_15 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126)))))));
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3584))) : (arr_8 [i_15] [i_15 - 1] [i_15 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (arr_17 [i_15 - 1]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (2718856019U))))))) : (2305843009213691904ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) var_3))), ((+(((/* implicit */int) var_14)))))))));
            var_38 = ((/* implicit */long long int) var_16);
            arr_53 [i_15] [i_16] = ((/* implicit */unsigned char) ((min((arr_0 [i_15 - 1]), (arr_0 [i_15 - 1]))) ? (((((/* implicit */int) arr_0 [i_15 - 1])) & (((/* implicit */int) var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_16])), ((unsigned char)109))))));
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                for (unsigned int i_18 = 3; i_18 < 17; i_18 += 1) 
                {
                    {
                        arr_58 [i_18] = ((/* implicit */_Bool) (+((+(var_5)))));
                        var_39 += ((/* implicit */_Bool) arr_23 [i_18] [i_17] [i_16] [i_15]);
                    }
                } 
            } 
        }
        arr_59 [i_15] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) >= (-3883931641948322428LL)))), (((((((/* implicit */_Bool) var_10)) ? (arr_11 [i_15] [i_15 - 1] [i_15] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41793))))) | (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_15 - 1] [i_15] [i_15 - 1])))))));
    }
}
