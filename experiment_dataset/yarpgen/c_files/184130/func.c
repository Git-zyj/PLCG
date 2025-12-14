/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184130
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
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_0)) << (((arr_7 [(unsigned short)2] [i_1]) - (3433031592488453919LL))))), (((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) (+(1669191108)))) * (max((3523768692350836343ULL), (3523768692350836343ULL)))))));
                            arr_12 [i_2 - 1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 + 1] [i_3])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (max((((/* implicit */unsigned int) arr_11 [i_3] [i_2] [i_1] [i_0])), (arr_5 [i_2 - 1] [i_1] [i_0 + 1])))))) : (((arr_7 [i_0 - 2] [i_0 + 1]) << (((arr_7 [i_0 - 2] [i_0 - 1]) - (3433031592488453923LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4210)) ? (((/* implicit */long long int) var_11)) : (var_3)))) ? (var_1) : (var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1314705312U)) ? (((/* implicit */int) (unsigned short)63422)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */short) var_4))))))))));
}
