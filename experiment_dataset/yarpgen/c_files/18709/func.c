/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18709
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
    var_17 = ((/* implicit */unsigned char) var_14);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((arr_0 [i_0]) - (3270154922U)))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) (~(arr_0 [i_1 - 2])));
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [(unsigned short)10] [i_1 + 1]))));
            var_22 = ((/* implicit */short) var_2);
        }
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 8U)) / (7ULL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_1 [i_2 + 1] [i_2 - 1]))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (short)16))))) : ((+(((/* implicit */int) (short)-21291))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_26 -= ((/* implicit */short) (-(arr_8 [i_3] [i_3])));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_8 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) <= (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) var_4))));
}
