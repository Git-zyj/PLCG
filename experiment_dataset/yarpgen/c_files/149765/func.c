/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149765
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
    var_10 = ((/* implicit */unsigned short) var_5);
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)9), ((unsigned short)47566)))) < (((((/* implicit */_Bool) (-(15068419230105118235ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)4])) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((arr_7 [i_0] [i_1 - 1] [i_1] [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_2]))))))))));
                    var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_2])))))))));
                    arr_10 [i_2] [i_0] [i_0] [9ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 2]))))) ? ((~(((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (981944248) : (((/* implicit */int) (unsigned char)83)))))) : (((/* implicit */int) (unsigned char)83))));
                }
            } 
        } 
    } 
}
