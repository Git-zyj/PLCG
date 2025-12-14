/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184712
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = max((((/* implicit */unsigned long long int) (unsigned short)28799)), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) var_9))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)64509)) < (((/* implicit */int) (signed char)-102)))))));
                    var_13 = ((/* implicit */short) (signed char)80);
                    var_14 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1479633478)) ? (((/* implicit */int) (unsigned short)28799)) : (((/* implicit */int) (unsigned short)36737))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_12 [(unsigned short)1] = ((/* implicit */long long int) min((min(((-(arr_0 [i_3]))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))))), (((/* implicit */unsigned long long int) var_10))));
        arr_13 [5LL] [5LL] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [i_3] [i_3] [i_3] [(unsigned char)9]), ((signed char)79))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8220158208319844274ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (signed char)13))))) : (arr_10 [i_3])))));
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_3] [(signed char)4]), (((/* implicit */int) (signed char)76))))) ? (((var_0) / (((/* implicit */long long int) arr_11 [i_3] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (1504948328) : (arr_11 [i_3] [i_3]))))));
    }
}
