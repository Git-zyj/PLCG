/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174080
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max(((~(arr_1 [i_0 - 2]))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_5))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 2]))))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32764)) ? ((+((-2147483647 - 1)))) : (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) : (5088269836309815798ULL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_2 [i_0 + 2]), (var_11)))), ((-(((/* implicit */int) arr_5 [i_0 - 2]))))));
                    arr_10 [i_2] |= (~(((/* implicit */int) (!(((/* implicit */_Bool) 13358474237399735835ULL))))));
                    var_21 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_9)));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 2])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_8))) ? (((long long int) (~(((/* implicit */int) (short)-32755))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
        /* LoopSeq 1 */
        for (int i_4 = 4; i_4 < 13; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_15 [i_4 - 4] [i_4 - 1])))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_13 [i_4] [i_3] [i_3])), ((signed char)38)))) ? (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) var_1))))) ? (((unsigned int) arr_13 [(unsigned char)8] [i_4 - 4] [i_4 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (8719522008002361949ULL))) == (8719522008002361941ULL)))))));
            /* LoopSeq 2 */
            for (int i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))))), (var_9)))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (_Bool)0))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) (+(arr_20 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1])))) : (var_1)));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-5098898842485700187LL) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3])))))), (((((/* implicit */unsigned long long int) arr_16 [i_6 + 1] [i_4])) * (9727222065707189680ULL)))))) || (((/* implicit */_Bool) (~(var_15))))));
                    }
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        arr_29 [8] [i_4] [i_6] [i_6 + 1] [i_8] = ((/* implicit */unsigned long long int) arr_9 [i_5 + 1] [i_6] [i_8 - 1]);
                        var_30 = ((/* implicit */_Bool) 0ULL);
                        var_31 -= ((/* implicit */unsigned int) (-(-2364638326303325421LL)));
                    }
                }
                arr_30 [i_3] = ((/* implicit */unsigned int) (~(0ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_3] [i_5 - 1] [i_4 - 3]));
                        var_33 = ((/* implicit */long long int) (_Bool)1);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13608800318094452451ULL)) ? (var_15) : (((int) var_11))));
                        arr_36 [i_4] [i_5] [i_10] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)31))) ^ (((/* implicit */int) ((unsigned short) var_17)))));
                        var_35 = ((/* implicit */unsigned char) ((arr_27 [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_10 + 2]) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_27 [i_4 - 2] [i_4 - 4] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_10 + 1]))));
                    }
                    for (unsigned char i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        var_36 -= ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */int) arr_37 [i_5] [i_5 - 1] [i_9] [i_5 - 1] [i_11 + 2] [i_5 - 1] [i_11])) < (((/* implicit */int) arr_34 [12] [i_5 - 1] [i_5] [i_11 - 2] [i_11] [i_11] [i_11]))))), (((short) var_6))));
                        arr_39 [i_5] [i_5] [(signed char)6] = ((/* implicit */short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) | (var_7))))), (((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_4 - 3] [i_11 - 1] [(signed char)8])))));
                        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -873288049)) ? (((((/* implicit */_Bool) 1832316033)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [15]))))))));
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_16 [i_5] [i_5]), (((/* implicit */long long int) (signed char)30))))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3119671725041883701LL)) && (var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_31 [(signed char)13] [(signed char)13] [i_4] [i_9])) <= (4294967293U)))) == ((+(arr_1 [i_3])))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (max((var_0), (((/* implicit */int) (unsigned short)0)))))));
                    }
                    var_39 = ((/* implicit */unsigned int) (-(((arr_26 [i_4 - 2] [(signed char)11] [i_5 + 1] [i_5 + 1] [i_5 + 2]) * (((/* implicit */unsigned long long int) var_4))))));
                    var_40 = ((/* implicit */unsigned int) ((((min((var_10), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_4] [(signed char)5] [i_4] [i_9]))))))) + (9223372036854775807LL))) << (((max((2U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8298788068556908050LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) - (2U)))));
                    arr_40 [i_3] [(short)7] [i_4 - 1] [i_5 - 1] [(short)7] [5] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                    var_41 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 3] [0ULL])) * (((/* implicit */int) arr_7 [i_3] [i_4 - 3] [i_3] [i_5 + 1]))))) ? (((((/* implicit */_Bool) var_6)) ? (13358474237399735817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (short)(-32767 - 1))))))));
                }
                for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 3) 
                {
                    arr_44 [i_5] [i_5] [i_3] [i_3] = ((/* implicit */signed char) 18LL);
                    var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (-306177075589307518LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))));
                }
                arr_45 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_16);
                var_43 -= ((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_5 + 2]);
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) var_0))));
                var_45 += ((/* implicit */short) arr_28 [i_4 + 1] [i_4] [(unsigned char)1]);
                var_46 = ((-8913880075490175857LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))));
            }
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_32 [i_4] [i_4] [i_4 + 1] [i_4 - 4]), (arr_32 [i_4] [i_4] [i_4 - 1] [5LL])))) ? (arr_21 [i_3] [i_3] [i_4] [i_4]) : (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_4])) != (((/* implicit */int) (unsigned char)48))))), ((-(var_1)))))));
            var_48 = ((/* implicit */short) (~(((((/* implicit */_Bool) 288230376151711488ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : ((-(var_10)))))));
        }
        arr_48 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_32 [i_3] [i_3] [i_3] [i_3]) & (((/* implicit */unsigned long long int) 2U))))) ? (((/* implicit */int) ((unsigned short) (~(18158513697557840114ULL))))) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) (short)3647))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 4) 
                {
                    {
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (max((0), (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (2038190253) : (335092437)))))) : (((((/* implicit */_Bool) min((1110543572U), (((/* implicit */unsigned int) arr_34 [i_14] [i_15] [i_14] [i_15] [i_16] [i_15 - 1] [i_16]))))) ? (arr_16 [i_15] [i_15 + 2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
                        var_50 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)32754)) > (((/* implicit */int) (short)-18))))) > (((((/* implicit */_Bool) arr_23 [i_15] [i_15 + 1] [i_17] [(_Bool)1] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_23 [i_15] [i_15 - 1] [i_15 - 1] [(signed char)10] [i_16] [i_17] [i_17])) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) arr_49 [i_14])) : ((~(var_15)))));
        var_52 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_56 [(_Bool)1] [i_14] [i_14] [i_14] [(_Bool)1])), ((-(var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3U))))) : ((+(((/* implicit */int) ((_Bool) var_9)))))));
    }
    var_53 = ((/* implicit */short) (unsigned char)24);
}
