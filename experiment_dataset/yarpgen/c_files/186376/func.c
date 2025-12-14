/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186376
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (min((((/* implicit */unsigned int) (unsigned char)159)), (min((((unsigned int) 3934306287U)), (((/* implicit */unsigned int) 734837722))))))));
                    var_13 ^= 360661008U;
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_6)), ((-(var_3)))));
    /* LoopSeq 2 */
    for (int i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) -5660890)) || (((((/* implicit */unsigned int) (-(1674393053)))) < (((unsigned int) arr_3 [i_3 + 1] [(unsigned char)12]))))));
        var_16 += ((/* implicit */unsigned int) ((360661025U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_9 [i_4] [i_4])))) ? ((+(arr_9 [i_4] [i_4]))) : ((-(arr_9 [i_4] [i_4])))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)176))));
    }
    var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8))))));
}
