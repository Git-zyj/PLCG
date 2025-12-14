/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116255
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
    var_15 -= ((/* implicit */unsigned short) (~(((unsigned long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) min((((/* implicit */long long int) max(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1])), (arr_3 [i_0] [i_1]))))))), (min((((/* implicit */long long int) arr_3 [11U] [i_1])), (((long long int) arr_4 [i_0] [i_1] [i_1]))))));
            var_17 |= ((/* implicit */unsigned char) (-((-(arr_2 [i_0])))));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0)))))));
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((unsigned int) (_Bool)0)))))));
            var_20 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0]))))), (arr_2 [i_0])))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (-(8583488510582627221ULL)))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [15])))) ? ((+(((/* implicit */int) arr_8 [11] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_1 [i_3]))))))) ? (min((((/* implicit */int) min((arr_3 [i_3] [i_0]), (arr_4 [(unsigned char)8] [i_3] [i_3])))), ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0])))))))));
            var_23 -= (~(min((min((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_0 [i_3])))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((arr_7 [i_0]), (((/* implicit */unsigned long long int) arr_10 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0])), (arr_3 [i_0] [i_0]))))) == ((-(arr_9 [i_0] [12]))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))), ((+(arr_2 [i_0])))))));
        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0]))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    var_26 = ((/* implicit */short) min((((unsigned long long int) min((arr_6 [(unsigned char)13] [i_5] [i_5]), (arr_11 [i_0] [i_0])))), (min((min((arr_7 [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_5] [0U] [(unsigned short)5])))), (((/* implicit */unsigned long long int) ((arr_15 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
                    var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [i_4])), (arr_0 [i_0])))) ? (min((arr_6 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_4 [(short)18] [i_4] [i_0])))) : (min((arr_13 [i_0] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_4] [1ULL])))))));
                    var_28 = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_7 [i_0]), (arr_7 [i_0]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) arr_5 [i_6]))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) ((long long int) arr_23 [i_6] [i_7] [i_9]));
                        var_31 = ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_6])));
                        var_32 = ((/* implicit */long long int) ((unsigned short) arr_7 [i_6]));
                    }
                } 
            } 
        } 
        var_33 = ((_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_6])) : (arr_12 [i_6])));
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_34 = ((/* implicit */signed char) ((unsigned char) ((int) arr_31 [i_10])));
        var_35 = (-(((/* implicit */int) (_Bool)1)));
        var_36 = ((/* implicit */unsigned short) (-(min(((~(arr_10 [i_10]))), (((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) arr_4 [i_10] [i_10] [i_10]))))))));
        var_37 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((arr_12 [i_10]), (arr_10 [i_10])))) ? (((((/* implicit */_Bool) arr_6 [i_10] [(signed char)15] [i_10])) ? (arr_9 [i_10] [i_10]) : (((/* implicit */unsigned long long int) arr_31 [i_10])))) : (((unsigned long long int) (unsigned char)255)))), (min((arr_30 [i_10] [i_10]), (((/* implicit */unsigned long long int) min((arr_4 [i_10] [i_10] [i_10]), (arr_8 [i_10] [i_10] [i_10]))))))));
    }
}
