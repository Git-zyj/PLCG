/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106294
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
    var_11 = ((/* implicit */_Bool) min((1932133473567802860ULL), (1932133473567802860ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [6LL] [i_1] [10ULL] [i_2] = ((/* implicit */_Bool) var_7);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))) ? (1932133473567802859ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_1))))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17850)))) : (max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_6 [i_1] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_14 [(signed char)2] [i_2] [i_3] = ((/* implicit */signed char) ((12458412869064733300ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25209)))));
                        arr_15 [9ULL] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                }
            } 
        } 
    } 
}
