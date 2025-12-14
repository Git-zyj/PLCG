/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111091
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [(_Bool)1] [i_0] |= ((/* implicit */unsigned short) max((var_0), (((/* implicit */long long int) arr_2 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) (unsigned short)30852);
                                arr_15 [(unsigned char)13] [4LL] [i_2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_9 [i_4] [i_4 - 1] [(unsigned char)16] [(unsigned short)7] [i_4]), (arr_9 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */int) max((arr_1 [i_2] [i_2 + 1]), (arr_1 [i_2] [i_2 - 2])))), (((((/* implicit */int) arr_1 [i_2] [i_2 - 2])) | (((/* implicit */int) arr_1 [i_2] [i_2 - 2]))))));
                    arr_17 [i_0] [i_2] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((((2764489805U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
}
