/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106093
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)30620))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-91)) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (max((((/* implicit */long long int) var_15)), (arr_4 [i_1] [17ULL] [i_1]))))) - (49LL)))));
                        var_20 = min((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_4 [i_3] [17ULL] [i_1]))) || ((!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0]))))) : (((/* implicit */int) ((unsigned char) var_6))))));
                        var_21 *= ((/* implicit */signed char) ((6145834051884449662LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)4088)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) (+(var_0)));
        var_22 += ((/* implicit */_Bool) (~(((2711998150U) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)198)))))))));
        arr_13 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((arr_4 [(_Bool)0] [(_Bool)0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((arr_4 [(unsigned short)20] [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_6)), (var_5)))))) - (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */unsigned long long int) var_9)) : (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
}
