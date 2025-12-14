/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139265
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
    var_10 = ((/* implicit */short) ((_Bool) var_1));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3])) + (((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((int) var_5))));
                                arr_13 [i_0] [i_0] [5] [i_0] [i_2] [5] [i_0] = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [(signed char)11] [i_1] [i_2] [i_3] [i_4]))))) >= (((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (signed char)53)))) : (((/* implicit */int) ((signed char) arr_9 [(short)4] [i_1] [(_Bool)1] [i_3] [i_4])))))));
                                var_12 = arr_11 [i_0] [16U] [i_2] [i_2];
                                var_13 ^= ((/* implicit */signed char) var_7);
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-106)) == (((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_17 [i_2] [(unsigned char)12] [(unsigned char)13] [(unsigned char)12] = ((/* implicit */short) ((((((/* implicit */int) arr_12 [21ULL] [20LL] [20LL] [i_5] [i_5])) * (((/* implicit */int) arr_12 [14LL] [i_1] [i_2] [i_5] [i_5])))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [(short)14] [i_1] [i_0])) >= (((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_2] [i_2])))))));
                        arr_18 [i_2] [(unsigned char)4] [i_0] [i_5] [(unsigned short)4] [i_5] = ((/* implicit */_Bool) var_0);
                    }
                    var_15 = (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [(unsigned char)10] [i_1] [i_1] [i_0]))) + (var_5))))) == (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned int) ((-6583234863065450003LL) == (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
    var_17 = ((/* implicit */unsigned char) var_7);
}
