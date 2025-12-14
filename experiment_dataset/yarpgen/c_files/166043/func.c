/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166043
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
    var_14 = var_6;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)43)), (4294967289U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 239460384U)))))) : ((-(min((var_5), (((/* implicit */unsigned long long int) 1624656904U))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((693334384U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1624656912U)))))))) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))))))))));
        var_17 = ((/* implicit */unsigned char) 1624656912U);
        var_18 = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0] = ((/* implicit */unsigned short) 3468550850U);
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_2 [i_1])) / (var_4)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((var_13) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                    var_20 += ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)44))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 - 3]))));
                }
            } 
        } 
    }
    var_23 *= ((/* implicit */signed char) var_6);
}
