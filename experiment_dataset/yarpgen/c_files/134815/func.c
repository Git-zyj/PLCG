/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134815
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 900385094U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16384))) : (-7248291471853442436LL)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_3))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((((((arr_0 [i_0]) ^ (arr_0 [i_0]))) / ((~(arr_2 [i_0]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) (+(arr_2 [i_0]))))) * (((((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]))) / (((long long int) arr_7 [i_0] [i_1] [i_0] [i_2]))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max(((!(((((/* implicit */_Bool) arr_5 [i_0] [4U] [4U])) || (((/* implicit */_Bool) arr_5 [i_0 - 3] [10ULL] [i_2 - 1])))))), ((!(((/* implicit */_Bool) (~(1114824115956635281LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (~(((unsigned long long int) (~(((/* implicit */int) var_1)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 781926022235449103ULL)) && (((/* implicit */_Bool) (unsigned short)302)))))))) * (var_5)));
}
