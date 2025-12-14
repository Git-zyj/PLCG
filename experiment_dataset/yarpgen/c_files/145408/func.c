/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145408
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
    var_10 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) var_9))));
    var_11 = ((/* implicit */long long int) ((unsigned short) min((var_1), (((/* implicit */unsigned long long int) ((164483526U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [1U] = var_9;
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)20036))))))) && (((/* implicit */_Bool) ((var_5) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)2620)) >> (((4130483756U) - (4130483726U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (var_4))))) : (((((/* implicit */long long int) var_0)) ^ (4611123068473966592LL))))) : (var_7)));
        var_13 ^= ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~(min((((((/* implicit */int) var_2)) | (var_3))), (((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 4611123068473966583LL))));
                    }
                } 
            } 
        } 
    }
}
