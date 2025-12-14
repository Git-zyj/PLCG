/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125178
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
    var_15 -= ((/* implicit */long long int) (-((+(((/* implicit */int) var_8))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) 3531682916U))), (((unsigned int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_17 = arr_1 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+(var_0)));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (7445538905325523503ULL)))));
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned char) arr_6 [i_0]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((unsigned long long int) var_8)) * (((unsigned long long int) (unsigned char)211))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (6932961881920283429LL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_1))), (var_9))))) / (min((-2880759517571460501LL), (((/* implicit */long long int) (unsigned char)0)))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) (short)30204)) + (((/* implicit */int) (unsigned char)13))));
        var_24 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
}
