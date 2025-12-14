/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174399
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
    var_18 = ((/* implicit */int) ((_Bool) var_1));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_16))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((((unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)-80)) ^ (((/* implicit */int) (signed char)-124)))), (((/* implicit */int) ((signed char) var_12))))))));
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) * ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [(signed char)1]) : (((/* implicit */unsigned long long int) var_10))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 24; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned long long int) (unsigned short)127)))));
                        var_23 = (-(arr_13 [i_1] [i_2 - 2] [i_1] [i_3] [i_3 + 1]));
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)79));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_14 [i_6] [i_6 + 2] [i_6] [(signed char)17] [i_5 - 1]))));
                    arr_20 [(signed char)20] &= ((/* implicit */unsigned short) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15990)))));
                }
            } 
        } 
        arr_21 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1]))));
        var_26 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-124))));
        var_27 = (-(((/* implicit */int) arr_11 [8] [0U] [8])));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_16 [i_7 - 1] [i_7 + 1]) > (((/* implicit */int) arr_9 [i_7 - 1]))));
        arr_25 [i_7] = (+(((/* implicit */int) ((unsigned short) (unsigned char)0))));
    }
}
