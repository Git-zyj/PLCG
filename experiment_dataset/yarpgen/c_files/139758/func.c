/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139758
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
    var_19 = min((((/* implicit */long long int) ((signed char) var_9))), (((((/* implicit */_Bool) (unsigned char)21)) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (7234186252575198157LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) & (((unsigned long long int) arr_2 [i_0] [3ULL] [(_Bool)1]))))) ? (((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))) | (((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_0] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)21)) / (((/* implicit */int) (unsigned char)235)))), (((/* implicit */int) arr_1 [i_0 + 1] [i_1]))))));
                var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14628602695506098927ULL)) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1])))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) << (((((/* implicit */int) (unsigned char)189)) - (178)))))) ? (((((/* implicit */_Bool) (unsigned short)55371)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-19635))))))) - (8110LL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_3 [i_1] [i_4])) : (((/* implicit */int) arr_2 [17ULL] [i_1] [i_2 - 2]))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_2 - 2] [i_3]))))) : (((arr_8 [i_0]) << (((((/* implicit */int) arr_2 [9LL] [i_2 - 2] [i_3])) - (42857)))))));
                                arr_14 [i_0] [0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) min((((unsigned int) (~(arr_7 [i_0] [i_2 + 2] [i_3] [i_4])))), (((/* implicit */unsigned int) ((unsigned char) (short)19626)))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_7 [(short)20] [i_1] [i_2] [11ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)44944))))) : (((/* implicit */int) arr_0 [i_1]))))) | (max((((((/* implicit */_Bool) (short)23184)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [14LL] [i_2]), ((unsigned short)44944))))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_18), (var_18)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? (arr_8 [i_0]) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_0] [(_Bool)1] [i_0 + 2])))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */long long int) var_12);
}
