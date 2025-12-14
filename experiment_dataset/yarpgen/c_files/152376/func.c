/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152376
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0] [i_3] [i_2] [i_0])), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) ? (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_3))) : (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) arr_1 [i_1]))))))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)0)), (var_8)))), (var_13)))))));
                                var_15 = ((/* implicit */unsigned int) ((((max(((_Bool)1), (arr_1 [(unsigned short)1]))) ? (arr_10 [(unsigned short)13] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)13] [i_0 - 1]))))) + (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) & (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) (_Bool)0))))))))));
                                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_3)))) || (((/* implicit */_Bool) max((arr_12 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned short) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_17 ^= (-(min((var_3), (var_9))));
                var_18 ^= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)14] [i_0 + 2] [i_0 + 1] [i_0 + 1])), (min((((/* implicit */unsigned long long int) (_Bool)0)), (137304735744ULL)))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((min((arr_14 [i_0] [i_0 + 1] [i_0 + 2] [i_1] [(unsigned short)14] [1ULL]), (((/* implicit */unsigned int) (short)-32766)))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)104))))))))));
                var_20 ^= ((/* implicit */signed char) (-((~((+(((/* implicit */int) var_10))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                var_21 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)27546)), (arr_20 [i_6])))) ? ((-(((/* implicit */int) arr_16 [i_6] [i_6])))) : (((((/* implicit */int) (unsigned short)63)) & (((/* implicit */int) var_13))))))));
                var_22 ^= ((/* implicit */short) max(((+(((((/* implicit */int) (unsigned short)12991)) >> (((((/* implicit */int) (unsigned short)12973)) - (12972))))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_5])), (var_13))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((unsigned short)13013), (((/* implicit */unsigned short) var_10))))), (min((((/* implicit */unsigned int) var_8)), (var_7)))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_0)))), (((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)))))));
}
