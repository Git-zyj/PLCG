/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111090
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) -1849138307)), (var_3))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                    var_11 |= ((/* implicit */unsigned char) ((((-510190124) + (2147483647))) >> (((min((((/* implicit */long long int) max((-510190124), (((/* implicit */int) (unsigned short)51681))))), (arr_4 [i_2] [i_1] [i_0]))) - (51667LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((unsigned short) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-10)))), (arr_5 [(_Bool)1]))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9007164895002624ULL)) ? (12007314607661211702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)32767)))))) >= (min((((/* implicit */unsigned long long int) 1499978474)), (var_6))))))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_5 [(unsigned short)0]))));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(_Bool)1])) == (((/* implicit */int) ((arr_0 [(signed char)8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)20] [i_3]))))))));
        var_16 = 18437736908814548992ULL;
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_17 -= ((/* implicit */short) (-(((/* implicit */int) ((arr_2 [i_4]) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_4] [16U])))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) var_5)))))));
    }
    /* vectorizable */
    for (short i_5 = 3; i_5 < 19; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_5))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_20 |= ((/* implicit */unsigned int) 17522778324370463889ULL);
            var_21 = ((/* implicit */_Bool) var_7);
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        var_22 += min((9007164895002624ULL), (((/* implicit */unsigned long long int) ((long long int) ((long long int) var_2)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                arr_31 [i_7] = ((/* implicit */unsigned int) ((12152759323639316702ULL) >= (18437736908814549016ULL)));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((min((((/* implicit */long long int) (short)4284)), ((+(-7607478385870399286LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18437736908814548992ULL)) ? ((+(-1202974214))) : (((/* implicit */int) (signed char)38))))))))));
                arr_32 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_29 [i_8] [i_8 - 1] [i_9 - 1]), (((/* implicit */unsigned int) arr_6 [i_7] [i_8 + 1] [i_9 + 3] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((531782155) / (((/* implicit */int) (unsigned short)31622))))) || (((/* implicit */_Bool) arr_23 [i_9]))))) : (((/* implicit */int) var_8))));
                arr_33 [i_7] = ((/* implicit */unsigned short) (_Bool)0);
                /* LoopSeq 2 */
                for (int i_10 = 3; i_10 < 17; i_10 += 2) 
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_20 [i_7] [i_9] [i_10]))));
                    var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2143495494002069249ULL)) && (((/* implicit */_Bool) (signed char)-22))))), (min((((/* implicit */unsigned short) arr_8 [i_7])), (arr_20 [i_7] [i_9] [i_10])))))), (((((/* implicit */_Bool) arr_34 [i_10 + 2] [i_8 - 3] [i_9 - 1] [2ULL] [i_7])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_34 [i_10 + 2] [i_8 - 3] [i_9 - 1] [(_Bool)1] [i_7]))))));
                }
                for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
                {
                    arr_42 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_7] [i_8 - 3])) ? (arr_4 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_7] [16U]), (((/* implicit */unsigned short) (signed char)-97))))))));
                    arr_43 [i_7] = (signed char)-5;
                }
            }
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
            {
                var_26 |= ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 8275903911893824187LL)) ? (((/* implicit */long long int) var_3)) : (-2878433187245549918LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_9))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))));
                            var_28 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_39 [(unsigned short)6] [i_8] [i_12] [i_7] [i_13] [i_13])), (1776903864861026868LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((9007164895002633ULL), (((/* implicit */unsigned long long int) 1776903864861026847LL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) (signed char)-85))))) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) 29ULL);
            }
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 17; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_60 [i_7] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)8217)), (((arr_55 [i_17] [i_15] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))))) ^ (((/* implicit */unsigned long long int) 3602107385U))));
                            var_30 = var_10;
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_7]))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) 0ULL))));
                /* LoopSeq 2 */
                for (short i_18 = 2; i_18 < 19; i_18 += 4) 
                {
                    var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48595)) ? (var_3) : (max((arr_29 [i_18] [i_18] [i_8 - 1]), (arr_29 [i_18] [i_8] [i_8 + 1])))));
                    var_34 = ((/* implicit */unsigned long long int) (~(arr_61 [(signed char)3] [i_8] [i_15])));
                    var_35 = ((/* implicit */unsigned short) arr_39 [i_18] [i_15] [i_15] [i_15] [i_7] [i_7]);
                    var_36 = ((/* implicit */long long int) arr_44 [i_8 - 1] [i_7]);
                }
                for (unsigned char i_19 = 1; i_19 < 17; i_19 += 4) 
                {
                    var_37 = ((/* implicit */signed char) ((((/* implicit */int) max((var_7), (((/* implicit */signed char) min(((_Bool)1), (arr_19 [i_7]))))))) > (((/* implicit */int) (signed char)-90))));
                    arr_66 [(signed char)18] [i_7] [i_15] [i_19] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_22 [i_7])) ? (arr_22 [i_7]) : (arr_22 [i_19 + 1]))), (((/* implicit */unsigned long long int) (signed char)-5))));
                    var_38 -= max((((/* implicit */long long int) min((arr_23 [i_8 - 3]), (((/* implicit */unsigned short) (signed char)34))))), ((-9223372036854775807LL - 1LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                    {
                        arr_70 [i_7] [i_8] [i_7] [i_15] [i_7] [i_20] = var_8;
                        arr_71 [i_20] [i_19] [i_7] [i_8] [(signed char)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) 12152759323639316702ULL)) && (((/* implicit */_Bool) arr_24 [i_7] [i_7]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) != (arr_68 [10] [i_8] [i_7] [i_19] [i_20] [i_8]))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
                    {
                        var_39 -= ((/* implicit */signed char) (_Bool)1);
                        arr_74 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 2649252593U)), (var_6))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_21] [i_19] [i_15] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_7] [i_15] [i_19 - 1] [i_7]))) : (var_3))))));
                    }
                }
            }
            var_40 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (max((1749813696U), (((/* implicit */unsigned int) (unsigned short)31220))))))), (arr_4 [i_8] [i_7] [i_7])));
            arr_75 [i_7] [i_7] = ((/* implicit */unsigned short) max((2915279027U), (((/* implicit */unsigned int) (short)-32753))));
            arr_76 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 510190139)) ? (arr_40 [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8])))));
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4870134007899470263LL), (((/* implicit */long long int) ((((/* implicit */int) (short)11460)) & (((/* implicit */int) arr_48 [i_7] [i_8] [(_Bool)1] [i_8] [i_7])))))))) ? ((+(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) max((arr_16 [i_7] [i_7]), (var_9)))))))))));
        }
        var_42 += ((((/* implicit */unsigned long long int) var_0)) + (max((((var_4) ? (var_6) : (((/* implicit */unsigned long long int) arr_51 [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11335)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 3) 
            {
                for (unsigned short i_24 = 3; i_24 < 18; i_24 += 1) 
                {
                    {
                        arr_84 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_67 [i_7] [i_22]);
                        arr_85 [i_24] [i_24] [i_7] [i_7] [i_7] [i_7] = ((long long int) (-(arr_62 [i_24 - 2] [i_24 - 2] [i_23])));
                    }
                } 
            } 
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) 14156608660019061631ULL))));
            var_44 = ((/* implicit */unsigned long long int) max((max(((unsigned char)166), (((/* implicit */unsigned char) ((_Bool) arr_55 [i_7] [i_22] [i_22]))))), (((/* implicit */unsigned char) min((((arr_57 [i_22] [i_22] [i_22] [i_7] [i_22]) < (((/* implicit */int) var_1)))), (((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)-12)))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_25 = 3; i_25 < 19; i_25 += 4) 
        {
            var_45 = ((/* implicit */long long int) var_0);
            /* LoopSeq 1 */
            for (unsigned char i_26 = 1; i_26 < 17; i_26 += 1) 
            {
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) var_5))));
                var_47 = ((/* implicit */unsigned long long int) max((((long long int) (unsigned char)213)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
            }
        }
    }
}
