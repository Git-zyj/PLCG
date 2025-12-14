/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174779
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned char)5])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((~(((/* implicit */int) arr_2 [i_0] [(unsigned char)8] [i_1]))))))) ? (((((/* implicit */_Bool) (short)14914)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (short)23858))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_3 + 1] = ((/* implicit */signed char) arr_8 [i_2] [i_2 + 1] [(_Bool)1] [i_2 + 1] [(unsigned short)1] [i_2]);
                            var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)254)))) - (((/* implicit */int) (short)23858))));
                            var_18 = ((/* implicit */unsigned char) ((((long long int) var_15)) ^ (min((var_12), (((/* implicit */long long int) arr_6 [i_2] [i_2 - 1] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((/* implicit */int) var_15)) + (((/* implicit */int) var_4)));
}
