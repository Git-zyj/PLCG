/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140809
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((int) var_18))) ? (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))))));
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) var_18))));
    var_22 -= (~(((/* implicit */int) ((((/* implicit */_Bool) (+(var_17)))) && (((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_2)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_23 = arr_0 [i_0];
                        var_24 = var_9;
                        arr_11 [i_0 + 2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0])) != (((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0]))))), (arr_7 [i_1] [i_2] [i_1 - 3] [i_1])));
                        arr_12 [i_3] [i_1] [i_1] [i_0 - 1] = ((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(arr_9 [i_0] [i_0] [i_0] [i_0 + 3]))))));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((arr_9 [i_4] [i_4] [i_4] [i_4]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))))), ((~(arr_9 [i_4] [i_4] [i_4] [i_4])))));
        arr_16 [i_4] = ((/* implicit */signed char) ((short) (-((+(((/* implicit */int) (signed char)40)))))));
        arr_17 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))));
        arr_18 [i_4] [i_4] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)32))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        arr_21 [i_5] [i_5 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), (var_5)))))))));
        var_26 = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [4LL]);
        var_27 |= ((/* implicit */short) 0U);
    }
}
