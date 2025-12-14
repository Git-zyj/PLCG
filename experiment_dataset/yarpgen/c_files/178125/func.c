/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178125
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
    var_13 += ((/* implicit */unsigned int) 1530250367);
    var_14 = ((/* implicit */unsigned char) ((var_6) ? (((long long int) var_11)) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -1530250377)) ? (-1530250378) : (((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_12)) - (78))))) << (((max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (arr_5 [i_0] [i_0]))) - (2001319534U)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (1530250366)))) ? (((arr_6 [i_1] [i_1] [i_0]) << (((((/* implicit */int) (signed char)-91)) + (101))))) : (((/* implicit */unsigned int) arr_3 [i_2] [i_0] [i_0]))))));
                    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (arr_5 [i_0] [i_1])))))) : (((/* implicit */int) max(((unsigned char)237), (var_12))))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((12494880152740120888ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 + 1]))))))));
                    arr_12 [8U] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10622))) ^ (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2 + 1] [i_2 - 1]))) : (arr_6 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
