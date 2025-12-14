/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117726
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */short) (~(((((/* implicit */_Bool) min(((unsigned short)4591), ((unsigned short)60945)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (arr_6 [0ULL] [0ULL] [i_2 - 3] [i_2 - 3])))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) - (var_7)))) ? (((unsigned long long int) (_Bool)1)) : (((((unsigned long long int) var_16)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))))))))));
                    var_19 -= ((/* implicit */_Bool) min(((~((+(((/* implicit */int) var_9)))))), (((/* implicit */int) ((_Bool) arr_5 [i_0 - 2])))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (~(((unsigned int) (+(var_0))))));
        arr_9 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))) ? (((/* implicit */long long int) var_1)) : (((long long int) var_1))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18770))))), (var_5))) : (-8323046451480013669LL)));
}
