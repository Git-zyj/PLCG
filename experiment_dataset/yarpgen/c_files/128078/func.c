/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128078
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 130944U)) + (max((max((arr_1 [i_0] [(unsigned short)4]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (unsigned char)12))))));
        var_17 = ((/* implicit */_Bool) 7640982700827885684ULL);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967276U))))) + (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_0] [(_Bool)1]))))))))))));
    }
    for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_4 [i_1])))) ? (((((/* implicit */_Bool) 2097151ULL)) ? (arr_4 [i_1 - 1]) : (var_12))) : ((~(var_12)))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(4294836351U)));
                    arr_12 [i_3] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) (+((-(var_2)))));
    var_21 = min((((/* implicit */unsigned long long int) (signed char)81)), (18446744073707454464ULL));
}
