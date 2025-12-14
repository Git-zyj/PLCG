/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153345
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((long long int) 17669130676666581367ULL))));
        var_19 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) 9223372036854775789LL);
        var_21 = ((/* implicit */int) ((((unsigned int) arr_4 [i_1] [i_1 + 2])) == (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_22 = ((/* implicit */int) (_Bool)1);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((arr_7 [i_2 - 1]) << (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [11])))))))))))));
        arr_10 [i_2] [(unsigned char)14] = ((/* implicit */unsigned int) (-((((~(((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) < (((/* implicit */int) var_5)))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (2147483647)))) ? (min((((/* implicit */long long int) 15U)), (-4285702061232627401LL))) : (((/* implicit */long long int) 15U)))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2 - 1])))) > (7099702537713734642LL)));
    }
    for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_3] [i_3 + 1])) : (((int) arr_14 [i_3] [i_3]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3]))))))))));
        arr_15 [(signed char)23] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))))) < (((/* implicit */int) max((((unsigned char) arr_12 [i_3] [i_3])), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3 - 1]))) >= (7099702537713734643LL)))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_14 [i_3] [i_3]))));
    }
    var_27 = ((/* implicit */_Bool) max((((unsigned long long int) -5220958216996257256LL)), (((/* implicit */unsigned long long int) ((long long int) min((var_7), (((/* implicit */long long int) var_0))))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1147173374417185186ULL)) && (((/* implicit */_Bool) var_6))));
}
