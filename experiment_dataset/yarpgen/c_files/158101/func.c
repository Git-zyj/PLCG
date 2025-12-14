/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158101
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0])), (((unsigned char) (unsigned short)40321)))))));
        var_17 = ((/* implicit */signed char) ((((2739733029164036210ULL) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) (short)-25970)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25970))) : (min((((/* implicit */unsigned long long int) 807735754)), (9520699265696981433ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_8))))))))));
        var_18 = ((/* implicit */short) ((((min((((/* implicit */int) arr_0 [i_0])), (1124451255))) == (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [(signed char)10] [(signed char)10]))))), (arr_0 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (807735756) : (807735756)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((33292288) == (((/* implicit */int) (unsigned char)11)))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)16474))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) 2739733029164036210ULL);
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) arr_1 [i_1] [i_1])) - (24))))), ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))) ? (max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)23641)) > (((/* implicit */int) var_0)))))))) & (((/* implicit */long long int) 2235134448U))));
    }
    var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-25970))));
}
