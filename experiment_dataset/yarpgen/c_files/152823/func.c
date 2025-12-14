/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152823
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
    var_16 = ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)18508)) & (((/* implicit */int) arr_7 [i_2] [i_2])))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))) && (((/* implicit */_Bool) (-(((unsigned long long int) arr_4 [i_0] [i_4])))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (10174860111599335388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_1] [i_2])) : (((/* implicit */int) ((unsigned char) arr_8 [(short)4] [(short)4] [(unsigned char)10]))))), (((/* implicit */int) (short)-18508)))))));
                                var_20 = ((short) (!(((/* implicit */_Bool) var_14))));
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)11))))), ((-(((/* implicit */int) arr_2 [i_3 - 1] [i_1] [i_3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) var_0))), (((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))));
    var_23 = var_1;
}
