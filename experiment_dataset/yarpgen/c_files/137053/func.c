/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137053
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(signed char)10]))))) ^ (((/* implicit */int) arr_2 [i_1 + 1]))));
                        var_17 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned char)9)));
                    }
                    var_18 |= ((/* implicit */short) var_9);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_0 [i_1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_6))) << (((((18446744073709551615ULL) % (((/* implicit */unsigned long long int) var_1)))) - (713571708ULL)))));
        }
    }
    var_21 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */long long int) var_8)) | (-2672921963472882680LL))))) : (((/* implicit */long long int) ((((var_6) ^ (((/* implicit */int) var_9)))) % (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_5)))))))));
    var_22 = ((/* implicit */unsigned long long int) var_12);
}
