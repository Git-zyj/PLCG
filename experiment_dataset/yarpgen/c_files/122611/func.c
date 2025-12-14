/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122611
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
    var_10 |= ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_11 = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) min(((short)-26079), (((/* implicit */short) (_Bool)1))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned char) var_7);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) - (((3ULL) - (((/* implicit */unsigned long long int) arr_1 [(short)0])))))))))));
            }
        }
        arr_8 [i_0 + 2] = ((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (min((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_0)))), (((/* implicit */int) (unsigned short)8192))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */int) (unsigned short)8176)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */long long int) arr_6 [i_0])) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0])))) ? ((((_Bool)1) ? (-1440232586) : (((/* implicit */int) (unsigned short)8191)))) : (((/* implicit */int) arr_2 [(unsigned char)2] [(unsigned char)4])))))))));
        var_15 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]);
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) < (((long long int) 18446744073709551614ULL))))) << (((min((5333075478837170782ULL), (((/* implicit */unsigned long long int) 127)))) - (125ULL)))));
}
