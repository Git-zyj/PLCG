/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178559
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)54001)), ((+(((/* implicit */int) arr_0 [i_0]))))))), (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) (signed char)84)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)11534)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) 4307507308416455597ULL)))), (((/* implicit */unsigned int) var_0))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) var_12);
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */unsigned long long int) arr_5 [i_1])) / (4294967295ULL))) : (((/* implicit */unsigned long long int) 1673321349814358010LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), ((unsigned short)54028)))))));
        var_20 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (-(arr_5 [(short)1])))), (max((((/* implicit */unsigned int) (unsigned short)11518)), (2U))))), (((/* implicit */unsigned int) ((582723768) + (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? ((-(33554431U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11535)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)11527)) : ((~(((/* implicit */int) var_9)))))))));
    }
    var_22 = ((/* implicit */short) ((unsigned int) var_6));
}
