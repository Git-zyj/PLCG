/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149677
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 7ULL)) && (((/* implicit */_Bool) (short)-28196)))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) != (((int) 2305280059260272640ULL)))))));
        var_16 = min((((/* implicit */short) (_Bool)1)), (var_10));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1345)))))))) ? (((/* implicit */int) (signed char)-57)) : (((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_8))))));
    var_18 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) < (var_6));
}
