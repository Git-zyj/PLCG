/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132966
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((14610702800446328917ULL) <= (3836041273263222691ULL))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 14610702800446328905ULL))))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_0)))) || (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)161)))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) ^ (max((min((3836041273263222711ULL), (14610702800446328899ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_5 [i_1 - 1]))))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)659))))))));
    var_15 ^= ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)-659))) - (1048576U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))) / (((/* implicit */unsigned int) (((+(-472754617))) & (((/* implicit */int) max((var_2), (var_5)))))))));
}
