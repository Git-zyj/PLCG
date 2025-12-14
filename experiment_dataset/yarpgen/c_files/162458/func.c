/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162458
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_19 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7755)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)114))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_3 [i_3]))));
                        var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(0U))))));
                        arr_9 [i_0] [i_1 + 1] [i_0] = ((/* implicit */signed char) (-(min((arr_3 [0U]), (((/* implicit */unsigned long long int) var_9))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_7 [(signed char)9] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2])), (((((/* implicit */_Bool) arr_2 [i_0] [8ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17737))) : (arr_6 [4U] [i_0 + 1] [4U]))))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [4] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [(unsigned short)0])))))) : (max((((/* implicit */long long int) var_1)), (arr_2 [i_0] [2U]))))) << ((((-(((/* implicit */int) (short)-17740)))) - (17715))))))));
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
    }
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(-7129382008432205193LL))))));
}
