/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130788
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (var_9)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15566627748465757045ULL)) ? (max((15720055429505965035ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))) ? (arr_7 [i_2] [i_1] [i_0] [i_0]) : (arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 3]))))));
                    var_13 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 15720055429505965026ULL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned char) 15720055429505965035ULL);
                        var_14 = ((15720055429505965035ULL) << (((2726688644203586562ULL) - (2726688644203586502ULL))));
                        var_15 = ((/* implicit */unsigned int) (unsigned char)8);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_16 *= ((/* implicit */signed char) arr_9 [i_2]);
                            arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2726688644203586580ULL)) ? (15720055429505965037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)179)))));
                        }
                    }
                    arr_17 [i_2] [(unsigned char)17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (7) : (((/* implicit */int) arr_9 [i_0])))) << ((((+(15720055429505965035ULL))) - (15720055429505965030ULL)))));
                    arr_18 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-91)) + (2147483647))) << (((arr_10 [i_0] [6ULL] [12] [i_2]) - (17808685900912421715ULL)))))), (arr_4 [i_1 + 2]))) - (min((((/* implicit */unsigned long long int) arr_15 [i_1 + 1] [i_1 - 2] [i_1 - 2] [1U] [i_1 + 2] [i_1] [i_1 - 1])), (arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned int) ((2726688644203586584ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))));
}
