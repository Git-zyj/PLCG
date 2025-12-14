/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187108
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [4ULL])) >= (((/* implicit */int) var_10))))) <= (((/* implicit */int) (signed char)-1)))))));
                        var_12 *= arr_2 [(signed char)9];
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (signed char)-5))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) + (((arr_7 [i_0 + 1] [i_1] [i_3] [i_3 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)19)))), (((/* implicit */int) arr_0 [i_2]))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((((/* implicit */int) var_2)) << (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)8))))) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                        }
                    }
                } 
            } 
        } 
        var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)2]))) : (arr_9 [i_0] [i_0] [i_0 + 1] [i_0]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [3LL] [i_0] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) (signed char)19)))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)5)) || (((/* implicit */_Bool) (signed char)20))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)20)) | (((/* implicit */int) (signed char)0))));
    var_18 = ((/* implicit */signed char) var_6);
    var_19 = (+(((((((/* implicit */int) var_5)) & (((/* implicit */int) (signed char)-19)))) >> (((/* implicit */int) (signed char)20)))));
}
