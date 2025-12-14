/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16256
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
    var_18 = ((/* implicit */long long int) (~(18446744073709551615ULL)));
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) -474495380)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(signed char)2]) : (12414294360875248341ULL)))))));
        var_21 &= ((/* implicit */unsigned long long int) ((max((arr_0 [0LL] [i_0]), (((/* implicit */unsigned long long int) (-(-474495380)))))) != (max((((/* implicit */unsigned long long int) 1877301666)), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned char)89);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_1 [i_0] [2LL])))) ? (-474495380) : ((-(arr_3 [i_3] [i_2] [i_0]))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)511);
                        arr_11 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) (unsigned short)6253);
                    }
                } 
            } 
        } 
        var_23 &= ((/* implicit */unsigned char) ((min((arr_7 [i_0] [i_0] [i_0]), (arr_0 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned char)9])), (3825302878U))))));
    }
}
