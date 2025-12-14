/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177713
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
    var_15 = min((var_9), (((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */signed char) var_4)), (var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) max((arr_3 [i_0]), (arr_2 [i_0] [i_1]))))) == (((/* implicit */int) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) > (max((arr_3 [i_0]), (arr_2 [i_0] [i_1]))))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) (short)31992))), (((long long int) arr_3 [i_1]))))), (max((((/* implicit */unsigned long long int) (+(arr_0 [i_0 - 2] [i_1])))), (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_1 [1LL])))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max(((~(max((((/* implicit */unsigned long long int) arr_0 [11U] [11U])), (arr_2 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (~((+(3012550761U))))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */int) arr_1 [12ULL]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((int) arr_0 [i_0 + 1] [i_1])))) + (2147483647))) << (((((/* implicit */int) (unsigned char)219)) / (386318562))))))));
                arr_7 [7ULL] [10ULL] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_0 [i_0] [i_1]))) : (arr_0 [i_0 + 1] [i_1])));
            }
        } 
    } 
}
