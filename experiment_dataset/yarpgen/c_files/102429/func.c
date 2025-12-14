/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102429
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = arr_0 [i_2 + 2];
                        arr_13 [i_3] [i_2 - 1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) max((max((var_0), (arr_4 [i_0] [10ULL] [i_3 - 2]))), (((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [i_2] [i_3])))))));
                        arr_14 [i_0] = ((/* implicit */signed char) 1697100218);
                        var_13 = ((/* implicit */unsigned char) arr_1 [i_2 + 1] [i_2 + 1]);
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (signed char)85))));
        var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)97)) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (signed char)-95);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (((((/* implicit */long long int) arr_1 [i_4] [i_4])) % (arr_2 [i_4] [i_4])))))) < (((/* implicit */int) ((arr_18 [i_4]) > (arr_18 [i_4]))))));
        var_18 *= ((/* implicit */unsigned long long int) ((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (2509746953883935543LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) < (2504927610U)))))) == (((/* implicit */long long int) ((/* implicit */int) ((281474976710655ULL) == (((/* implicit */unsigned long long int) 2725617800U))))))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */long long int) var_11);
}
