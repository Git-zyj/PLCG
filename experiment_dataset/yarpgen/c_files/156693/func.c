/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156693
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_14 &= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)12035)) : (((/* implicit */int) (unsigned short)53501))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_2] [i_2] [i_1] [i_1] = var_8;
                            arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)53493)) << (((7101512122547411014LL) - (7101512122547411004LL)))));
                            var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)12035)) ? (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53493))) : (10007979640219174169ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [14] [(signed char)8] [i_2]))))), (70368744177663ULL)));
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1]))))), (((((/* implicit */_Bool) -2068783509)) ? (0) : (((/* implicit */int) (short)32751))))));
                            arr_12 [i_1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)12035))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
    var_17 &= ((/* implicit */long long int) 8438764433490377467ULL);
}
