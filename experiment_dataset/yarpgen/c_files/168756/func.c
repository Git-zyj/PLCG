/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168756
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
    var_20 = ((/* implicit */_Bool) 0ULL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) 2263398890U)) ? (var_10) : (((/* implicit */long long int) arr_0 [i_0] [(unsigned short)10])))) : (((/* implicit */long long int) min((arr_0 [i_0] [20U]), (arr_0 [i_0] [5U])))))))));
        var_22 = ((/* implicit */long long int) ((9102556091958160036ULL) >= (8796093014016ULL)));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_23 += (-(((/* implicit */int) ((((8796093014011ULL) <= (arr_7 [i_1] [i_1]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [14U])), (8796093014016ULL))))))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((+(arr_8 [i_1] [i_1] [i_1]))) ^ (arr_11 [12] [i_2]))))));
            }
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-1) <= (((/* implicit */int) (unsigned short)56635)))) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2))))) ? (((int) 4294967290U)) : ((-(((/* implicit */int) var_7)))))) : (((/* implicit */int) var_7))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 4; i_4 < 20; i_4 += 2) 
            {
                for (long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_26 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1464599539U)) ? (945848130U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [12LL])), (0))))))), (max((max((((/* implicit */unsigned long long int) arr_0 [i_2] [22LL])), (arr_7 [i_5 + 2] [7U]))), (((/* implicit */unsigned long long int) (+(0LL))))))));
                        var_27 = ((/* implicit */unsigned char) arr_18 [i_1] [i_2] [i_2] [(_Bool)1] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_28 -= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_5 [i_4 - 4])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_4 - 1])), ((unsigned short)808))))));
                            arr_21 [i_6] [i_4 - 2] [i_4] = ((/* implicit */_Bool) var_17);
                            var_29 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) min((-1867567888), (((/* implicit */int) arr_12 [i_1] [i_2] [19] [i_5 - 4])))))))), (((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (short)25163)) - (25133)))))));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */long long int) (!((!((((-2147483647 - 1)) <= (961276069)))))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_35 [i_1] [2] [i_8] [i_8] [i_1] = (((~(((/* implicit */int) var_14)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_1] [(signed char)15])) && (((/* implicit */_Bool) var_11))))));
                            arr_36 [i_10] [i_8] [i_7] [i_8] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49033))))) ? (((/* implicit */unsigned long long int) arr_34 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) : (3134075694649040240ULL));
                        }
                    } 
                } 
            } 
            arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4708))) / (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_14))))) : (arr_17 [i_1] [i_7])));
            var_31 *= ((/* implicit */unsigned short) (short)11195);
        }
        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [(unsigned char)14] [(unsigned char)14] [10] = ((/* implicit */int) var_0);
                var_32 = ((/* implicit */signed char) (-(8LL)));
            }
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
            {
                arr_47 [i_1] [i_11] [6LL] = ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 20; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_33 = (-2147483647 - 1);
                            arr_55 [i_1] [i_11] [i_1] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)40)) : (arr_38 [(unsigned short)13]))) : ((+(-1045710025)))));
                            var_34 = (unsigned short)37782;
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
            {
                var_35 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_1] [i_11] [i_1] [1]))) + (var_18)))) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) min((max((arr_32 [i_1] [i_11] [i_16]), (((/* implicit */unsigned int) (unsigned short)65517)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) ((arr_54 [18] [i_16] [i_11] [i_11] [i_11] [i_16] [(unsigned short)11]) / (((/* implicit */int) arr_50 [i_1] [i_11]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_4 [5U] [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_16 [6] [1ULL] [8] [17ULL])))))));
                arr_58 [i_1] [(unsigned char)1] [i_1] [(unsigned char)1] = ((/* implicit */unsigned char) ((((min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), ((-(var_12))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_12 [i_16] [i_11] [i_11] [i_1])) ? (((((/* implicit */int) arr_49 [i_16] [i_11] [i_11] [i_1])) * (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) max((var_5), (var_5)))))) + (18190)))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 19; i_17 += 3) 
                {
                    for (signed char i_18 = 4; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_36 *= ((/* implicit */unsigned char) (~(var_10)));
                            arr_63 [i_18] [i_16] [i_11] [i_1] = ((/* implicit */int) (((+(arr_20 [i_1] [i_1] [i_17 + 2] [i_18 + 1]))) == (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_50 [i_1] [(unsigned short)12])), (var_3)))))))));
                        }
                    } 
                } 
            }
            for (signed char i_19 = 1; i_19 < 19; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_38 *= ((/* implicit */unsigned int) ((((-672691787) / (134217712))) / ((-(-1810882989)))));
                        }
                    } 
                } 
                var_39 &= ((/* implicit */long long int) (-(0)));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    {
                        arr_78 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446735277616537593ULL)) || (((/* implicit */_Bool) arr_76 [i_1] [i_11] [4LL] [i_23])))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)28), (((/* implicit */unsigned char) var_4))))))))));
                        arr_79 [i_1] [i_22] = ((/* implicit */unsigned long long int) ((((arr_72 [i_1] [i_1] [i_22] [17LL] [i_23]) ? (((/* implicit */int) arr_72 [i_1] [i_1] [i_22] [i_23] [i_1])) : (((/* implicit */int) arr_72 [i_1] [i_11] [i_22] [i_23] [i_23])))) & (((/* implicit */int) max((arr_72 [i_1] [i_1] [i_22] [i_22] [(short)13]), (arr_72 [i_1] [i_1] [i_22] [i_1] [i_23]))))));
                        var_40 = ((/* implicit */long long int) 1380284735U);
                        /* LoopSeq 2 */
                        for (short i_24 = 1; i_24 < 19; i_24 += 3) 
                        {
                            arr_84 [i_11] [4LL] [i_23] [i_23] &= ((/* implicit */long long int) max((var_19), ((~(0)))));
                            arr_85 [i_23] [i_24 + 2] [i_22] [i_23] &= ((/* implicit */unsigned short) min((1167110605U), (((/* implicit */unsigned int) (unsigned short)25443))));
                            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 2103443606U)) || (((/* implicit */_Bool) (unsigned short)63))))), (var_19)))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)36))))), (max((-9LL), (((/* implicit */long long int) 2147483647)))))) : (((/* implicit */long long int) 177711986))));
                            var_42 = ((/* implicit */_Bool) ((int) (~(arr_56 [i_1] [i_24 - 1] [6LL]))));
                            arr_86 [i_22] [i_23] [19] [i_22] = ((/* implicit */_Bool) arr_59 [i_24] [i_24] [i_24 - 1]);
                        }
                        for (int i_25 = 0; i_25 < 21; i_25 += 3) 
                        {
                            var_43 ^= ((/* implicit */long long int) arr_56 [17] [17] [(signed char)2]);
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((min((arr_89 [i_1] [(signed char)7] [i_22]), (arr_89 [i_1] [i_23] [6LL]))) >= ((~(arr_89 [i_1] [i_11] [(signed char)1]))))))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_46 [i_1] [i_11] [(_Bool)0] [i_25]) <= (((/* implicit */long long int) ((/* implicit */int) var_14))))))) / (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) 5U)) : (-7064421118973281889LL)))))) != (max(((-(arr_60 [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */unsigned long long int) var_15)) & (arr_60 [i_1] [i_11] [10U] [i_11])))))));
                        }
                        arr_90 [7LL] [(short)10] [7LL] [i_22] = ((/* implicit */int) var_10);
                    }
                } 
            } 
        }
        arr_91 [i_1] = ((/* implicit */long long int) (+((~(((int) arr_8 [10LL] [i_1] [(_Bool)0]))))));
        arr_92 [i_1] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-30990)))), (1303486728)));
        var_46 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) == (18382295982006475609ULL)));
    }
    var_47 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) || (var_5)));
    var_48 = ((/* implicit */unsigned int) (+(6328248510716767116LL)));
    var_49 = ((/* implicit */_Bool) var_2);
}
