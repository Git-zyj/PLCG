/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16629
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
    var_10 = ((/* implicit */signed char) ((long long int) var_0));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (~(((long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)25045)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-94))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3785237072627248381LL))));
                                arr_16 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)10)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) >= (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)49228))))));
    var_12 = ((/* implicit */signed char) var_9);
}
