/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109390
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
    var_20 = (unsigned char)219;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (1555005080)));
                var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23849))) / (min((((/* implicit */unsigned int) var_4)), (2107740370U))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(2959836436U))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_6 [i_2]))));
        var_24 = ((/* implicit */unsigned char) var_10);
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((var_0) & (((/* implicit */int) ((signed char) (unsigned char)219))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_18))))))) ? (arr_6 [i_3]) : (((long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1)))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_10)) > (((/* implicit */int) arr_7 [i_3])))))))) : (((unsigned long long int) ((arr_8 [i_3]) ^ (3811570340586651075ULL)))))))));
    }
}
