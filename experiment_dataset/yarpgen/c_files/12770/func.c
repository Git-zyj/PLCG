/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12770
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_5 [(signed char)0]))))));
                    arr_8 [i_2] [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3498971500U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [(signed char)7])))))) || (((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_12 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned short) ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_3]))))))));
        }
        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_1 [i_0]))));
            arr_15 [i_0] [i_0] [(_Bool)1] = 2997917085U;
        }
        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_9))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                arr_21 [i_5] [i_0] = (~(var_4));
                var_15 = ((/* implicit */short) arr_6 [i_0] [(unsigned short)10] [(_Bool)1] [i_6]);
                arr_22 [i_5] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1]))) + ((+(arr_4 [i_6] [(signed char)2]))));
            }
        }
        arr_23 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    }
    var_16 = (-(((((/* implicit */_Bool) 3498971500U)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3498971500U))) : (((((/* implicit */_Bool) var_2)) ? (795995795U) : (((/* implicit */unsigned int) -590377074)))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((-590377075) ^ (((/* implicit */int) ((signed char) 14766970646352189972ULL)))))) ? (((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((int) 3498971500U))))))))));
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_8] [i_8 + 1] [i_9] [5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_9] [i_10] [i_10] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [10LL] [i_8]))) : (((795995781U) ^ (((((/* implicit */_Bool) var_0)) ? (795995784U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9])))))))));
                        arr_37 [i_8] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_0)) ^ (var_4)))))) ? (((((/* implicit */_Bool) arr_3 [i_8 - 1] [i_8 - 2])) ? ((+(((/* implicit */int) var_3)))) : (arr_12 [i_7 + 1] [i_10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_8 - 2])))))));
                        arr_38 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) & (arr_20 [i_7 + 1])))) ? (max((arr_12 [i_9] [i_8]), (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8 - 1])))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) var_2);
                        var_19 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_19 [i_8] [5U] [i_8]))))));
                    }
                    arr_41 [i_7] [i_8] = ((/* implicit */_Bool) (-(((long long int) ((((/* implicit */_Bool) arr_11 [i_9 + 1])) ? (((/* implicit */int) var_6)) : (405868252))))));
                    arr_42 [i_8] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) arr_6 [i_7] [i_7 - 1] [i_7] [i_7 - 1])))) <= (((/* implicit */int) var_8))));
                }
                arr_43 [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_40 [i_7 - 1] [(short)3] [3LL] [3LL] [i_7] [i_8 - 2]) <= (((/* implicit */unsigned int) 590377074)))))));
            }
        } 
    } 
}
