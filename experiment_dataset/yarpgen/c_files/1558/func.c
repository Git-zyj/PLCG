/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1558
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */int) min((var_0), (arr_1 [i_0])))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)128))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                        var_14 = ((/* implicit */_Bool) ((unsigned long long int) 2261317151U));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_14 [i_3] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */signed char) var_2);
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) ((2261317151U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = ((((((/* implicit */_Bool) 2261317151U)) ? (((unsigned long long int) -7756170932422382440LL)) : (var_1))) << (((/* implicit */int) ((_Bool) arr_1 [i_2 + 2]))));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((_Bool) max((((/* implicit */int) (unsigned short)65535)), (-333203198)))))));
                        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) >= (arr_10 [i_2 - 1])))) + (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)197))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) : (2261317160U))))) ? (((/* implicit */int) max((arr_13 [i_2 + 2]), (var_0)))) : (((/* implicit */int) min(((unsigned char)150), ((unsigned char)127))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) (~(max((max((((/* implicit */unsigned long long int) var_11)), (var_6))), (((/* implicit */unsigned long long int) (unsigned char)127))))));
                        var_19 += ((/* implicit */_Bool) max(((unsigned short)65528), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) >= (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) arr_13 [i_2]))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_25 [i_7] [i_7] [i_7]), (((/* implicit */short) var_8))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))) ? (arr_7 [i_2 - 1] [i_7] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_11)) - (84)))))))) : (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)4092))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)21))))) >= (max((((/* implicit */unsigned long long int) 0U)), (arr_0 [i_2 - 1]))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= ((+(((/* implicit */int) arr_23 [i_2] [i_1] [i_2 + 2] [i_1]))))));
                            arr_30 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)92))))) ? (var_9) : (((/* implicit */unsigned long long int) -405672633719585716LL))));
                            var_22 += ((/* implicit */unsigned short) ((unsigned char) var_6));
                        }
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) - (33405)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3294160858U)) || (((/* implicit */_Bool) 4294967277U))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_7))))))) : (max((((/* implicit */long long int) min(((unsigned short)65025), (((/* implicit */unsigned short) (signed char)-34))))), (9223372036854775807LL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_9] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) : (19U)));
                            arr_34 [i_0] [i_0] [i_2] [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) (signed char)-38);
                            var_24 = ((/* implicit */_Bool) var_3);
                            arr_35 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_9] [i_9]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_10] [i_0] [i_7] [i_1] [i_1] [i_0] [i_0] = (((-(var_9))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2] [i_2 + 2] [i_2 - 1] [i_10 + 1] [i_10 + 2])) ? (((/* implicit */int) arr_39 [i_1] [i_2 + 1] [i_2 + 2] [i_10 + 1] [i_10 + 2])) : (((/* implicit */int) arr_39 [i_1] [i_2 + 1] [i_2 + 2] [i_10 + 2] [i_10 - 1]))))));
                            arr_41 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_2 + 2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_2] [i_7] [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_39 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10]))))) : (((unsigned int) var_3))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_4);
                            arr_45 [i_0] [i_0] [i_1] [i_2] [i_0] [i_11] = ((/* implicit */_Bool) ((unsigned int) ((var_0) ? (((/* implicit */int) arr_31 [i_7] [i_11 - 1] [i_7])) : (((/* implicit */int) arr_31 [i_1] [i_11 - 1] [i_1])))));
                            arr_46 [i_0] [i_1] [i_0] [i_7] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_11 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_38 [i_11 + 2] [i_11 + 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]))))));
                            var_25 = ((/* implicit */_Bool) arr_4 [i_0]);
                            arr_47 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_0)))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_12 - 2]))) : (((((/* implicit */_Bool) var_7)) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12] [i_0] [i_0] [i_1] [i_0])))))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_12] [i_2] [i_12]);
                    }
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (3306379175U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (var_1) : (max((((((/* implicit */_Bool) 25U)) ? (15122813242202164655ULL) : (((/* implicit */unsigned long long int) 31U)))), (((/* implicit */unsigned long long int) 6129620586149896782LL))))));
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
        {
            arr_56 [i_13] [i_13] [i_13] = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_39 [i_13] [i_13] [i_14] [i_14] [i_14])), (4294967279U)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4095U)) == (var_6))))))));
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    for (unsigned short i_17 = 2; i_17 < 13; i_17 += 1) 
                    {
                        {
                            arr_65 [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_27 [i_17 - 1] [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 1]);
                            var_29 -= ((/* implicit */signed char) ((_Bool) var_3));
                            var_30 = ((min((((/* implicit */unsigned long long int) arr_37 [i_13] [i_17 + 1] [i_17 + 1] [i_13] [i_13])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_24 [i_13] [i_15])) : (arr_11 [i_13] [i_13] [i_14] [i_15] [i_16] [i_17]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    {
                        arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] |= ((/* implicit */_Bool) ((unsigned long long int) var_7));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((3119595209U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_8 [i_13] [i_19 + 1] [i_13] [i_19]), (arr_8 [i_13] [i_19 + 1] [i_19 + 1] [i_19 + 1])))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]), (arr_39 [i_13] [i_14] [i_14] [i_14] [i_14])))), (arr_22 [i_13] [i_13] [i_13] [i_13])));
        }
        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 3) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_20] [i_20] [i_13])))));
                    arr_81 [i_20] [i_13] [i_20] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)144));
                    var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) ? (10690103298261502185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_20] [i_20])))))) ? (((/* implicit */int) arr_9 [i_13] [i_13] [i_22 + 1] [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_13] [i_20] [i_13] [i_22] [i_20])))))));
                    arr_82 [i_13] [i_20] [i_13] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (arr_10 [i_13])))) ? (((unsigned int) arr_62 [i_13] [i_13])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 3] [i_22] [i_22])))));
                }
                arr_83 [i_13] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_2)) + (arr_76 [i_13] [i_20] [i_13] [i_13]))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (((_Bool)1) ? (-5093886234611310151LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            arr_84 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) 4350805274928649858ULL));
        }
        /* vectorizable */
        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 4) /* same iter space */
        {
            var_36 = ((((/* implicit */_Bool) ((signed char) arr_8 [i_13] [i_13] [i_13] [i_13]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (var_3));
            /* LoopNest 2 */
            for (signed char i_24 = 1; i_24 < 11; i_24 += 4) 
            {
                for (unsigned short i_25 = 2; i_25 < 10; i_25 += 4) 
                {
                    {
                        arr_95 [i_13] [i_13] [i_13] [i_25] = ((/* implicit */unsigned long long int) var_2);
                        arr_96 [i_24] [i_23] [i_13] [i_24] = ((_Bool) var_4);
                    }
                } 
            } 
        }
    }
    var_37 = var_9;
}
