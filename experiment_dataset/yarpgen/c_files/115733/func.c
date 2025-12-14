/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115733
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
    var_13 = ((/* implicit */unsigned short) ((((-7266422412981660047LL) > (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (14102092215716226585ULL)))) : (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_10);
        var_14 = ((/* implicit */short) arr_0 [i_0 - 1]);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((unsigned int) max((14102092215716226585ULL), (14102092215716226564ULL))));
        var_16 = ((/* implicit */int) (+(-8143310042253387560LL)));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_2 - 1]) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))))) | (4344651857993325031ULL)));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_13 [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 3])))) ? (((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3 + 1] [i_3 - 2] [4])) / (4344651857993325019ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_3] [i_3 + 1] [i_3 + 4] [i_3]) <= (arr_13 [i_3] [i_3 + 1] [i_3 - 2] [i_3])))))));
            }
            var_19 = ((/* implicit */unsigned char) var_6);
        }
        for (int i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_7))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    {
                        arr_23 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551601ULL)))))));
                        arr_24 [i_1] [(signed char)4] [1ULL] [1ULL] = ((/* implicit */short) 0);
                    }
                } 
            } 
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) 943473390644076186LL);
            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), ((((-(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85)))))));
        }
        var_23 = ((/* implicit */signed char) (-(arr_26 [i_7] [i_7])));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_3)))))) ? (max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 2137529562U)) : (0ULL))), (((/* implicit */unsigned long long int) (unsigned char)191)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))));
}
