/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172687
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) min((arr_1 [i_2]), (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)192))))), (((((/* implicit */_Bool) 261632U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_5 [i_0])))))));
                    var_19 = ((/* implicit */long long int) arr_0 [i_2]);
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((min((((unsigned long long int) (_Bool)0)), (((/* implicit */unsigned long long int) arr_1 [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((-(526072160U))) : (arr_1 [i_1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_0))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (17704773868248107193ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_16))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((short) (~(1721444044))));
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_22 = ((min((max((((/* implicit */unsigned int) arr_7 [i_4 + 1] [i_4 + 1])), (3768895135U))), (((unsigned int) (short)1702)))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                                var_23 = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)20971))) + (arr_22 [i_7] [i_4 + 1] [i_5 + 1] [i_5] [i_7] [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 - 2] [i_7]))))) == ((-(arr_18 [i_3] [i_4] [i_5] [i_4])))));
                                arr_25 [i_3] [i_4 - 1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3]);
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 1189852265)))) ? (((17704773868248107193ULL) + (((/* implicit */unsigned long long int) 8978312352374797249LL)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42137)))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) + (8978312352374797249LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -8978312352374797249LL)) ? (-337671154) : (arr_21 [i_4 + 1])))))))) > (((long long int) arr_0 [i_4 - 2]))));
            }
        } 
    } 
}
