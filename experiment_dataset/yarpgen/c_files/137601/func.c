/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137601
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
    var_10 = ((/* implicit */int) min((var_10), ((+(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) (~(-945169686)))))))))));
    var_11 = (~(var_9));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0])))));
                                var_12 = ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) 2078512814U)), (-1414221104159002866LL)))))) ? (3695436097809613388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [16LL] [i_2] [i_3] [i_0] [i_2])) <= (((/* implicit */int) arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [(unsigned char)17] [i_0]))))), (arr_10 [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    var_13 |= ((/* implicit */unsigned int) (+(arr_8 [i_0] [13ULL] [i_1] [i_2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((arr_12 [i_0] [i_0] [i_0] [(signed char)7] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [(unsigned char)4] [i_1] [4ULL])) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_5] [i_2] [i_0])) ? (arr_7 [1LL] [i_1 - 1] [i_0]) : (var_9)))))));
                                var_15 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 1] [i_1 - 2])))), (((/* implicit */int) arr_17 [i_0] [(signed char)0] [i_1 - 2]))));
                                var_16 = (!(((/* implicit */_Bool) max((arr_16 [i_0] [i_1] [i_1 - 1] [10ULL] [i_6]), (arr_16 [i_0] [i_1 - 2] [i_1 - 1] [i_5] [i_0])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)7])), (arr_6 [i_2] [i_0] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [13LL] [i_1 - 2] [3U] [i_2] [i_1 - 2])) <= (((/* implicit */int) arr_16 [i_0] [i_0] [i_1 + 1] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
}
