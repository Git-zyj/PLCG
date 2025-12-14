/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157853
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) var_12));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((((unsigned long long int) min((((/* implicit */int) var_4)), (arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((signed char) max((var_1), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_16 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (6969499361004750354ULL))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_2 [i_1] [i_0] [i_0])), (var_7))) & (((/* implicit */long long int) arr_0 [i_0 - 3])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) arr_9 [i_3]);
                                var_18 = ((/* implicit */long long int) var_13);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)64)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1]))))) ? (1557121079609944019LL) : (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_0 - 2] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((var_6), (35747322042253312LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))))))) ? (((/* implicit */long long int) var_8)) : (var_7)));
}
