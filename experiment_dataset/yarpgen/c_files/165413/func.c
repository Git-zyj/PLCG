/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165413
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
    var_11 = ((/* implicit */unsigned long long int) (-(var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [2U])))), (min((arr_0 [19U]), (arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                var_13 ^= ((/* implicit */int) ((min((arr_5 [i_2 + 1] [i_0] [i_2 - 1]), (arr_5 [i_2 - 1] [i_1] [i_2 - 1]))) != (((/* implicit */unsigned int) ((int) min((arr_3 [i_1] [i_2]), (arr_3 [i_0] [i_2 - 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((arr_8 [i_2] [i_1] [i_2 - 1] [i_2] [i_2 - 1]) || (arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [i_1])));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)24)))) < (((((/* implicit */_Bool) arr_5 [(unsigned short)14] [i_3] [i_2])) ? (arr_5 [i_0] [i_1] [4]) : (arr_5 [i_0] [i_3] [i_0]))))))));
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    var_16 = ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)13] [i_3])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (var_9))) != (((/* implicit */int) arr_10 [18] [i_1] [i_2] [i_3])));
                }
                for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_4 - 4] [i_4])) & (((/* implicit */int) arr_2 [i_4 + 1] [i_4]))))) ? (((long long int) arr_8 [i_2 + 1] [i_4 - 2] [i_2 - 2] [i_4] [i_1])) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4] [i_1] [i_1] [16]))))) ? (((/* implicit */long long int) arr_6 [i_4] [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) (unsigned char)36)) ? (arr_15 [i_1] [9U]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [11] [i_1] [i_2 + 1] [i_4])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_18 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) << (((((4167442518U) / (arr_5 [19] [i_2] [22U]))) - (1U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6405227110712262511LL)))))) : (4167442488U)))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) << (((((((4167442518U) / (arr_5 [19] [i_2] [22U]))) - (1U))) - (1U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6405227110712262511LL)))))) : (4167442488U))));
                        arr_18 [i_0] [i_1] [i_2 + 1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 6405227110712262511LL)) == ((~(((unsigned long long int) var_2))))));
                        arr_19 [i_4 - 4] [i_2] [(unsigned short)22] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4 - 3])) - (((/* implicit */int) var_2))));
                    }
                }
            }
            var_19 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_7 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-108)), ((unsigned char)86)))), ((-(arr_4 [0LL])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) / (max((-8882200602081136526LL), (815070770123908582LL)))))));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_7)) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
}
