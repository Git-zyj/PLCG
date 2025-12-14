/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116343
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
    var_16 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) 18014123631575040ULL)))));
        arr_2 [i_0] = ((/* implicit */long long int) var_13);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_7 [i_1] [i_2] [i_2] = (+(((((/* implicit */_Bool) (unsigned char)188)) ? (619992739U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))))));
            var_18 = ((/* implicit */int) (+((~(852646788U)))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */_Bool) var_10);
                arr_10 [(_Bool)0] [(_Bool)0] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1589483863)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_7)))) : (((((/* implicit */unsigned long long int) 3674974549U)) & (var_2)))));
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) arr_5 [i_1] [i_2] [i_1])) : (max((arr_9 [i_1] [i_1] [13ULL] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_1]))))));
            }
            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) 3396319518U)))))) ? (min((arr_3 [i_1]), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((short) (signed char)15))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_8 [(signed char)19] [(unsigned char)6] [14ULL])))))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_7))))));
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_1]);
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_4))));
    var_24 &= ((/* implicit */unsigned char) (-(((var_11) ? (var_15) : ((+(619992740U)))))));
    var_25 ^= ((/* implicit */unsigned char) var_13);
}
