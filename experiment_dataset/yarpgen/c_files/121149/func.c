/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121149
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (unsigned char)250)))));
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_12 [i_2] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)193)), (((((((/* implicit */unsigned long long int) var_9)) < (0ULL))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19526))) <= (18446744073709551615ULL))))))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((~(((long long int) var_7)))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65535)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [(signed char)10] [i_6] [i_5] [i_1] [i_1]))));
                            var_14 = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
            } 
            arr_25 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) % (max((max((var_5), (((/* implicit */unsigned int) (signed char)-83)))), (((/* implicit */unsigned int) ((unsigned short) (signed char)17)))))));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                        {
                            arr_35 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (147970097U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))));
                            arr_36 [i_1] [i_4] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_8 - 1] [i_8] [i_8 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_9 [i_8 + 1] [(_Bool)1] [i_8 + 1]))))));
                            arr_37 [i_1] [i_4] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((signed char) (~((~(((/* implicit */int) arr_34 [11] [i_8] [11] [i_9] [i_9] [i_10])))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_18 [i_4]) : (((/* implicit */int) var_11)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_29 [i_11] [i_9] [(_Bool)1] [i_4] [(signed char)15] [i_1])) : (((/* implicit */int) arr_26 [i_4] [i_8] [i_8]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64319))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)115)), (var_2)))) ? (max((15034957245441932345ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_7))))));
                            arr_40 [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            arr_41 [i_11] [i_8] [i_1] [i_8] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (+((((_Bool)1) ? (10) : (((/* implicit */int) (unsigned char)7))))))), (2575246959U)));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                        {
                            arr_44 [(unsigned short)5] [i_4] [14ULL] [i_4] [i_8] [i_12] [i_12] = ((/* implicit */long long int) ((unsigned char) max((((((/* implicit */_Bool) arr_24 [1ULL] [i_4] [1ULL] [1ULL] [i_9] [(signed char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)12] [(signed char)12] [i_8]))) : (15034957245441932345ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))));
                            var_16 = ((/* implicit */short) arr_27 [i_12] [i_8] [i_4] [i_1]);
                            arr_45 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) 682136561);
                        }
                        var_17 = ((/* implicit */unsigned long long int) var_8);
                        arr_46 [i_1] [i_8] = ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            arr_49 [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))) ? (max((((((/* implicit */_Bool) arr_39 [i_4] [(unsigned short)17] [i_8] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_13] [i_8] [i_8 - 1] [i_9] [i_13] [i_1]))) : (arr_33 [i_4] [i_4] [i_4] [i_9] [i_13] [i_4] [i_13]))), (((/* implicit */unsigned long long int) min(((short)-14377), (((/* implicit */short) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)27)), ((unsigned short)7)))) - (-682136562))))));
                            arr_50 [i_8] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_4])) ? (max((((/* implicit */unsigned long long int) arr_17 [i_8 + 1] [5U] [i_8] [i_8])), (arr_33 [12LL] [12LL] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 1]))) : (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_4] [i_1] [i_9]))))) << (((arr_42 [i_8] [i_4]) - (1506440672)))))));
                            var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((arr_33 [i_1] [i_1] [1U] [1U] [i_13] [1U] [i_4]), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1675929677U)))))) : (max((var_2), (var_8))))), (var_8)));
                            arr_51 [i_1] [i_1] [16U] [i_8] [i_1] [i_13] [i_8] = ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) (signed char)-53)), (arr_33 [i_13] [i_1] [i_8] [i_8] [i_4] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) (unsigned char)151))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            var_19 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) arr_10 [(short)1] [i_1] [i_8 - 1])) : (((/* implicit */int) (signed char)-53))))) + (((((/* implicit */_Bool) ((signed char) 1523083205))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)235)), (arr_23 [(unsigned char)12] [i_9] [i_4] [i_8] [i_4] [i_1]))))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1] [(_Bool)1] [i_8] [i_9] [i_14]))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4277517597U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_14] [i_14] [i_8]))))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (signed char)119)))))))) ? (((((((/* implicit */_Bool) arr_21 [i_1] [i_4] [i_8] [i_9] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_9) : (((/* implicit */int) arr_31 [10LL] [i_8] [i_8] [i_8] [10LL]))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [(_Bool)1] [i_8] [(unsigned char)0] [i_8] [i_8 + 1])))))));
                        }
                    }
                } 
            } 
            arr_55 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_4] [i_4] [i_4])) * (((/* implicit */int) (signed char)120))));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 18; i_15 += 1) 
        {
            arr_60 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_15 + 1] [i_15 - 1]))) + (-9223372036854775807LL)));
            arr_61 [i_1] = ((/* implicit */unsigned short) -1LL);
            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (-1329738643))) & ((+(((/* implicit */int) var_11))))));
        }
        for (int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)252), (max(((unsigned short)65525), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))))));
            var_23 = ((/* implicit */unsigned char) ((var_2) < (max((((/* implicit */unsigned int) (_Bool)0)), (max((var_5), (((/* implicit */unsigned int) arr_19 [i_16] [i_16] [i_16] [15U]))))))));
        }
        arr_65 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_3))))) & (((-9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-17313))))))))));
        arr_66 [i_1] = ((/* implicit */short) ((unsigned char) 17282520294326815080ULL));
        arr_67 [18U] = ((/* implicit */unsigned long long int) (unsigned char)238);
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_71 [i_17] [i_17] = ((/* implicit */unsigned int) ((signed char) (-(arr_69 [i_17]))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))));
        arr_72 [i_17] = ((/* implicit */signed char) -9223372036854775789LL);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) arr_28 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
        var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (~(arr_18 [i_18])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)16))))) : (arr_53 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)33)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_24 [(short)7] [i_18] [i_18] [i_18] [i_18] [i_18])))))));
        arr_76 [i_18] = ((/* implicit */long long int) arr_62 [i_18]);
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 164934776U))));
    }
    var_28 = ((/* implicit */signed char) 9223372036854775807LL);
    var_29 = ((/* implicit */short) 8788385043392676570ULL);
}
