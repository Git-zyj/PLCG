/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124429
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((unsigned char) (signed char)1);
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_8))));
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) 2071479468);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2071479469)) ? (((/* implicit */int) (signed char)52)) : (2071479468))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) 0U))))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2685992778U))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned short) ((1608974518U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53)))));
                        arr_14 [i_4] [i_2] [i_1] = ((/* implicit */short) (-(((max((-2071479469), (((/* implicit */int) (signed char)120)))) / (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))))))));
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_5]))))))))));
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2)))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) << (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 4799597544920230808LL)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_16 [i_1] [i_1])))) : ((~(((/* implicit */int) (signed char)52))))));
            arr_18 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_3 [i_1]))))));
    }
}
