/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144717
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
    var_17 ^= ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_7 [(signed char)15] [2LL] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) max((((var_13) != (((/* implicit */int) var_10)))), (((_Bool) var_1))))), (((int) ((unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (var_13) : (var_13)))))) : (var_2)));
                                var_19 = (+(((/* implicit */int) (signed char)50)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                    var_21 = ((/* implicit */short) ((var_8) < (((/* implicit */int) arr_15 [i_0] [11U] [i_0] [i_1 + 1] [i_5 - 1] [i_5]))));
                }
                arr_18 [i_0] [i_0] [i_1 + 2] = (!(((/* implicit */_Bool) 3174703406230187901ULL)));
            }
        } 
    } 
}
