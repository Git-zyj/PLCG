/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152393
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)8553)), ((unsigned short)4640)))), (((((/* implicit */_Bool) (unsigned short)4639)) ? (((/* implicit */int) (signed char)-105)) : (2097863990))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7912251867036392512LL)) ? (-2097864013) : (((/* implicit */int) (unsigned short)4661))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((int) 226785052U))) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_1] [i_2] [i_3]), (arr_4 [19U] [i_0])))) ? (((/* implicit */unsigned int) max((-2097864016), (((/* implicit */int) (unsigned short)4633))))) : (arr_2 [i_0 - 2] [i_0 - 2])))) : (arr_3 [i_0 - 2] [(signed char)20]))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((arr_1 [i_2]) ? ((+(arr_6 [i_1] [i_2] [i_3]))) : (2097863994)));
                                arr_11 [6] [i_1] [i_2] [i_3] [6] = ((/* implicit */int) 17752619926024015905ULL);
                                var_25 = ((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_4]);
                                arr_12 [i_3] [i_3] [i_2] [4U] [i_4] = ((((var_1) & (var_17))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))));
                                arr_13 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(unsigned short)0] [i_4] [i_2])) >= (arr_6 [i_0] [i_1] [i_4])));
                            }
                            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                            {
                                var_26 -= ((/* implicit */unsigned int) ((short) max((((/* implicit */int) ((((/* implicit */unsigned int) var_11)) == (var_5)))), (arr_6 [i_0 - 1] [i_1] [i_3]))));
                                var_27 = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1])))));
                            }
                            for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                            {
                                var_28 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_16)) ? (arr_9 [i_3] [i_3] [i_2] [i_3] [(unsigned short)6]) : (var_11))) | (-1950485800))), (((((/* implicit */_Bool) var_10)) ? (var_16) : (arr_6 [i_0 + 1] [11] [i_2])))));
                                var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2]))) ^ (min((min((((/* implicit */unsigned long long int) arr_2 [i_0] [0LL])), (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_14)), (var_0))))))));
                            }
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)4639)), (0LL))))));
                            var_31 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 2]))))) != (max((12335297351211529696ULL), (((/* implicit */unsigned long long int) var_12))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */int) ((unsigned int) min((var_5), (((/* implicit */unsigned int) arr_20 [(_Bool)1] [i_7 - 1])))));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4643)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (-11LL)));
    }
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 4; i_9 < 23; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        var_33 = ((/* implicit */short) (~(var_18)));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [(unsigned short)5] [(unsigned short)5])))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_7), (1050513456250981440ULL)))) ? (max((9223372036854775807LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))), (((/* implicit */long long int) var_8))));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (short i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-14555)))))) & (((/* implicit */int) arr_26 [i_8] [i_12]))))), (((((((/* implicit */_Bool) var_16)) ? (arr_27 [4LL] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_12] [i_12]))))) >> (((var_16) + (1976872473)))))));
                        arr_41 [i_8] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_23 [i_8] [i_13 + 1])))), (((/* implicit */int) min((arr_32 [i_13 - 2]), (arr_32 [i_13 + 2]))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (var_10)))) ? (((/* implicit */unsigned long long int) ((-1874299124) + (((/* implicit */int) (unsigned char)0))))) : (((unsigned long long int) 4294967281U)))));
    }
}
