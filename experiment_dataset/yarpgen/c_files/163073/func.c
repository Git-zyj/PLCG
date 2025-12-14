/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163073
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_10 ^= ((/* implicit */long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_6 [(unsigned char)2] [i_1] [i_4 - 1])) ? (-600339079) : (((/* implicit */int) arr_6 [i_3] [i_1] [8ULL])))))), ((+(-600339080)))));
                                var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -703927265694398391LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (1521138081725031736LL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) arr_4 [(short)5] [5])), (arr_0 [i_0])))))));
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_11 [i_0] [(unsigned char)9] [i_3] [(unsigned char)4]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */unsigned long long int) (short)-18938);
                    arr_18 [i_0] [i_1] [0LL] [(unsigned char)8] &= ((/* implicit */unsigned long long int) max((max((-1034024729), (1165293532))), (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 2]))));
                    /* LoopSeq 1 */
                    for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_14 [9] [(unsigned char)11] [i_1 + 1] [(unsigned char)11] [i_5 + 2] [i_5 - 1] [i_5 - 1]) ^ (((/* implicit */int) arr_3 [i_5 - 2])))))));
                        var_14 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_13 [i_2] [(short)0] [5])) ? (((/* implicit */int) (unsigned short)20774)) : (((/* implicit */int) var_2)))) % (((/* implicit */int) var_2))))));
                    }
                    var_15 = ((/* implicit */unsigned char) ((long long int) (-(arr_8 [i_1 - 1] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */short) ((long long int) var_8));
    var_17 += ((/* implicit */unsigned char) (-(-1034024751)));
}
