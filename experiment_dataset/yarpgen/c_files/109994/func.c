/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109994
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
    var_11 |= ((/* implicit */short) (_Bool)0);
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((((-13) ^ (((/* implicit */int) var_8)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) - (max((max((((/* implicit */int) (short)23318)), (-13))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2 + 2] [i_1] [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_2 + 2] [i_4 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) 16758569103831021533ULL))) >= (((((/* implicit */int) var_6)) / (((/* implicit */int) (short)3456))))))) : (((/* implicit */int) (_Bool)0))));
                                var_15 = min((531333879), ((-(((/* implicit */int) (unsigned char)16)))));
                            }
                            var_16 = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [9U] [i_1 - 2]))));
                arr_13 [(short)2] &= ((/* implicit */int) (+((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_3)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (unsigned char)207);
}
