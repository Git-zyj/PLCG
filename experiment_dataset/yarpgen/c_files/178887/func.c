/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178887
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
    var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)16186)) / (-1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [(_Bool)0] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (((short) arr_0 [i_0])))))) / (((5528856811907196638LL) >> (((((/* implicit */int) arr_2 [i_1] [i_0])) - (168)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-3023), (((/* implicit */short) (unsigned char)174)))))) | (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1])))))));
                        var_19 = var_7;
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_11)))))) >> (((((/* implicit */int) arr_6 [i_3] [i_0])) / (((/* implicit */int) var_2))))));
                        arr_9 [i_0] [i_0] [6U] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_0)))) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (min((2828223846U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_2 [(_Bool)1] [i_3 + 2])))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)81)) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)82)) != (arr_8 [i_0] [i_0] [(unsigned char)4])))))), (var_7)));
            arr_10 [i_0] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)31490));
            arr_11 [i_0] [(unsigned short)4] &= ((/* implicit */_Bool) ((unsigned int) var_13));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((int) min((((((/* implicit */_Bool) arr_5 [i_0] [5U] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)3])))), (((((/* implicit */_Bool) (unsigned char)174)) || (((/* implicit */_Bool) var_13)))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned int) ((arr_8 [i_4] [i_4 - 1] [i_0]) | (arr_8 [i_0] [i_0] [i_4 - 1])))) : (min((3022706914U), (((/* implicit */unsigned int) (unsigned char)69))))));
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [(signed char)16] [(signed char)16] [(signed char)16] = ((long long int) ((arr_8 [i_4 - 1] [i_5] [i_7]) <= (((/* implicit */int) (unsigned char)174))));
                            arr_24 [7] [7] [(unsigned char)17] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1] [i_4]))) / (var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4 - 1])) + (((/* implicit */int) arr_6 [i_4 - 1] [i_0])))))));
                            var_23 &= ((/* implicit */signed char) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_17 [i_7] [i_6] [i_4 - 1])), ((unsigned short)47617))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned short)47617)) : (((/* implicit */int) (unsigned char)82)))), (((/* implicit */int) arr_3 [i_0] [i_4 - 1] [i_4 - 1]))))) ? (((((((/* implicit */int) (unsigned char)197)) * (((/* implicit */int) arr_1 [i_7])))) / (((/* implicit */int) max((arr_1 [i_7]), (((/* implicit */unsigned short) var_1))))))) : (((/* implicit */int) max(((unsigned char)186), ((unsigned char)136))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4 - 1])), (arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1]))), (((((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4 - 1])) | (((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4 - 1]))))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_1)))))) ? (max((((/* implicit */int) arr_20 [i_0] [i_0])), (min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_19 [(unsigned short)7] [i_0])))))) : (((/* implicit */int) ((_Bool) (unsigned char)170)))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_21 [i_8] [i_9] [(_Bool)1] [i_8] [(_Bool)1]));
            var_26 = ((/* implicit */long long int) ((var_15) != (var_15)));
        }
        for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((((arr_13 [i_8] [i_10] [i_10]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [(short)17])) ? (arr_12 [i_8] [i_10]) : (((/* implicit */unsigned int) -453943084)))) - (2865175145U)))));
            arr_35 [i_8] = ((/* implicit */int) var_8);
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_13 [i_8] [i_10] [i_8]))));
            var_29 &= (unsigned char)82;
        }
        arr_36 [(unsigned char)2] [(unsigned char)2] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) && (arr_32 [i_8]))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_42 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)170))) ? (((/* implicit */unsigned int) ((-1456992127) / (((/* implicit */int) (unsigned char)69))))) : (arr_30 [i_11] [i_8])));
                    arr_43 [i_11] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((arr_14 [i_8] [i_11]) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_11] [i_12]))))) : (((/* implicit */long long int) arr_31 [i_12] [(unsigned char)12] [(unsigned char)12]))));
                    arr_44 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (arr_7 [i_8])));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((unsigned short) arr_39 [i_8] [i_12]))));
                }
            } 
        } 
    }
}
