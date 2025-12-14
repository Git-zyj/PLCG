/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175824
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) -1336933787)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [20ULL] [i_2] = ((/* implicit */int) (unsigned short)1);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [4] [i_2] [i_3] |= ((/* implicit */short) (!(((/* implicit */_Bool) -1448037192))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) min((arr_7 [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 + 2] [i_0 + 2]))))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((500801683) + (((/* implicit */int) (unsigned short)1)));
                            var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -2004815761)))))));
                        }
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1]))))))));
                    }
                    for (int i_5 = 4; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_5 - 2]))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_0 [i_5 - 3]))))) : (((((/* implicit */int) arr_0 [i_5 - 3])) / (((/* implicit */int) arr_0 [i_5 + 2]))))));
                        arr_19 [i_0] [i_1] [i_2 - 1] [i_5 - 4] [i_0] = min((((((/* implicit */int) arr_5 [i_5])) % (((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [4]))))));
                    }
                }
            } 
        } 
    } 
}
