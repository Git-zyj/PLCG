/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158093
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2335395869U)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -6390778863128223399LL))))) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_7 [4] [i_1] [i_2])) : (var_2))) : (((/* implicit */unsigned long long int) var_10)))))));
                    var_12 = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))))), (min((var_9), (((/* implicit */long long int) arr_6 [i_2] [(signed char)3] [(signed char)3] [i_0])))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [6] [12LL]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (arr_7 [2U] [i_1] [i_2])))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 1959571434U)), (-6912336575877031338LL)))) ? (((((/* implicit */_Bool) 1959571421U)) ? (arr_9 [i_0] [i_0] [(unsigned char)11] [(_Bool)1]) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) 2335395892U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2866306875U)) <= (16442370865272636341ULL)))))));
                }
                arr_10 [i_0] = ((/* implicit */unsigned int) var_1);
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((3468605733259540299LL), (((/* implicit */long long int) 1959571427U))))) ? (1959571420U) : (min((4294967295U), (var_10)))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_4)) ? (((18446744073709551615ULL) & (14876892928766870377ULL))) : (max((((unsigned long long int) 1640159931958317100LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8))))))));
    var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_2)))))) ? (((/* implicit */unsigned long long int) min((5382279326690308951LL), (((/* implicit */long long int) (unsigned char)255))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)60)) || (((/* implicit */_Bool) (signed char)-94)))))) : ((-(15728199689974598328ULL)))))));
}
