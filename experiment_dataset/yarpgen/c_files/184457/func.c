/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184457
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) (unsigned short)47880)) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15953))));
                    arr_11 [i_0 - 1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_16 [i_3] [i_2] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) min((1858898116U), (1858898131U)));
                        var_14 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2 + 1] [i_3 - 1] [i_3]);
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                    {
                        var_15 *= min((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_4] [i_2])) ? (((((/* implicit */_Bool) 1858898112U)) ? (((/* implicit */unsigned long long int) arr_9 [(short)6])) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1])));
                        var_16 = max((((/* implicit */unsigned int) arr_17 [i_0] [i_4])), (686020308U));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)32762)))))))));
    var_18 = ((/* implicit */unsigned char) var_1);
}
