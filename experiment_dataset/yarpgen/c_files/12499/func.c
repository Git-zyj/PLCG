/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12499
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
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] [(signed char)12] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)(-127 - 1))), (-4456511951459788611LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) var_6)), (arr_2 [i_3] [i_4])))))) == ((~(max((arr_0 [i_4]), (((/* implicit */long long int) -1))))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4 - 1] |= ((/* implicit */_Bool) (-((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) -4456511951459788611LL)))))))));
                        }
                        var_13 += ((/* implicit */unsigned char) var_9);
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(arr_1 [(_Bool)1]))))));
                            var_15 = ((/* implicit */_Bool) max((4456511951459788610LL), (((/* implicit */long long int) ((unsigned int) var_2)))));
                        }
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 20; i_7 += 1) 
                        {
                            var_16 ^= ((/* implicit */short) min((arr_3 [i_0] [i_0] [i_0]), (max(((+(arr_17 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((var_11) <= (((/* implicit */int) var_2)))))))));
                            var_17 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4456511951459788610LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (588909674U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : ((+(3706057622U)))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4456511951459788611LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */int) arr_12 [(unsigned short)16] [i_7] [i_2 + 3] [i_7] [(unsigned char)1])) : ((-(arr_1 [i_0])))));
                            arr_25 [(_Bool)1] [i_5] [i_7] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_7] [i_0] [i_5] [i_7])) || ((_Bool)1)))))), (((/* implicit */int) arr_2 [i_0] [i_7]))));
                        }
                    }
                }
            } 
        } 
    } 
}
