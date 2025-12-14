/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15717
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
    var_14 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)103)), (((15895444436568483240ULL) * (((/* implicit */unsigned long long int) arr_1 [4U])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) | (arr_3 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
            var_15 = ((/* implicit */unsigned char) (_Bool)1);
        }
        arr_8 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((576390383559245824LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-123)) ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0])))))) ? (((long long int) max((arr_2 [i_0] [7]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (6805231137618558398LL)))))));
    }
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)27883)))))))));
    var_17 = ((/* implicit */long long int) -2083192906);
}
