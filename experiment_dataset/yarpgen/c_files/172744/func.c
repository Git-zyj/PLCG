/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172744
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */long long int) arr_3 [i_0])), ((+(((long long int) arr_2 [(signed char)14] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_0] [i_0] [i_2] [i_3] [i_4] [12ULL] = ((/* implicit */unsigned char) max((arr_1 [i_0 + 3]), (arr_1 [i_2])));
                                var_20 = ((/* implicit */int) (unsigned char)149);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */int) var_15);
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
