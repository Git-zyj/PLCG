/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142118
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
    var_12 |= ((/* implicit */unsigned char) max((var_5), (2843494262240680937LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) var_3)), (10972106242969614482ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) 524287U)), (1909832389598352924ULL)))));
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!((_Bool)0)))), (((unsigned short) (_Bool)0))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1])) ? (var_8) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])) << (((arr_10 [i_0] [i_2] [i_0] [i_0]) + (3547806394389431134LL))))))))))) : (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1])) ? (var_8) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])) << (((((arr_10 [i_0] [i_2] [i_0] [i_0]) + (3547806394389431134LL))) + (1707732497291554460LL)))))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [i_4] = (+(var_2));
                                var_16 ^= ((/* implicit */unsigned int) -9223372036854775788LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_5]) / (((/* implicit */unsigned long long int) var_10))))) ? (max((arr_19 [i_5]), (arr_19 [i_5]))) : (arr_19 [i_5])));
        var_18 = ((/* implicit */unsigned long long int) var_0);
    }
}
