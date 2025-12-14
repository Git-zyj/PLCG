/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137872
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((+(arr_0 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_1]))))))), (max((-3766212192657484302LL), (((/* implicit */long long int) (unsigned char)240))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2]))), (min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 2])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2]);
        var_14 = ((/* implicit */unsigned char) var_12);
    }
    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        var_15 = (unsigned char)112;
        arr_12 [i_3] = ((/* implicit */_Bool) arr_0 [i_3 + 1]);
    }
    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [20U] [i_4 - 1] = ((/* implicit */int) (unsigned char)22);
                    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) var_10))), (((arr_18 [i_4] [i_4] [i_5 + 1] [i_6]) / (arr_18 [i_4] [i_4] [i_5 + 2] [i_6])))));
                    arr_20 [16ULL] [16ULL] [i_5] [i_6] = arr_18 [i_5] [i_5] [i_5 + 2] [i_5 + 2];
                    var_17 = (~(((/* implicit */int) (unsigned char)24)));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_18 += ((/* implicit */short) max((((/* implicit */long long int) ((unsigned int) arr_22 [17LL] [17LL]))), (var_6)));
                        var_19 += ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) % (arr_22 [i_6] [0U]))))), (((unsigned short) var_10))));
                        arr_23 [i_4 + 1] = ((/* implicit */long long int) ((unsigned long long int) var_3));
                    }
                }
            } 
        } 
        var_20 ^= ((/* implicit */int) min((((/* implicit */long long int) ((signed char) arr_16 [i_4 + 1]))), ((((!(((/* implicit */_Bool) 1769008399U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_17 [i_4] [i_4 + 1] [i_4])))) : (((long long int) arr_22 [i_4 - 1] [i_4]))))));
        var_21 = ((/* implicit */_Bool) ((unsigned int) max((arr_21 [i_4] [(unsigned char)11] [i_4 + 1] [i_4 - 1] [i_4] [i_4]), (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)212)))))));
        arr_24 [i_4] [i_4 + 1] = ((/* implicit */unsigned int) var_12);
    }
    var_22 = ((/* implicit */unsigned int) ((((var_5) / (((/* implicit */unsigned long long int) max((4148365860U), (((/* implicit */unsigned int) (signed char)-9))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1081451531)))) < (min((var_11), (((/* implicit */long long int) var_1))))))))));
}
