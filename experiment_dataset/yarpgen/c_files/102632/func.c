/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102632
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */long long int) (_Bool)1);
                        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)14] [i_1] [i_3] [16ULL]))) > (arr_8 [i_0] [i_1] [i_2] [i_3])))))))) > (arr_6 [i_2] [10U] [i_0])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)31702))));
        var_17 = ((/* implicit */unsigned long long int) var_7);
    }
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        var_18 = ((/* implicit */short) arr_3 [i_4] [i_4 + 1]);
        arr_14 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) arr_6 [i_4] [(_Bool)1] [i_4]));
    }
    var_19 = ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? ((+(max((((/* implicit */long long int) var_13)), (var_7))))) : (((/* implicit */long long int) var_11)));
    var_20 += ((/* implicit */short) (+(((/* implicit */int) (short)-21459))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((-8537917583859197964LL) % (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_12))))))))));
    var_22 = ((/* implicit */short) min((var_0), ((~(var_10)))));
}
