/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146820
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) -1))))), (((((/* implicit */_Bool) 24)) ? (((/* implicit */long long int) -483805468)) : (arr_4 [i_1]))))), (((/* implicit */long long int) var_5))));
            var_12 = ((/* implicit */int) ((((((long long int) -9)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_4 [i_0]))))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        arr_7 [i_0] &= ((unsigned char) (-(max((10510004492712316115ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))));
        var_13 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0])))) : (((arr_4 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_10 [i_2])))) ? (min((((/* implicit */unsigned int) var_6)), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_2]))))) : (((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (_Bool)1)))))))));
        var_15 -= ((/* implicit */_Bool) max((min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2])))))));
        arr_11 [i_2] |= (_Bool)1;
        var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2147483646)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [8U]))))) ? (((((/* implicit */_Bool) -29)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) (signed char)-114)), (3915605977U)))))));
    }
    var_17 = ((((/* implicit */_Bool) var_4)) ? (10246961248858620486ULL) : (((/* implicit */unsigned long long int) (((((_Bool)1) && (var_5))) ? (max((((/* implicit */unsigned int) var_0)), (var_4))) : (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (var_4)))))));
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                arr_17 [i_3] [i_3 + 3] [i_3] = ((/* implicit */short) ((((_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (arr_12 [i_3]) : (arr_12 [i_3]))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (short)24389)), (var_1))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_18 [i_3] = ((/* implicit */unsigned char) max((((arr_12 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))), (arr_12 [i_3])));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1])) || (((/* implicit */_Bool) 3894320988U))));
                arr_19 [i_3] [i_3] [2LL] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) -4968446359224368098LL)))))) ? (((2777204069U) << (((/* implicit */int) ((short) arr_13 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))));
            }
        } 
    } 
}
