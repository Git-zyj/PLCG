/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126513
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
    var_11 += ((/* implicit */_Bool) min((((long long int) (+(((/* implicit */int) var_1))))), ((-(min((var_2), (var_2)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((((/* implicit */int) arr_0 [(short)1])) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (29731))))))))));
        var_13 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) max(((+(2665279453U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)244)))))));
        arr_5 [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)225)), (3720218030U)))) ? (((long long int) (~(arr_3 [i_1])))) : ((+(arr_3 [i_1])))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)225))));
                var_16 += ((/* implicit */unsigned int) ((int) var_8));
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2 - 1]))))), (var_9)));
            }
            var_17 = ((/* implicit */int) arr_8 [i_1] [i_2] [i_1]);
        }
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_18 = ((/* implicit */int) var_5);
                var_19 += ((/* implicit */long long int) arr_12 [i_1]);
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_8 [i_1] [i_1] [(_Bool)1]))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_1] [i_4] [i_1])))), (((/* implicit */int) arr_12 [i_4]))))) ? (min((-8161606034086693944LL), (((/* implicit */long long int) (short)-20157)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)32767)))))));
                arr_20 [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) (+((~(((/* implicit */int) (unsigned char)224)))))));
                var_22 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) -1152921504606846976LL))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_19 [i_1])))))) >> (((/* implicit */int) var_5))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_7] = max((((/* implicit */int) ((((/* implicit */int) min((var_1), (var_4)))) < ((~(((/* implicit */int) arr_12 [i_7]))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_1)))));
                arr_25 [i_1] [i_4] [i_7] = ((/* implicit */_Bool) (+(((((var_2) / (((/* implicit */long long int) arr_13 [i_4])))) * (max((((/* implicit */long long int) arr_12 [i_1])), (var_2)))))));
                var_23 = ((/* implicit */long long int) var_10);
            }
            for (short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((max((min((arr_13 [i_1]), (arr_16 [i_1] [i_1]))), (((int) (unsigned char)215)))) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_9), (((/* implicit */long long int) (unsigned short)44317)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)41)) >> (((((/* implicit */int) (unsigned char)221)) - (211))))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_16 [10LL] [i_8]))) ? (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2982))) : (-8161606034086693944LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24885))) >= (16711680U))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            }
            var_25 = ((/* implicit */unsigned int) ((unsigned char) min((min((((/* implicit */unsigned int) arr_6 [i_1] [i_4] [(unsigned char)3])), (arr_4 [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) arr_23 [i_9] [i_9] [i_9] [i_9]);
        var_27 = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        var_28 = (-((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) ^ (2222691167U))))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(arr_9 [i_10] [i_10] [i_10] [i_10])))) ? ((~(((/* implicit */int) arr_7 [i_10] [i_10] [7LL])))) : (min((arr_16 [i_10] [i_10]), (((/* implicit */int) var_1)))))) >= (var_0)));
    }
}
