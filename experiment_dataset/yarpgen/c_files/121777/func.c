/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121777
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (18446744073709551601ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_8))))))));
    var_16 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((143552238122434560LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) << ((((+(143552238122434566LL))) - (143552238122434537LL))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (!((_Bool)1)))), (min((((/* implicit */long long int) arr_2 [i_0] [i_1 - 1] [i_0])), (arr_5 [i_0] [i_1] [i_0] [i_2]))))) == (((-9223372036854775806LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-143552238122434566LL)))))))));
                    arr_7 [i_2] [i_2] [i_2] = (+((-(min((arr_1 [15] [i_2]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0])))))));
                    var_18 = ((/* implicit */unsigned int) -143552238122434583LL);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 2])) <= (((/* implicit */int) arr_4 [i_0] [15LL] [i_2] [i_2])))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
}
