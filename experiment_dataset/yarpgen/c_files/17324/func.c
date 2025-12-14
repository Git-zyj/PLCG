/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17324
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((arr_3 [2] [i_2 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0]))))) == (max((var_8), (((/* implicit */unsigned int) arr_1 [5U])))))))));
                    arr_8 [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_1 [i_2])) - (97)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))) : (arr_5 [(signed char)10] [i_1 - 1] [1LL]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */long long int) (short)-7438)))))))))));
                    var_14 = ((/* implicit */signed char) min((((((/* implicit */int) arr_7 [(signed char)5] [i_2 - 1] [(signed char)5] [i_2 + 4])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_1] [10U] [i_2] [(short)5] = ((/* implicit */int) arr_2 [i_2]);
                        arr_12 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_3 + 3])), (var_9)))))) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) var_3))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_15 [(short)6] [i_1] [i_1] [i_1] [(short)6] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2142696029)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))))) ? (max((((/* implicit */unsigned int) (-(-2142696040)))), (var_8))) : (((/* implicit */unsigned int) ((var_3) / (((/* implicit */int) var_5)))))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2])) == (((/* implicit */int) var_2)))))));
                        var_15 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_2] [6ULL] [i_2] [i_2 + 1] [i_2 + 4] [i_2])) ? (((/* implicit */int) arr_9 [i_2 + 3] [6] [6U] [i_2 + 4] [i_2 - 1] [(short)12])) : (((/* implicit */int) arr_9 [i_2 + 2] [2U] [i_2] [i_2 + 1] [i_2 + 1] [i_2])))), (((((/* implicit */_Bool) arr_9 [(unsigned char)2] [(signed char)0] [i_2] [i_2 + 2] [i_2 + 1] [12LL])) ? (((/* implicit */int) arr_9 [i_2] [(signed char)10] [i_2] [i_2 + 3] [i_2 - 1] [i_2])) : (((/* implicit */int) var_10))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8934)) >> (((((/* implicit */int) var_7)) - (6578)))))))) || (((/* implicit */_Bool) var_0))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)75))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) 2142696029)))))));
}
