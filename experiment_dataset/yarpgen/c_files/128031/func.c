/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128031
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
    var_17 |= ((/* implicit */short) var_12);
    var_18 = var_4;
    var_19 = ((/* implicit */unsigned short) (~(var_13)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_0] = ((/* implicit */signed char) arr_3 [i_1]);
            arr_7 [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_12 [i_0] = arr_0 [i_0];
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) < ((-(36371640U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 36371640U)) ? (var_1) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) (unsigned char)111)) : (((((/* implicit */_Bool) 1604468926U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)36))))))));
        }
        for (int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            arr_15 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : ((-(var_10)))))));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28319)) / (var_8)))) < (((long long int) arr_13 [i_0] [i_3])))))));
            var_21 = (~(arr_3 [(short)0]));
        }
        var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))), ((~(-564363942)))));
        arr_17 [i_0] = ((/* implicit */signed char) arr_13 [(unsigned char)4] [i_0]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        arr_20 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5255643030898134278ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28319))) : (2433896462U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32767)) && (((/* implicit */_Bool) (unsigned short)64892))))))))));
        arr_21 [i_4] = ((/* implicit */long long int) arr_1 [(signed char)20]);
    }
}
