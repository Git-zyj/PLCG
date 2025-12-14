/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125202
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (((((/* implicit */_Bool) ((int) (unsigned short)63091))) ? (((var_17) % (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((unsigned int) 12504671342121675902ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 - 1] [i_0])))));
                var_22 = (((!(((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0 - 2]))))))) || (((/* implicit */_Bool) ((((var_9) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) -6711219992756891368LL)) ? (arr_2 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
        var_23 -= ((/* implicit */unsigned long long int) min(((unsigned short)127), (((/* implicit */unsigned short) (short)-1))));
    }
    for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        arr_11 [i_3 - 1] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((arr_10 [i_3]) >> (((var_4) - (4033654696407191778LL)))))), (((6711219992756891367LL) << (((((/* implicit */int) arr_9 [i_3])) - (18865))))))), (((/* implicit */long long int) (signed char)-27))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_3 + 4]))))) == (max((((/* implicit */long long int) var_2)), (-1LL)))))) < (((/* implicit */int) arr_9 [i_3 - 2]))));
    }
}
