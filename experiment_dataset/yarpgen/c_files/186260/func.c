/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186260
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) var_4);
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) 455262725U))))) + ((~(((/* implicit */int) arr_5 [i_0] [i_1 - 2]))))))) : (455262710U)));
                var_17 = ((/* implicit */long long int) max((max((min((8115725634592009669ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) 3839704571U)))), (((/* implicit */unsigned long long int) (unsigned char)91))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_0] [i_1 - 1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2371219195U)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)12])))))))) ? (((((/* implicit */_Bool) min((63393114U), (((/* implicit */unsigned int) (short)112))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((455262725U) ^ (var_6))))) : (63393119U)));
                                var_18 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_7)), (min((arr_0 [15ULL]), (((/* implicit */unsigned long long int) 25)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)83)), (-23))))));
                                var_19 = 3839704603U;
                            }
                        } 
                    } 
                } 
                var_20 = max(((+(((((/* implicit */_Bool) var_5)) ? (4231574184U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (min((((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */int) arr_14 [i_1]))))), (339918779U))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) (-(4294967295U)))) ? (var_1) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)17)), ((-(((/* implicit */int) (signed char)127))))))));
}
