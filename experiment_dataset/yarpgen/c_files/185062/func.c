/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185062
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_1 + 3] [i_2] = ((/* implicit */_Bool) (-(((arr_1 [21ULL] [i_1 + 3]) / (arr_1 [i_0] [i_1 + 2])))));
                    arr_7 [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 876641432)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))));
                }
                /* LoopSeq 3 */
                for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (arr_8 [i_1] [i_3]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [8LL])))))))));
                    arr_11 [i_3] [i_0] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (4392643029273561349ULL))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [(unsigned char)4]) != (arr_9 [i_3]))))) % (14054101044435990281ULL)))));
                }
                for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    var_14 ^= (_Bool)1;
                    arr_16 [i_0] [i_4 + 1] = ((/* implicit */unsigned int) var_6);
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((int) arr_2 [i_1 - 1] [i_4 - 1])) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 3]))) != (max((-14LL), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1] [1LL]))))))))))));
                    arr_17 [i_4] [(_Bool)1] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14054101044435990260ULL))));
                    arr_18 [i_0] [i_1] [14] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)65535)) << (((((-6671769055629175827LL) + (6671769055629175855LL))) - (28LL))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) > (-7821383284973744094LL))))));
                }
                for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    var_16 &= ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) (_Bool)1))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_4))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((((((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) & (9LL))) >> (((((/* implicit */int) arr_13 [i_0] [i_1 - 2] [8])) + (5811))))))))));
                    var_19 += ((/* implicit */short) arr_0 [i_5 - 1]);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    arr_30 [i_6 - 4] [i_6] [i_6 - 4] [18ULL] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4909))) | (1898629671U)));
                    var_20 = ((/* implicit */_Bool) var_11);
                    arr_31 [(short)7] [(short)7] = ((/* implicit */long long int) var_0);
                    var_21 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_6] [(signed char)12]), (((/* implicit */unsigned short) var_12))))))))));
                }
            } 
        } 
    } 
}
