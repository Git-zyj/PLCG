/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144779
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
    var_12 |= ((/* implicit */signed char) (+(((/* implicit */int) max((var_3), (((var_4) < (var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (_Bool)1;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)7);
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))) ? (min((var_6), (((/* implicit */long long int) ((_Bool) arr_9 [i_1] [i_2] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))))));
                            arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((int) (signed char)-34));
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] &= ((/* implicit */int) ((_Bool) var_0));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 13; i_4 += 2) 
                {
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (_Bool)1);
                            var_15 = ((/* implicit */long long int) var_0);
                            arr_21 [(_Bool)1] [(_Bool)1] [i_4] [i_0] [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_10)), (arr_4 [i_1] [i_5 + 2])))), (var_8)))) && (max((((((/* implicit */_Bool) arr_19 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_4] [i_5])))), (arr_17 [i_0] [i_5 + 3] [i_0] [i_4 + 2] [i_0 + 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
