/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15367
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) -39713059);
        arr_2 [i_0] [(unsigned char)7] = max((max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)123))))), (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_1 [i_0])) - (62432)))))));
    }
    var_14 = ((/* implicit */_Bool) min((((/* implicit */short) var_1)), (var_0)));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 39713058)) : (var_3))), (((/* implicit */unsigned long long int) ((2251799813685248LL) ^ (((/* implicit */long long int) arr_3 [i_1])))))));
        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_3 [i_1]), (arr_3 [i_1])))), (((unsigned long long int) arr_4 [i_1]))));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        arr_9 [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -39713059)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_5)))))) : (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7514747535317350178ULL)))))) ? ((+(max((5279204085272993653ULL), (((/* implicit */unsigned long long int) -2251799813685258LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177)))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_1)) ? (arr_13 [i_2 + 2] [i_2 + 3] [i_2 + 3]) : (arr_13 [i_2 + 2] [i_2 + 2] [i_4])))));
                    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)37))))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -2030727547046611211LL)))))))));
                    var_18 = (!(((min((2641988265393805468ULL), (((/* implicit */unsigned long long int) 2030727547046611210LL)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2251799813685263LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))));
                    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)45))));
                }
            } 
        } 
    }
}
