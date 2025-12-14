/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179397
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (short)-6770);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) (~(arr_2 [i_1] [i_0])));
                            var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_5 [i_1] [(signed char)6])), (var_13))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)6770)) == (((/* implicit */int) (short)-21949))))))))) ? (((/* implicit */int) max((arr_5 [(signed char)10] [(signed char)10]), (arr_4 [i_2 + 2] [i_2 + 2] [i_3 - 1])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) min(((short)-10110), ((short)-6770)))) : ((~(((/* implicit */int) var_2))))))))));
                            var_18 = ((/* implicit */unsigned int) (signed char)112);
                            arr_11 [i_0] [i_1 - 1] [i_2 + 2] [i_3] = ((/* implicit */short) ((unsigned int) arr_9 [i_3] [i_3 + 2] [i_1 + 3] [i_1] [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
}
