/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175257
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
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_2 [i_0]) != (arr_2 [i_0])))), ((+(arr_2 [i_1 + 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_15))))) : (((((unsigned long long int) arr_0 [i_0 - 2] [i_1])) / (var_3))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_0 - 2]))) : (((unsigned long long int) 18446744073709551615ULL))))))))));
            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6460984962367942994ULL) * (((/* implicit */unsigned long long int) 4294967295U))))) || (((/* implicit */_Bool) (+(3111401322130507601LL))))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1])))) : (((unsigned long long int) 0LL))))));
        }
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) (unsigned short)15)))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1]))))), ((-(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)32736))));
                    var_23 = ((/* implicit */short) var_9);
                    arr_9 [i_3] = ((/* implicit */int) 0LL);
                    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) ((arr_5 [i_3]) * (((/* implicit */unsigned long long int) var_9)))))), (arr_2 [i_0])));
                }
            } 
        } 
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_9))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) var_5);
        var_27 = ((/* implicit */short) (unsigned short)32800);
        var_28 = var_1;
        var_29 = ((/* implicit */unsigned long long int) ((arr_2 [i_4]) * (((/* implicit */unsigned int) ((int) var_7)))));
    }
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11))) >> (((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2709244107U)))))));
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65529))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((var_0) << (((min((var_11), (var_11))) - (14064000345436499308ULL)))))));
}
