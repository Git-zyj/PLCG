/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138045
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (unsigned short)27550);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) ? (((arr_2 [i_1] [i_1]) % (max((((/* implicit */long long int) arr_3 [i_0])), (arr_1 [3ULL] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) arr_3 [i_1])), (arr_0 [i_0]))))))));
                    arr_6 [i_0] = ((/* implicit */long long int) ((_Bool) ((((long long int) var_15)) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1]))))))));
                    var_21 = ((/* implicit */signed char) ((arr_1 [i_0] [i_1 - 2]) | ((~(arr_1 [i_2] [i_1 - 2])))));
                    arr_7 [i_0] [6U] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_1 - 2] [i_1 - 1]);
                }
            } 
        } 
        arr_8 [(unsigned short)2] |= (unsigned short)37986;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_14 [i_0] [i_0] [i_4 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_4 - 1] [i_0] [i_4])) : (arr_10 [i_4 + 4])))) && (((/* implicit */_Bool) max((arr_2 [i_3 + 1] [i_4 - 1]), (((/* implicit */long long int) var_4)))))));
                    arr_15 [i_4] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) (~(((((unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_4])))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((arr_11 [(unsigned short)1] [i_0]), (((/* implicit */unsigned char) ((signed char) arr_9 [i_0] [i_0] [16U])))));
    }
    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27550))));
}
