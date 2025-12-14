/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140943
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_11))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_20 ^= ((/* implicit */signed char) (-(arr_0 [(short)2] [(short)2])));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_21 += ((/* implicit */unsigned long long int) arr_3 [i_1]);
        arr_4 [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-1262200681205498135LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))))) ? ((-(((((/* implicit */_Bool) arr_2 [i_1])) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)25079))))) && ((!(((/* implicit */_Bool) var_12))))))))));
        var_22 += (unsigned short)25079;
    }
    for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_23 = ((/* implicit */_Bool) arr_1 [i_2]);
        arr_7 [8U] = ((/* implicit */unsigned int) var_10);
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [1ULL]))))) / (((/* implicit */int) ((unsigned char) arr_1 [i_2 + 2])))))));
        arr_8 [i_2] [i_2] = ((/* implicit */short) ((signed char) -2147483645));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_26 = (!(((/* implicit */_Bool) min((((unsigned long long int) (unsigned short)16383)), (((/* implicit */unsigned long long int) ((_Bool) var_7)))))));
}
