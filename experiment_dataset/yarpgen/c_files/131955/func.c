/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131955
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
    var_20 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [(_Bool)1] = ((arr_3 [i_0 + 2]) - (arr_3 [i_0 + 3]));
            var_21 = ((/* implicit */short) ((arr_5 [i_0 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
        }
        for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0 + 2])))) <= (((/* implicit */int) min(((unsigned short)60246), (((/* implicit */unsigned short) arr_0 [10ULL])))))))), (max((((((/* implicit */_Bool) arr_4 [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 4]))) : (arr_5 [i_2 + 2]))), (max((arr_5 [i_0 + 2]), (arr_4 [(short)18])))))));
            arr_10 [i_0] [i_0] [i_2 - 1] = ((/* implicit */short) (((((((-(((/* implicit */int) arr_8 [i_0] [i_0])))) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0 - 2])))) ^ (((/* implicit */int) arr_1 [i_0 + 4]))));
            arr_11 [i_0 + 2] [i_0 + 2] [9ULL] = arr_8 [(signed char)11] [i_2];
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3066093687U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((~(((/* implicit */int) arr_8 [i_0 - 1] [i_0])))) : (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 4] [i_0 + 3])))))));
        arr_12 [i_0 + 1] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (long long int i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned int) arr_16 [i_5]);
                        arr_21 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) arr_4 [(short)14]);
                        arr_22 [i_4] [i_4] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_5]))))), ((((+(arr_4 [i_4]))) << ((((-(((/* implicit */int) arr_8 [i_3 + 2] [i_4])))) + (314)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((min((arr_5 [i_7]), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_7])))), (((min((((/* implicit */unsigned long long int) (unsigned char)43)), (arr_25 [i_3 + 1] [i_7] [18LL]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3 - 2]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        arr_30 [i_3] [(unsigned short)16] [i_3] [i_9] = ((/* implicit */long long int) arr_14 [i_3 - 1]);
                        var_25 = arr_25 [i_3 - 1] [i_7] [i_3 - 1];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 1) 
                    {
                        var_26 += ((/* implicit */_Bool) arr_16 [14U]);
                        arr_33 [i_10] [i_8] [(unsigned char)17] [i_3] = ((/* implicit */signed char) ((6457742773564219669ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_8])) | (((/* implicit */int) arr_1 [i_3 - 1])))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) (unsigned char)210))))));
                    }
                }
            } 
        } 
    }
}
