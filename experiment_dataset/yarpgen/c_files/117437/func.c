/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117437
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((var_7), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) var_13))))))))) / (((var_4) % (((/* implicit */long long int) min((((/* implicit */int) var_11)), (2147483647))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (-2147483632) : (((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) >= (((/* implicit */int) arr_2 [i_0 - 1])))))));
        arr_4 [i_0] = ((short) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_2 - 1])), (1457107664)))) ? (min((((2147483647) - (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (2147483631) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) ((_Bool) arr_9 [i_1])))));
                    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (-9223372036854775802LL))))) + (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 1102987741728533218LL)) : (549755813887ULL))) / (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
                    arr_13 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)16475))))) < (min((((/* implicit */long long int) arr_6 [i_0])), (arr_8 [i_0] [i_0 + 1] [i_0])))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_5 [i_0 + 2] [i_2 - 1] [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0 + 2])))));
                    var_22 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)27540)), (((unsigned int) ((arr_5 [i_0 - 1] [i_0 - 1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                arr_21 [5ULL] [i_4] [i_4] = ((/* implicit */signed char) var_13);
                var_23 = ((((/* implicit */int) arr_20 [1U] [1U] [i_5 - 1] [(signed char)13])) >= (((/* implicit */int) arr_18 [i_5 + 2] [i_5 + 3] [i_5])));
            }
            arr_22 [i_4] [i_4] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1457107665))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 3; i_7 < 24; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        var_24 -= ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) var_9)))));
                        arr_32 [i_3] [i_3] = ((/* implicit */unsigned short) ((arr_23 [i_3] [i_7 + 1] [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-12605)))));
                        arr_33 [i_3] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483631)) ? (-2147483631) : (((/* implicit */int) (unsigned short)65051))))) <= (arr_30 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_7 + 1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_38 [i_3] [i_6] [i_3] [i_10] [i_3] [9LL] = ((/* implicit */unsigned int) ((arr_23 [i_10 - 1] [i_10 - 1] [i_10 - 1]) >= (((/* implicit */long long int) -2147483631))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1102987741728533218LL)))))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(unsigned short)4]))));
        }
        for (unsigned int i_11 = 3; i_11 < 22; i_11 += 4) 
        {
            arr_43 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            arr_44 [i_3] [i_11] = ((/* implicit */unsigned char) ((signed char) arr_18 [i_11 + 3] [i_11 + 3] [i_11 + 2]));
            arr_45 [i_3] [i_11 - 1] [i_11] = ((/* implicit */_Bool) arr_11 [8LL] [24U] [i_11] [8LL]);
            arr_46 [i_11] [i_11] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 - 1])) != (((/* implicit */int) arr_0 [i_11 - 2]))));
        }
        arr_47 [i_3] [i_3] = ((((/* implicit */long long int) 540462651U)) >= (arr_31 [i_3] [i_3] [i_3] [i_3]));
        arr_48 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -2147483632)) ? (arr_8 [(signed char)8] [i_3] [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) (short)-13363)))))));
        arr_49 [i_3] = ((/* implicit */signed char) arr_9 [(short)18]);
        /* LoopNest 2 */
        for (short i_12 = 1; i_12 < 21; i_12 += 4) 
        {
            for (long long int i_13 = 2; i_13 < 23; i_13 += 4) 
            {
                {
                    arr_56 [i_3] [i_3] [i_13 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_17))))) | (arr_31 [(short)7] [i_12 - 1] [i_13 - 2] [i_13 + 1])));
                    arr_57 [i_3] [21ULL] [21ULL] = ((/* implicit */unsigned long long int) arr_42 [i_3]);
                    arr_58 [i_3] [i_3] = ((/* implicit */signed char) var_13);
                    var_27 = ((/* implicit */unsigned int) (+(arr_37 [i_13] [i_13 + 2] [i_13 + 1] [i_13] [i_13])));
                    var_28 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)40029)) >= (((/* implicit */int) (unsigned char)235)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12 + 2]))) : (arr_26 [i_12 - 1] [i_12 - 1] [i_13 + 2] [i_13 + 2])));
                }
            } 
        } 
    }
}
