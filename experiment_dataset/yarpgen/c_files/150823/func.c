/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150823
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 -= ((/* implicit */signed char) (((-(min((var_1), (((/* implicit */unsigned int) var_3)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(3205298306U))))))))));
    var_12 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */short) (signed char)71))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) max(((-(max((var_4), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9219)) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((~(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [(unsigned short)15] = ((/* implicit */unsigned short) var_3);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) min((var_6), ((_Bool)1)))) + (((/* implicit */int) (_Bool)0)))));
                    var_15 -= (((+(((/* implicit */int) (unsigned short)4496)))) & ((-(((/* implicit */int) arr_5 [i_2 - 4] [i_2 - 4] [i_1])))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_7)))))), (max((3952862207U), (((/* implicit */unsigned int) min((((/* implicit */short) var_5)), ((short)0))))))));
    }
}
