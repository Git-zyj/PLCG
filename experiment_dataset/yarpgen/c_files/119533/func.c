/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119533
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
    var_14 |= ((/* implicit */unsigned int) var_12);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (min((var_0), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7385235913897689636ULL))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))))) : (max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (~(var_11)));
                arr_8 [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 889945464)) ? (((/* implicit */unsigned long long int) 3962163639U)) : (6176498418356023913ULL)))) ? (var_11) : (((/* implicit */unsigned long long int) 32505856U)))))));
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (~(-267555561)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) 958489907))))))));
                            }
                        } 
                    } 
                } 
                var_19 |= ((/* implicit */_Bool) max((12270245655353527712ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)0] [i_1])) ? (((/* implicit */int) arr_15 [(signed char)9] [i_1] [i_1] [(signed char)9] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_12)))) : (arr_14 [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */unsigned int) var_1)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((var_13) / (((/* implicit */unsigned int) 958489907))))))));
}
