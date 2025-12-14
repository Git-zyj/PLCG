/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171980
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
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) var_8);
        arr_3 [i_0] [i_0] = var_5;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_8))))) : (((/* implicit */int) var_8))))));
        var_19 = ((/* implicit */short) arr_5 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_20 = ((/* implicit */short) max((((/* implicit */int) var_9)), (((arr_8 [i_1] [i_1] [i_2]) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2])) : (arr_2 [i_1 - 1] [i_2])))));
            var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7671578739889416702LL)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3109))) : (var_11))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))) : (min((((arr_1 [i_1]) ? (arr_4 [i_3]) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1]))))));
            var_22 = ((/* implicit */unsigned int) max((((signed char) (-(((/* implicit */int) arr_0 [i_1] [i_3]))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 536870880U)))))));
            arr_12 [i_3] [i_3] [i_3] = arr_7 [i_1];
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((((/* implicit */unsigned long long int) 909152003U)), (((((/* implicit */_Bool) arr_4 [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) -7671578739889416703LL))))))));
            arr_17 [i_1] [i_4] [i_4] = ((/* implicit */int) var_5);
            var_24 = ((/* implicit */unsigned char) var_15);
            arr_18 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 - 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1]))) : (var_4)))));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) ((arr_8 [i_1] [i_1 - 1] [i_1]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 1504235860U)) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */signed char) var_0);
        arr_23 [i_5] [i_5] = ((/* implicit */_Bool) (~(7671578739889416703LL)));
        arr_24 [i_5] = ((/* implicit */int) var_0);
    }
}
