/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134334
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_3 [i_1 + 1]));
                    arr_8 [i_2] [i_1] [9ULL] = ((/* implicit */short) ((long long int) max((var_13), (((/* implicit */unsigned long long int) (unsigned char)28)))));
                    arr_9 [i_1] [i_1 + 2] = ((/* implicit */long long int) (unsigned char)27);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) var_1)) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_3]))))))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(7815976379219343919LL))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] [8LL] [i_3] [(signed char)0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7815976379219343919LL)) ? (7815976379219343926LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3])))))))) ? (((/* implicit */long long int) max((((unsigned int) -7815976379219343919LL)), (var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) / (((/* implicit */int) (signed char)66))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1789218860322211287LL)))));
                                arr_23 [i_3] [i_3] [i_5] [i_6] [4ULL] = ((/* implicit */_Bool) ((unsigned short) min(((unsigned short)29109), (((/* implicit */unsigned short) arr_21 [i_5] [i_5] [i_7 + 1] [i_7 + 1] [i_7])))));
                                var_19 *= ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            {
                                arr_29 [i_3] [(signed char)4] [i_3] = ((/* implicit */signed char) -1789218860322211287LL);
                                arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)7] = ((/* implicit */unsigned short) ((((2980817685360713584ULL) - (var_13))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) -1789218860322211300LL))) * (((/* implicit */int) var_12)))))));
                                var_20 = ((/* implicit */unsigned short) -1395724920);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
