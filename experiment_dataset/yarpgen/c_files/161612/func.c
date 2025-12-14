/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161612
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
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((max((9517343035466881885ULL), (((/* implicit */unsigned long long int) var_4)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3072127717U)) ^ (1319097299049966108ULL))))))))));
                var_17 ^= ((/* implicit */_Bool) var_4);
                arr_6 [i_0 - 4] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1 + 2]);
                arr_7 [i_1] [i_0] [i_0 - 4] = min((((/* implicit */unsigned long long int) 2992324710U)), (((((/* implicit */_Bool) (+(var_2)))) ? (var_5) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (14617796086547904000ULL))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) (((+((((_Bool)1) ? (9604518347253591990ULL) : (arr_1 [9ULL]))))) << (((((/* implicit */_Bool) ((15483270231395458849ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8))))));
                                var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8842225726455959630ULL)) ? (((((/* implicit */_Bool) 8842225726455959630ULL)) ? (arr_9 [i_4] [i_1 - 1] [i_2]) : (7180541694992640567ULL))) : (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_2 - 1] [i_3] [i_4]) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) arr_8 [i_0 + 1])))))))) ? (((((/* implicit */_Bool) 2772981755U)) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_3] [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-25))))))) : (17674054526829322510ULL)));
                                var_19 = var_7;
                                arr_16 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = var_12;
    var_21 = var_11;
    var_22 = (~(18446744073709551615ULL));
}
