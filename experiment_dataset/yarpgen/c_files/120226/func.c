/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120226
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
    var_14 = ((/* implicit */int) (short)6647);
    var_15 = ((/* implicit */int) ((((/* implicit */int) max(((short)6641), (((/* implicit */short) var_10))))) < (((/* implicit */int) ((unsigned char) min((var_1), (((/* implicit */unsigned int) (short)-6648))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)224))))))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)-6648))) ? (((((/* implicit */int) (short)6631)) >> (((arr_0 [i_0]) - (3300513931707256509ULL))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), ((unsigned char)0))))) ^ (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6647))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) (short)6638))))), ((short)-833)));
        arr_5 [10ULL] |= ((/* implicit */short) 3899509231U);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2] [1U])) << (((((/* implicit */int) arr_3 [i_2])) - (38)))));
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) ((signed char) 10550005043671396156ULL)))))));
        arr_9 [i_2] [i_2] = (unsigned char)16;
        var_21 = ((/* implicit */signed char) (unsigned char)20);
    }
    var_22 |= ((unsigned long long int) var_6);
    var_23 |= ((/* implicit */signed char) ((var_11) << (((((((long long int) (short)-6623)) / (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))) - (179LL)))));
}
