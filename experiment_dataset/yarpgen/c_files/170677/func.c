/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170677
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_9);
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned int) ((unsigned long long int) -1368496690));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) != (((/* implicit */int) var_7)))) ? (((181622319U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))) : ((+(1479412985U)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] &= ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))));
        arr_15 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16128))) : (326645312031392937ULL)));
        arr_16 [i_3] = ((/* implicit */unsigned short) arr_5 [i_3] [i_3] [i_3]);
        arr_17 [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_3] [i_3]));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        arr_20 [i_4] [i_4] = ((((/* implicit */int) (unsigned short)45010)) * ((+(((/* implicit */int) (unsigned short)45010)))));
        arr_21 [i_4] = ((/* implicit */unsigned int) (unsigned short)45025);
    }
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_29 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) min(((signed char)-9), ((signed char)-9)));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        arr_32 [i_8] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_3 [i_5] [i_8]), (arr_3 [i_5] [i_6])))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_6] [i_5]))))), (((unsigned long long int) (unsigned short)20525))))));
                        arr_33 [(signed char)12] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_7] [i_5])), (-1438735729828745135LL)));
                        arr_34 [i_5] [0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)8)), (4113344965U)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45010)) * (((/* implicit */int) (short)-18931))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3693))) : (((unsigned long long int) var_8))))));
                        arr_35 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)20504)) <= (((/* implicit */int) min((arr_19 [i_6]), (((/* implicit */short) arr_5 [i_5] [i_6] [i_7])))))));
                        arr_36 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */signed char) ((min((1366385304060699642ULL), (((/* implicit */unsigned long long int) (-(arr_24 [i_6])))))) >> ((((-((~(((/* implicit */int) arr_4 [i_7] [i_6] [i_5])))))) + (115)))));
                    }
                }
            } 
        } 
    } 
}
