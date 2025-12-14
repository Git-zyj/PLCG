/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13961
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
    var_16 = ((/* implicit */short) (signed char)56);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned short)28785))));
        var_18 = ((/* implicit */unsigned short) min(((-(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0])))))), (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)8)))), (((/* implicit */int) arr_2 [i_0] [12ULL]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) min((arr_3 [i_0]), (((/* implicit */unsigned long long int) ((arr_4 [i_2]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))))));
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((517806578U), (((/* implicit */unsigned int) (!(arr_4 [i_0]))))))) ? (((/* implicit */int) ((unsigned char) var_14))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) / ((-(((/* implicit */int) (short)2887))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) ((signed char) (short)-4533))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) -19LL)) ? (1034711815) : (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) ((unsigned char) (unsigned char)250)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_15))));
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 23; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        arr_23 [i_4] [i_4] [i_6] [(unsigned short)15] [i_4] [i_6] = ((/* implicit */long long int) arr_22 [i_4] [i_4] [i_4]);
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6] [i_6] [i_7] [i_7])) | (((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_24 [i_4] = ((/* implicit */unsigned short) ((((arr_15 [i_4] [i_4]) + (2147483647))) >> ((((-(((/* implicit */int) (unsigned char)5)))) + (6)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), ((((!(((/* implicit */_Bool) min((3571063135032785167ULL), (((/* implicit */unsigned long long int) arr_12 [i_4]))))))) ? (((/* implicit */unsigned long long int) 5403166827192574651LL)) : ((+(var_1)))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_13))))))));
        var_23 = ((/* implicit */long long int) (unsigned short)34120);
        arr_27 [i_8] = ((/* implicit */short) 3316234724727526949ULL);
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                {
                    arr_33 [i_8] [i_9 - 1] [i_8] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
                    arr_34 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_9 + 1])) ? (arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_8]) : (arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_10])));
                    arr_35 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-28583)) ? (((/* implicit */int) (short)-2888)) : (((/* implicit */int) (unsigned char)5)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)73)) || (((/* implicit */_Bool) (unsigned short)21422)))))));
                }
            } 
        } 
        arr_36 [i_8] = ((/* implicit */short) (-(arr_0 [i_8])));
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 22; i_12 += 4) 
        {
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                {
                    arr_47 [i_13] [i_12] [i_11] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)125))));
                    var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) ((arr_43 [i_12 + 2]) + (arr_43 [i_12 + 2])))), (((((/* implicit */long long int) (-(2487959405U)))) | (arr_17 [i_11] [i_11] [i_13] [i_13])))))));
                }
            } 
        } 
        arr_48 [i_11] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-7467771145974941670LL), (-4085502179307350131LL)))) || (((/* implicit */_Bool) arr_6 [i_11] [i_11] [22LL] [i_11]))))), (min((var_10), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)24557)))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) ^ (max((arr_43 [i_11]), (arr_43 [i_11]))))))));
    }
}
