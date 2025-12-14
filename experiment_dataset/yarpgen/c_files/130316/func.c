/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130316
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
    var_10 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) var_0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (326540757505671140ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9961))))) : (max((var_2), (((/* implicit */unsigned long long int) var_6)))))) : (((((/* implicit */_Bool) 16777152)) ? ((+(var_5))) : (((((/* implicit */_Bool) 9216567093074369884ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) : (326540757505671166ULL)))))));
                arr_5 [(unsigned short)4] [i_0 - 2] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3])) <= (arr_4 [i_0 - 1] [(unsigned char)9])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((long long int) arr_7 [i_2]))))) > ((~(((2305843009213693951ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))))));
        var_13 = ((/* implicit */int) ((unsigned long long int) min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */short) arr_9 [i_2] [i_2])))));
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_2] [2ULL]), (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned short)21406)) : (((int) arr_4 [6U] [i_2]))))) ? (((unsigned int) arr_7 [(short)14])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53142)) && (((/* implicit */_Bool) (signed char)117)))))));
                        var_16 += ((/* implicit */short) arr_1 [i_3] [i_5]);
                        arr_18 [i_3] [i_4] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((-260453051) ^ (((((((/* implicit */int) arr_15 [i_4] [(unsigned char)7] [i_6])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_4] [i_4] [i_5])) + (71)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) ((unsigned char) arr_13 [i_3 + 1] [(unsigned char)2] [i_3 + 1]));
    }
    for (short i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 326540757505671165ULL)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (short i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            var_18 = ((/* implicit */int) var_1);
            arr_26 [i_7] [1ULL] = ((/* implicit */_Bool) max(((unsigned char)102), (arr_25 [i_7] [i_7])));
            var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (~(5396170225626924791LL))))));
            var_20 = ((/* implicit */short) arr_25 [i_8] [i_7]);
        }
        for (short i_9 = 2; i_9 < 9; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 8; i_12 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned char) ((((arr_6 [i_7] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)91)) - (91)))));
                            var_22 = ((/* implicit */signed char) (~(((((/* implicit */int) var_3)) + (((((/* implicit */int) arr_15 [i_7 + 2] [i_10] [i_12 - 1])) + (var_7)))))));
                        }
                    } 
                } 
                arr_38 [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)116)), (max((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_3))))), (var_7)))));
            }
            for (int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) arr_2 [i_7]);
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 0))) ? ((+(arr_21 [i_9 + 1]))) : (((/* implicit */unsigned long long int) 1679153526))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_7])) << ((-(((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned char i_16 = 1; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_14] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_51 [i_14] [i_14 + 1] [i_7] [i_14 + 2])) : (((/* implicit */int) arr_51 [(signed char)7] [i_14 + 1] [i_7] [i_14 - 1]))));
                            var_27 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)0))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-93)) >= (((/* implicit */int) ((arr_8 [i_7] [i_7]) <= (((/* implicit */unsigned long long int) arr_41 [i_9 + 2])))))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */signed char) var_2);
            var_30 = ((/* implicit */int) 18120203316203880475ULL);
            var_31 = arr_51 [i_7] [i_9] [i_7] [i_9];
        }
    }
}
