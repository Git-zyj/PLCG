/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116939
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) 4188846225U)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (signed char)-23))))) ? (((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))) & (((13808264210984299787ULL) & (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32758))) * (min((((/* implicit */long long int) -1923234115)), (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) -1923234115)) ? (((/* implicit */unsigned long long int) var_15)) : ((~(((((/* implicit */_Bool) (signed char)9)) ? (12504862604829004739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)48)))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((5941881468880546877ULL) <= (((/* implicit */unsigned long long int) -472945459)))))))) * (max((197146551853847875LL), (((/* implicit */long long int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) 3470137436U);
                                arr_14 [(short)0] [(short)0] [(short)0] [(signed char)1] [i_4] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */unsigned int) ((max((((((/* implicit */long long int) 13U)) | (0LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-95)) * (((/* implicit */int) (unsigned short)37914))))))) / (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */long long int) (-(472945459)))) : (var_7)))));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= ((~(var_4)))));
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                arr_19 [i_6] [i_5] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)32753)))))));
                arr_20 [5LL] [5LL] = -831176993533130322LL;
            }
        } 
    } 
}
