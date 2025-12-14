/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17910
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_6 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (((var_0) >> (((/* implicit */int) var_14)))))) | (((/* implicit */unsigned long long int) ((((var_13) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) min((var_1), (var_1)))) : (((/* implicit */int) var_18)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4622506864119618177ULL)))))) & (((13585358634550793343ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [12ULL] [i_3 - 1]))))))))))));
                var_21 = var_2;
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) var_6);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_3] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_14))))), (((arr_9 [i_2] [i_3] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? (((arr_13 [i_2] [i_2] [i_2]) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 - 1])))));
                                var_24 += ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_25 ^= ((/* implicit */_Bool) (-(max((arr_0 [i_3 - 1]), (((/* implicit */unsigned long long int) var_7))))));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_16)))) ? (13585358634550793343ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_14), (var_11)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
