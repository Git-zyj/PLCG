/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113735
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
    var_14 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 *= min((arr_4 [i_2 - 2] [i_0] [i_2 - 2] [i_0]), (((unsigned long long int) arr_4 [i_2 - 3] [i_1] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_3] [i_2 - 3])))))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1112071833629942745LL)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max((arr_0 [i_1] [i_0]), (var_6)))) : (((int) arr_2 [i_0] [i_1]))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12634)) ? (min((1112071833629942739LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */long long int) var_4))));
                                var_18 += ((unsigned int) arr_6 [i_0] [i_1] [i_0] [i_2 + 1] [i_3] [i_4]);
                                arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1] [i_4])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) 457661699)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [14U] [i_3] [i_3] [i_1]))))))) ? (((((/* implicit */_Bool) min(((short)-9077), (((/* implicit */short) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_1] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) (unsigned char)201))))) : (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [8U] [i_2 - 3] [i_3] [9ULL])) ? (var_4) : (((/* implicit */int) (unsigned char)201))))))))));
                            }
                        } 
                    } 
                    arr_14 [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9064463241391696705LL)) ? (((/* implicit */long long int) var_3)) : (6532897328235094963LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)9058))))) : (((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1])) ? (arr_6 [i_0] [i_1] [(_Bool)1] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_3 [3] [i_1] [i_0]))) ? ((-(arr_9 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) arr_12 [(short)1] [i_2 - 3] [20LL] [i_2 - 3] [i_0]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10984001700846765784ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (837790943U)))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) -9064463241391696705LL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1)))) ? (min((var_3), (((/* implicit */unsigned int) var_4)))) : (var_3))))));
}
