/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134910
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((var_5), ((unsigned short)33777)))), (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (3221952206552906699ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0 - 2] [i_2]), (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) -2372042426044316855LL)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)31770)))))))));
                    var_20 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned short)31752), (var_12)))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767)))))))), (max((((/* implicit */unsigned long long int) min((2899233550U), (3238854501U)))), (min((var_2), (((/* implicit */unsigned long long int) 2951323378U))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1343643917U), (var_8)))) ? (((((/* implicit */_Bool) 1343643945U)) ? (((/* implicit */unsigned long long int) var_16)) : (9684770276936687476ULL))) : (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))) ? (max((max((5711690462058882946LL), (((/* implicit */long long int) (unsigned short)60154)))), (((/* implicit */long long int) (unsigned short)31757)))) : (max((max((var_14), (((/* implicit */long long int) var_0)))), (max((var_14), (arr_6 [i_2])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max(((unsigned short)60154), ((unsigned short)32768)))) ? (max((((/* implicit */unsigned long long int) 0U)), (var_4))) : (((/* implicit */unsigned long long int) max((var_6), (var_11)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned short)32745)) : (((/* implicit */int) (unsigned short)32767))))), (((((/* implicit */_Bool) var_18)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))))))))));
}
