/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116773
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((167083326U), (((/* implicit */unsigned int) (unsigned short)47651)))) <= (arr_2 [(signed char)11]))))) & (((((/* implicit */unsigned long long int) ((long long int) (signed char)12))) / (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (var_14)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) min((arr_0 [i_0 + 2]), (((/* implicit */int) ((min((169062249U), (((/* implicit */unsigned int) (signed char)95)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))))))));
        arr_4 [i_0] = (signed char)-35;
    }
    var_19 &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) ^ (426257002)));
}
