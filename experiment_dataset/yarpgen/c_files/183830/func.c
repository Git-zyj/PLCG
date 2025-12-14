/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183830
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) 288225978105200640LL));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [17LL] [i_2] = ((/* implicit */short) ((var_5) >> (((((long long int) arr_1 [i_2 + 2] [i_2])) + (87LL)))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))));
                    var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2 - 1])) ? (((var_10) & (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))) : (((/* implicit */int) arr_2 [i_2 + 1] [i_1] [i_2]))));
                    var_16 = ((/* implicit */unsigned long long int) ((1463848573) + (((/* implicit */int) (unsigned char)188))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        arr_11 [(unsigned short)21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((-(((/* implicit */int) var_11)))) + (((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) < ((~(arr_7 [i_3] [i_3] [i_3] [i_3])))));
        var_17 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [19ULL] [i_3] [(unsigned char)7] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (arr_3 [i_3] [i_3] [i_3])))), (arr_5 [i_3] [(short)3] [(short)3] [i_3])));
        arr_12 [(_Bool)1] [i_3] = ((/* implicit */short) ((var_2) <= (((unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
        var_18 = ((/* implicit */int) (-(min((((/* implicit */long long int) arr_6 [i_3] [16LL] [i_3])), (arr_3 [i_3] [i_3] [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_4 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [0ULL]))) : (var_5)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [14ULL] [i_4] [i_4])) + (((/* implicit */int) arr_6 [i_4] [(unsigned short)2] [i_4])))))))) ? (((((arr_5 [i_4] [i_4] [i_4] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)16)), (835943366)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_4] [12] [12]))))));
        var_20 = ((/* implicit */short) min((var_20), (max((((/* implicit */short) (signed char)-80)), ((short)-11469)))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) arr_4 [i_4])), (arr_2 [i_4] [i_4] [i_4])))) <= (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) arr_6 [(short)0] [(signed char)12] [i_4]))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) arr_16 [i_4])) : (arr_5 [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))));
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) 788486477)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((var_5) / (var_5)))) : (((var_2) * (var_7)))))));
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_22 [i_5] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) (unsigned short)17690)) & (((/* implicit */int) (unsigned char)54)))) / (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (unsigned short)504)) : (var_10))))));
        arr_23 [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5]))));
    }
    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        arr_34 [i_6] [i_7] [1LL] [i_8] [12U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)80)), (var_3)))) ? (((/* implicit */int) (unsigned short)65012)) : (((/* implicit */int) (unsigned short)46416))));
                        arr_35 [i_9] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)3269)), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65504)), (-913728817)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) : (562949953421311LL)))));
                        arr_36 [i_6] [i_8] [i_6] [i_7 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) arr_0 [i_7])), (arr_15 [i_9])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_9))))))) : (max((((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_10)))), (max((arr_7 [(unsigned short)22] [i_8] [i_8] [i_9]), (((/* implicit */long long int) arr_1 [i_6] [i_6]))))))));
                    }
                } 
            } 
        } 
        arr_37 [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-27768)) ? (((/* implicit */int) (unsigned short)3584)) : (((/* implicit */int) (signed char)81)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6])))))));
    }
    var_23 = ((((/* implicit */int) max(((unsigned char)128), ((unsigned char)50)))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5746))))))) != (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
