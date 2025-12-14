/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163542
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
    var_15 &= ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */unsigned long long int) var_11)) % (5438694441838429360ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_3);
                    var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1] [i_1] [i_0]) ? (((/* implicit */int) (short)2048)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_4 [(signed char)20] [(signed char)20] [4LL] [(signed char)20])))) : (((/* implicit */int) var_3))))) : (var_10)));
                    var_19 *= (_Bool)0;
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((unsigned long long int) arr_1 [i_0 + 3])) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_12);
        arr_9 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((arr_0 [(unsigned short)2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3] [i_3]))) : (2747145569U))) : (arr_2 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_4 [i_3] [(unsigned short)7] [(unsigned short)7] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5808))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) ((-3567449301300997735LL) < (((/* implicit */long long int) -386828044)))))), (max((9223372036854775798LL), (((/* implicit */long long int) (signed char)120))))));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) var_11);
        arr_14 [i_4 + 2] = min((1983318082U), (((/* implicit */unsigned int) -655973500)));
    }
}
