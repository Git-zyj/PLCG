/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143029
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_2 - 1] [i_3 + 3])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) / (-8040021363668616679LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1]))))))));
                                arr_13 [(_Bool)1] [i_1] [i_2] [(_Bool)1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (signed char)-118);
                                var_14 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_12 [10U] [i_2] [i_3] [i_4])))) >= (((/* implicit */int) arr_9 [i_4] [i_3] [6] [i_1] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_14 [(signed char)5] [i_1] = ((/* implicit */unsigned short) arr_10 [2LL] [2LL] [(unsigned char)17] [i_1]);
                var_15 = ((/* implicit */short) (+((~(min((((/* implicit */long long int) arr_7 [i_1] [i_1] [2LL])), (var_4)))))));
                var_16 = (~(((/* implicit */int) (unsigned short)35438)));
                arr_15 [i_1] [i_0] = -5446782688443940652LL;
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_3);
}
