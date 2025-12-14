/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138504
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
    var_14 = ((/* implicit */unsigned short) ((signed char) var_0));
    var_15 = ((/* implicit */short) (-(7ULL)));
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_4))));
    var_17 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) (-(505305828))))), (((((/* implicit */int) arr_4 [i_1])) << ((((-(((/* implicit */int) arr_1 [i_1 - 2])))) - (26417)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_1] [i_0]));
                        arr_11 [i_0] [2] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) + (((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)7] [i_3])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [14])))))));
                        arr_12 [i_0] [i_1 - 1] [i_1] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_1 - 2] [i_0]) >> (((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]) - (6017195482896444404ULL)))));
                        var_19 += ((/* implicit */unsigned char) (unsigned short)8638);
                    }
                    arr_13 [i_1] [i_0] [(unsigned char)12] = ((((/* implicit */int) (unsigned short)210)) + (((/* implicit */int) arr_1 [i_1 + 1])));
                }
            } 
        } 
    } 
}
