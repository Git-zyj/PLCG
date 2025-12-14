/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113091
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))) : (9223372036854775807LL)))));
                            var_12 = ((/* implicit */int) (_Bool)0);
                            arr_9 [i_3] = ((((int) arr_4 [i_1 + 1] [i_1 + 3])) << (((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 3])) ? (var_0) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 3])))) - (2030631643))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) (unsigned short)18164);
                            var_14 *= ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                var_15 += ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (unsigned char)0)))));
            }
        } 
    } 
    var_16 &= var_1;
}
