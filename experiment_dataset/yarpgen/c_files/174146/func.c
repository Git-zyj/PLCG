/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174146
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [(unsigned char)16] [i_0] [i_2 - 2] [i_2]), (((/* implicit */short) (signed char)44)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) & (var_3)))));
                    var_12 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [8U] [i_2] [i_2 - 1] [i_2]))))), (min((((/* implicit */unsigned long long int) var_1)), (arr_3 [(short)15] [i_2 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_10 [i_0] [9U] [i_2] [i_0] [i_3]);
                                arr_14 [i_0] [(short)8] [8U] [i_0] [11] = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-34)) ^ (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (signed char)37);
}
