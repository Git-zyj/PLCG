/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171633
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) (short)-11742)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-1275181984), (-1275181980))))))) : (((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_4)))) ^ (max(((-2147483647 - 1)), (-874675069)))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [(unsigned char)3] [i_3] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)125))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] [i_2] = arr_6 [i_1] [i_3];
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 + 1]);
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_8)))) == (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)11742))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_2))));
}
