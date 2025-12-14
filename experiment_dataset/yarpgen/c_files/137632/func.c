/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137632
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1313410935)) ? (((-1312578726) + (((/* implicit */int) (short)-1)))) : (arr_0 [i_0])));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7782240776228404411ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)13]))) : (10664503297481147205ULL)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((arr_2 [i_0]) || (arr_2 [i_0])));
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)148)) ? (7782240776228404411ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (10664503297481147201ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151)))));
            arr_7 [i_1] = ((arr_3 [i_0] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [16LL] [i_0]))));
            var_18 += ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((var_8) / (arr_0 [i_0])))));
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) 7782240776228404417ULL);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [(_Bool)1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_0] [i_0]))) >= (arr_10 [i_0]));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned short) (-(arr_10 [i_0])));
            arr_15 [i_0] |= ((/* implicit */short) arr_3 [i_0] [i_2] [i_0]);
        }
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((int) (unsigned short)62778)), (((/* implicit */int) (short)6652))))), (((arr_3 [(_Bool)1] [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) arr_10 [i_3]))))))))));
        arr_19 [i_3] [i_3] = ((/* implicit */short) var_13);
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((2145331685) + (((/* implicit */int) (unsigned char)6)))) | (((/* implicit */int) (short)-19035)))) <= (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15360)))))))));
        arr_24 [(short)13] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1313410938) : (((/* implicit */int) var_10))));
    }
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (10664503297481147192ULL)));
    var_22 = ((/* implicit */long long int) var_1);
}
