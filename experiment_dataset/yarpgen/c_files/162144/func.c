/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162144
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
    var_11 += ((/* implicit */unsigned int) (unsigned char)87);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_8))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [(signed char)18] [i_0 - 1])))) < (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [14ULL] [i_0 - 1]))))));
        var_13 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_6 [16ULL] [i_0] = ((/* implicit */_Bool) ((unsigned short) var_4));
            arr_7 [i_0] = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [i_1])))))));
            arr_8 [10U] [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)65526);
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) (((~(((var_1) & (15899543818852538854ULL))))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
            arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_10 [i_2] [i_0 - 1]);
            var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)248)), ((unsigned short)30497)));
        }
    }
}
