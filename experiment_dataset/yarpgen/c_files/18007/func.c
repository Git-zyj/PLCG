/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18007
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((var_8) >= (((/* implicit */unsigned long long int) var_5)))) ? (((/* implicit */unsigned long long int) ((var_1) - (var_1)))) : (max((var_7), (var_7))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) var_8);
                            arr_13 [i_0] [5LL] [i_1] [(unsigned char)15] [i_0] [i_3] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
                var_12 = var_10;
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18001758112464263147ULL)))) || ((!(((/* implicit */_Bool) var_0))))));
        arr_17 [(unsigned char)14] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) var_2))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6265729773253955754LL)) ? (-1963526176070239319LL) : (((/* implicit */long long int) 4243941182U))));
        arr_22 [i_5] [(unsigned short)3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    }
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_8))));
}
