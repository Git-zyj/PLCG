/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181621
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1318265778013995983ULL) / (((/* implicit */unsigned long long int) -595515040))))) ? (((((/* implicit */unsigned long long int) -387393756)) | (1318265778013995983ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        var_19 = ((/* implicit */unsigned char) (-(min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)4095)) * (((/* implicit */int) var_7)))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) max((((int) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 1])), (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_17))))));
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [(short)6])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((-1820270678) * (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned char)149))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((-502544919) != (-387393757)))), (arr_3 [i_2 - 2]))))));
                var_23 = ((/* implicit */signed char) (unsigned char)149);
                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)37949)) ? (max((((/* implicit */int) (unsigned short)54971)), (-387393757))) : ((-2147483647 - 1)))) & (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((var_3), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4149560107912306187LL)) ? (((/* implicit */long long int) -387393757)) : (9223372036854775807LL)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
}
