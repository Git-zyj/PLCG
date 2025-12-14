/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169733
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
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min(((+((((_Bool)1) ? (arr_5 [i_2] [i_0]) : (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) 4118340233U)) ? (((/* implicit */int) (short)7168)) : (((/* implicit */int) (_Bool)1))))))), (max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) max((3461531287032332648LL), (((/* implicit */long long int) 176627052U)))))))));
                        var_18 ^= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (((((/* implicit */_Bool) arr_7 [i_3] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [18LL]))) : (6285895039187884055ULL))))), (((((/* implicit */_Bool) 176627055U)) ? (0ULL) : (((/* implicit */unsigned long long int) -7347713568121011307LL))))));
                    }
                    arr_11 [i_1] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (short)23634)), (36028797018439680LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((((((/* implicit */int) (signed char)-65)) + (2147483647))) << (((((/* implicit */int) var_8)) - (3252))))) != (((/* implicit */int) arr_4 [i_0 - 2] [i_2 - 1]))))))));
                    var_19 ^= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) arr_9 [i_0] [i_0]))))), (max((6285895039187884048ULL), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((1948242909) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) / (7347713568121011305LL))) : (((/* implicit */long long int) max((0U), (4294967281U)))))) >= (arr_16 [i_4] [i_4 - 1])));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 4; i_6 < 13; i_6 += 3) 
                {
                    arr_21 [(unsigned short)14] [(unsigned short)14] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551603ULL)) || (((/* implicit */_Bool) 22U)))))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_20 [i_4 - 2] [i_4 - 2] [i_6 + 3])))) <= (((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) var_12)))))))) : (((/* implicit */int) ((((/* implicit */long long int) 0U)) > (min((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_4] [i_5] [i_6]))))))));
                    arr_22 [i_4] [i_4] [i_4] &= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((arr_8 [i_4 - 1] [i_5] [i_5]) << (((((/* implicit */int) (signed char)126)) - (125)))))), (((((/* implicit */unsigned long long int) var_16)) ^ (1976662502272724028ULL))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_15 [i_4] [11])))) & (((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> (((-3LL) + (18LL))))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_3)));
}
