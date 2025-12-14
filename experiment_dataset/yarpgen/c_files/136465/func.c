/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136465
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
    var_20 += ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (arr_2 [3ULL])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_5 [(unsigned short)19] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_4 [24LL] [24LL] [24LL]));
            var_22 += ((((/* implicit */_Bool) ((int) arr_3 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (short)-21734)) ? (((/* implicit */int) arr_2 [19ULL])) : (((/* implicit */int) (short)21721)))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) ((short) (short)-21735))));
        var_24 += ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2]));
        var_25 = ((/* implicit */unsigned long long int) (short)21721);
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_26 = ((/* implicit */int) (short)-21734);
        arr_11 [i_3] |= (short)1867;
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)21733)))) : (((/* implicit */int) ((signed char) 8846594437449947845LL)))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) ((signed char) (short)21740))) : (((/* implicit */int) arr_2 [(unsigned short)14])))))))));
        arr_14 [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((int) ((signed char) arr_1 [i_4]))));
    }
}
