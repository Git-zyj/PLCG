/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122061
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1147891903795583588ULL)) ? (((/* implicit */long long int) 995357695U)) : (-1LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((1641290655U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-127)) > (((/* implicit */int) (unsigned char)254)))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) / (var_16)))) * (var_10))))));
                                arr_13 [i_0] [21U] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_0)) + (var_2))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1641290646U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned long long int) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_3] [i_4])))))) : (17610303081404457140ULL)))));
                                arr_14 [i_2] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_13))))) ? (((18014398509481983ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (18428729675200069630ULL)))) && (((((/* implicit */int) (unsigned char)15)) >= (((/* implicit */int) (unsigned char)96)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned long long int) var_14)) : (3184368033867908535ULL))) : (((/* implicit */unsigned long long int) ((402653184U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (short)-7586)) < (((/* implicit */int) (unsigned char)0))))))))));
    var_22 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) var_4))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_15))))))) ? (var_10) : (((/* implicit */unsigned long long int) var_14))));
}
