/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112849
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
    var_15 = ((/* implicit */unsigned char) max((var_4), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */short) var_4);
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_0) - (7754875510663586236ULL)))))) || (((/* implicit */_Bool) var_12))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(min((((/* implicit */int) arr_10 [i_3])), (var_7))))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((max((((/* implicit */unsigned int) arr_2 [i_0 + 2])), (var_14))), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0 - 2] [i_1 - 1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_5] [i_5] [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_18 [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0]))))))));
                                arr_19 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0] = ((min(((-(var_3))), (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))))) >> (((((/* implicit */int) max((arr_15 [(unsigned short)11] [i_0 - 3] [i_0] [i_0] [i_1 - 1]), (arr_15 [i_0] [i_0 - 2] [i_0] [i_1] [i_1 - 1])))) + (104))));
                                var_21 |= ((/* implicit */unsigned char) (!((((_Bool)1) && ((_Bool)1)))));
                                var_22 += ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_8 [i_2])), (min((arr_3 [i_6] [i_2]), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
