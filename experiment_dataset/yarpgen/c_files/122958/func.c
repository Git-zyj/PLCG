/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122958
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
    var_18 = ((/* implicit */_Bool) var_6);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1714575322)))) && (((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_14)))))))));
    var_20 = ((/* implicit */unsigned short) max((-5276709559706683793LL), (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 2]))))) && (((/* implicit */_Bool) (-(((arr_3 [i_0 + 3] [(unsigned short)20] [i_2 - 1]) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1])) : (1598793935U))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (short)32755))));
        var_25 &= ((/* implicit */unsigned int) ((((arr_5 [i_0 - 1]) ^ (((/* implicit */int) arr_1 [i_0 - 1])))) >> (((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 + 1] [(short)6]))))));
        var_26 = ((/* implicit */unsigned long long int) var_0);
    }
    var_27 = ((/* implicit */unsigned int) var_17);
}
