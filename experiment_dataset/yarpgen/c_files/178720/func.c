/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178720
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
    var_20 = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-115)))))));
    var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_4))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) 917101614)) ? (-166909268) : (14))) - (((var_12) / (var_15))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_22 &= ((/* implicit */short) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) var_6))))))), (min(((~(arr_4 [i_0]))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), ((+(((((/* implicit */_Bool) (signed char)89)) ? (var_4) : (var_4)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_24 = ((((((/* implicit */int) var_17)) + (2147483647))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) -138393954)) ? (arr_4 [i_2]) : (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_2] [i_0] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [13ULL])) ? (-7593688695641616633LL) : (((/* implicit */long long int) var_2)))))));
                        var_25 = ((/* implicit */_Bool) ((((arr_5 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18418))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [12U])))))));
                    }
                }
            } 
        } 
        var_26 &= ((/* implicit */_Bool) var_15);
        var_27 |= ((/* implicit */_Bool) arr_4 [i_0]);
        arr_9 [(short)4] &= (-(((/* implicit */int) arr_8 [12ULL] [12ULL])));
        var_28 = (((-(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [(short)16] [i_0] [(_Bool)1] [16ULL]))))) ^ (((/* implicit */int) (short)-22005)));
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) -9223372036854775786LL))));
}
