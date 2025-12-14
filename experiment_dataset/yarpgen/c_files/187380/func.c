/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187380
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_16))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) 6798448025315255466LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) -6798448025315255467LL)) / (18387537417862710525ULL)))))) : (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_3)))))));
    var_20 -= ((/* implicit */short) (unsigned char)57);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = arr_6 [i_0] [i_1 + 2] [i_2];
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -4LL)) || (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) <= (6798448025315255475LL))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (1111490446821527384ULL))), (((((/* implicit */_Bool) (unsigned char)200)) ? (8206460227632541803ULL) : (1111490446821527384ULL)))))));
                    var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
                }
            } 
        } 
    } 
}
