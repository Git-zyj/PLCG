/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148608
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-37)), (((((/* implicit */_Bool) 0ULL)) ? (-1227296638) : (((/* implicit */int) (signed char)127))))));
    var_19 = ((/* implicit */long long int) ((short) var_10));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((var_7) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) var_15);
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))), (min((min((19ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) var_4))))));
        arr_3 [4U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) < (max((var_0), (((/* implicit */unsigned int) var_11))))))), (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)0)))) % ((~(arr_9 [i_1])))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */int) (unsigned short)65523)) | (((/* implicit */int) var_15))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) >> (((((/* implicit */int) ((unsigned char) var_17))) - (87)))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) % (((/* implicit */int) var_17)))))));
    }
}
