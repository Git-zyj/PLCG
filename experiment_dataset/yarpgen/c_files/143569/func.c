/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143569
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)95)) ? (252201579132747776ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)30097)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) : (var_5)))))) & (((/* implicit */unsigned long long int) 1168699712))));
                        arr_11 [i_0] [i_0] [(signed char)3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30097)) && ((_Bool)1)))), (min((var_0), (((/* implicit */unsigned int) var_10))))))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24984))) * (var_0))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_2] [i_2] [i_0] [i_2] = max((((/* implicit */int) ((unsigned char) max(((short)11675), (var_10))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)112)))));
                        arr_16 [i_0] [i_1] = ((/* implicit */long long int) max((1473968497U), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_7))) << (((var_0) - (4288205679U))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) 5030567874137871561LL);
                                var_19 = ((/* implicit */_Bool) min((max((12U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))))), (((/* implicit */unsigned int) (_Bool)1))));
                                var_20 = ((/* implicit */long long int) (short)18155);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_13);
}
