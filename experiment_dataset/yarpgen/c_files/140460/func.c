/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140460
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : ((-((-(280925220896768LL)))))));
    var_19 += ((/* implicit */unsigned long long int) var_15);
    var_20 = ((/* implicit */unsigned short) var_15);
    var_21 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_22 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)52980))))) ? (((((/* implicit */int) (_Bool)1)) * (arr_1 [i_0]))) : (arr_1 [i_0 + 2])))), (6925397788314249498ULL));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_23 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_0 [i_0 - 2])))) * ((-(((/* implicit */int) arr_0 [i_0 + 2]))))));
            var_24 = ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_0 - 1])) + (arr_1 [i_0 - 2]))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)48304)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0 - 2]))))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12547)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0] [i_0 + 2])) ? (((/* implicit */long long int) 6)) : (max((((/* implicit */long long int) var_9)), (arr_5 [8ULL] [i_2] [7U]))))))))));
            var_26 = ((/* implicit */long long int) ((2490718670U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) && ((!(((/* implicit */_Bool) arr_6 [i_0] [i_2]))))))))));
            var_27 *= (((-((~(-7068629425636212819LL))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_7 [22LL] [i_2])) : (((/* implicit */int) (short)-2082))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((3547960534U), (((/* implicit */unsigned int) arr_2 [i_2]))))))));
        }
    }
}
