/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13461
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 670586981)) : (var_1)));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((_Bool) ((3110109726U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((_Bool) var_10)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (signed char)-1)), (((arr_0 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) ^ (min((((/* implicit */unsigned long long int) var_8)), (var_14)))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_1]));
                    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0] [i_1] [i_2]))) ? (((/* implicit */int) (unsigned char)237)) : (((((/* implicit */_Bool) var_13)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -790249635)) ? (((/* implicit */int) arr_6 [7U] [i_1] [i_1] [(signed char)14])) : (((/* implicit */int) var_8))))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            arr_12 [i_0] [2] = ((/* implicit */long long int) (signed char)-2);
            var_20 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (arr_5 [(signed char)21] [i_3 - 2])));
        }
        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            var_21 = ((/* implicit */long long int) (unsigned short)59952);
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : ((+(11577707171809068988ULL)))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(short)13] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) 1780353872)), (7075371480206254670LL))))))))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_7 [(signed char)16] [(unsigned char)20] [i_4 + 2] [(unsigned short)8]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_2)))) : (min((((/* implicit */long long int) var_0)), (-2838721374890073444LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 0LL)))))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_25 = ((/* implicit */int) 452771909U);
            var_26 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (signed char)0)))));
        }
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-106)) | (((/* implicit */int) arr_2 [i_7 - 1] [(short)6]))));
                        var_28 += ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)8)) == (((/* implicit */int) var_8)))) ? ((-(((/* implicit */int) (unsigned short)12833)))) : (((/* implicit */int) var_5))));
                    }
                    for (signed char i_9 = 1; i_9 < 21; i_9 += 2) /* same iter space */
                    {
                        var_29 = ((((/* implicit */_Bool) ((unsigned short) arr_27 [(unsigned short)0] [i_6 - 1] [i_6 - 1] [4]))) ? (((/* implicit */int) (short)6599)) : (((/* implicit */int) var_6)));
                        var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) << (((var_14) - (13823011933532281214ULL))))) & (((((/* implicit */int) arr_26 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) >> (((-400186183) + (400186184)))))))), (max((((8128ULL) ^ (((/* implicit */unsigned long long int) 400186186)))), (((/* implicit */unsigned long long int) ((unsigned short) 561591174)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            {
                                arr_32 [i_0] [14LL] [i_6 - 1] [i_11] [i_10] [i_11 + 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)8))));
                                var_31 = ((/* implicit */short) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            var_32 |= arr_34 [i_0];
            var_33 *= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)61455)), (780173408U)));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21; i_13 += 4) 
        {
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((arr_19 [i_0] [i_13 + 1]) ^ (((/* implicit */int) (unsigned short)52698)))) % (((/* implicit */int) (unsigned char)186)))))));
            var_35 = ((/* implicit */long long int) ((arr_1 [8]) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-1))))));
        }
        for (unsigned short i_14 = 2; i_14 < 19; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                arr_44 [i_14] = ((/* implicit */unsigned short) arr_0 [i_14 + 4]);
                var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
            }
            var_37 = ((/* implicit */_Bool) max((3LL), (((/* implicit */long long int) max((2398573808U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)127))))))))));
            var_38 = ((/* implicit */int) (_Bool)1);
            var_39 += ((/* implicit */unsigned long long int) (((-((-(var_1))))) < (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0])))));
        }
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        var_40 = ((/* implicit */short) var_5);
        /* LoopNest 3 */
        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            for (unsigned int i_18 = 4; i_18 < 13; i_18 += 4) 
            {
                for (long long int i_19 = 2; i_19 < 12; i_19 += 2) 
                {
                    {
                        var_41 = ((/* implicit */long long int) ((short) 2398573819U));
                        arr_55 [i_19] = var_5;
                        var_42 = ((/* implicit */int) arr_48 [i_18 - 1] [i_17] [i_18 - 1]);
                    }
                } 
            } 
        } 
    }
}
