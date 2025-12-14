/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169709
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
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_1 + 2] [i_1 - 1]) % (((/* implicit */int) (unsigned char)162))))) ? (((-2305843009213693952LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-94))))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_12)) % (var_2)))), (((((/* implicit */long long int) ((/* implicit */int) (short)62))) + (274877906943LL)))))));
                    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_0])));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) (unsigned char)99)) ? (1650164961U) : (256252700U));
    var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((var_1) | (((/* implicit */int) (signed char)59))))) ? ((+(var_2))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (var_5))))))));
    var_22 = ((/* implicit */signed char) (unsigned short)17937);
}
