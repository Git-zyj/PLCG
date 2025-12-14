/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164670
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (((((((_Bool)0) || (((/* implicit */_Bool) (short)8671)))) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)30346)))))) ? ((+(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((((/* implicit */_Bool) ((569012915907972184ULL) - (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_1] [(short)9]))))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (short)-8665));
                var_12 = ((/* implicit */_Bool) min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (short)4)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 &= ((((((/* implicit */_Bool) 2062612876U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))) * ((-(((((/* implicit */unsigned long long int) var_9)) / (18446744073709551615ULL))))));
    var_14 = (+(var_7));
}
