/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108782
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0 + 3] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */signed char) ((arr_2 [i_0] [(signed char)5]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))), ((signed char)-40))))));
                var_13 = ((/* implicit */unsigned char) ((((_Bool) (+(((/* implicit */int) (unsigned short)57147))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) : ((-(((((-4433844648729461013LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (26774)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (signed char)64))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_4])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (signed char)-31)))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 134217727))))) - (arr_11 [i_2] [i_3 - 4] [i_1])));
                                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [6] [i_0 + 3] [i_0 + 3] [i_0 + 3])) ? (arr_13 [i_4] [i_4] [i_4] [i_3 - 4] [i_0 + 3]) : (arr_13 [(unsigned short)3] [(short)4] [(unsigned short)8] [i_0 + 2] [i_0 + 3])));
                            }
                            var_18 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-11)))))));
                        }
                    } 
                } 
                arr_15 [i_0] &= ((/* implicit */unsigned short) arr_9 [i_0 + 3] [i_1]);
            }
        } 
    } 
    var_19 = min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)0));
}
