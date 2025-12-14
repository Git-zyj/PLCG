/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172511
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                    var_18 ^= ((/* implicit */unsigned char) ((short) arr_7 [(_Bool)0]));
                    arr_9 [i_1] [(unsigned short)12] [i_2] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_8 [i_2] [i_1] [i_1] [i_2 - 1]), (((/* implicit */signed char) arr_5 [i_0 - 2] [i_2])))))))), (min((min((var_2), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)40))));
        var_19 += ((/* implicit */short) ((((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) <= (((((/* implicit */int) arr_6 [(unsigned char)4])) * (((/* implicit */int) arr_6 [(short)6])))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 9738232964573932669ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_2 [2U])), (var_14)))))))));
        var_20 = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_21 &= (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63370)))));
}
