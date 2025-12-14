/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129737
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((10166388425406189890ULL), (((/* implicit */unsigned long long int) (unsigned char)151)))), (((/* implicit */unsigned long long int) -1)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_16)) << (((var_9) - (5362292501805864851LL)))))))) > (((((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) * (((var_13) / (var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) var_11);
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)31578)) || (((/* implicit */_Bool) -1758944193)))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1])), (arr_0 [i_0])))), (arr_4 [i_1 - 3] [i_0]))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)119)))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_2] [i_2]), ((~(((/* implicit */int) var_7))))))) || (((/* implicit */_Bool) ((arr_6 [i_2] [i_2 - 1]) / (arr_6 [i_2] [i_2 - 1]))))));
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (short)-28575))));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(3LL))))));
    }
}
