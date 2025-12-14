/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102082
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
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) (unsigned short)32637);
        arr_3 [i_0] = ((/* implicit */int) 9878748427688423834ULL);
        var_13 = ((/* implicit */long long int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_6 [(signed char)8]);
        arr_9 [i_1] = ((/* implicit */unsigned short) (-((-(min((arr_0 [i_1]), (((/* implicit */unsigned int) (unsigned char)193))))))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_14 = ((/* implicit */_Bool) arr_7 [i_2]);
        var_15 |= ((/* implicit */long long int) arr_5 [i_2]);
        var_16 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) | (((((/* implicit */_Bool) 807053994)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((/* implicit */long long int) (short)-16107))));
        var_17 = ((/* implicit */unsigned int) var_5);
    }
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_19 = ((/* implicit */long long int) arr_12 [i_3]);
        arr_16 [i_3] [i_3] = max((((/* implicit */unsigned short) arr_5 [i_3])), (var_2));
        var_20 = (-((-(min((((/* implicit */int) (unsigned short)32899)), (-1741783080))))));
    }
    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((!((!(((/* implicit */_Bool) (short)-1)))))), ((((!(((/* implicit */_Bool) arr_19 [i_4] [i_4])))) || (((/* implicit */_Bool) ((short) (signed char)33))))))))));
        var_22 ^= ((/* implicit */signed char) (~(3295503901313629223LL)));
    }
}
