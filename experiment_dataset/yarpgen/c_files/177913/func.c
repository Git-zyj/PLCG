/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177913
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)33502)) : ((~(((/* implicit */int) arr_1 [i_0 + 3]))))))), ((((~(var_7))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))))));
        arr_2 [i_0] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (short)5830))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) <= (arr_4 [i_3] [i_3])));
                        arr_16 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_19)))) ? (min((((/* implicit */long long int) (unsigned short)32034)), (-4389014791633737931LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_2] [i_3 + 2] [i_2] [i_3 - 2]))) : (4294967295U))))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3 - 3])) ? (((/* implicit */int) arr_9 [i_1] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_3 - 2])))) % (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_19) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3 + 2])))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (524287ULL))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) ((3572553652U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_19)) : (var_7))) : (((((/* implicit */_Bool) (signed char)-38)) ? (5145569388031667260LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_7))));
}
