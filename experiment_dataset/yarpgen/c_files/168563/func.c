/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168563
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_0])) ? (arr_7 [i_1 + 3] [i_0]) : (arr_7 [i_1 + 1] [i_0])))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned int) (+(arr_7 [i_0] [2U])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) 18395580177860514207ULL);
                                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023U)) ? (1039U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */_Bool) arr_12 [(short)2] [(short)4] [i_2] [i_2] [i_2])) ? (2290273766U) : (1091626443U))) & (min((((/* implicit */unsigned int) (_Bool)1)), (2132136321U))))) : (var_2)));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (-1149224694)))) ? (((int) 789280993)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned char)3] [i_4 + 1] [i_1 - 1])) < (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_2 + 2] [i_1 - 2] [i_0]))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (337338880U)))) ? (455759139898484754ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [10U] [i_1] [i_2]))) ^ (arr_4 [i_2]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1586562250)), (8388607U)))) ? (((((/* implicit */_Bool) ((unsigned int) (short)-1024))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_10)))))))) : (var_0)));
    var_20 &= ((/* implicit */signed char) (short)-1);
}
