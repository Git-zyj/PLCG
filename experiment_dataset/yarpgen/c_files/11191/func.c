/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11191
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
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) ? (-1907420849) : (((/* implicit */int) (unsigned char)61))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) -1907420849)));
                            var_16 = ((/* implicit */signed char) ((unsigned char) (unsigned short)65523));
                            var_17 = ((/* implicit */short) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
                arr_10 [(unsigned short)1] = ((/* implicit */_Bool) (unsigned short)25528);
            }
        } 
    } 
}
