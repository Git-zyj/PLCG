/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13635
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
    var_13 = 18446744073709551615ULL;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = 0ULL;
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                    var_15 = ((18446744073709551606ULL) - (8588886016ULL));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50364)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41939))) : (((unsigned long long int) ((18446744073709551615ULL) / (1ULL))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15174)) ? (((((/* implicit */_Bool) (unsigned short)41939)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (0ULL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_11 [17ULL])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))), (((/* implicit */unsigned long long int) arr_10 [i_3]))));
        arr_12 [i_3] = ((((/* implicit */_Bool) max(((unsigned short)41939), (arr_11 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41919))) : (13413524824093474776ULL));
        var_19 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12006789317376230686ULL)) ? (((/* implicit */int) (unsigned short)50373)) : (((/* implicit */int) arr_10 [i_3]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_10 [i_3])))) < (((((/* implicit */_Bool) 8254632902152631012ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65510)))))))) : (5033219249616076840ULL));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_11 [20ULL])), (((((/* implicit */_Bool) (unsigned short)41939)) ? (6120393057200355202ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (unsigned short)21263);
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 18446744073709551591ULL)))));
        arr_15 [i_4] [i_4] = (unsigned short)9392;
    }
    var_23 = ((/* implicit */unsigned short) var_6);
    var_24 = (-(var_1));
}
