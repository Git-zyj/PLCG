/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11531
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
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)183))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_11)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11)))))))), (((((/* implicit */unsigned int) ((int) 1396608957872482411ULL))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1785068409U)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 &= ((unsigned char) max((((/* implicit */unsigned int) (short)7705)), (1785068412U)));
                var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) ((((-405833474) + (2147483647))) >> (((16383U) - (16382U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (5635381352241982451ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22145)) ? (((/* implicit */unsigned int) -875750565)) : (1183996989U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_2 [i_1 + 1]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)14069)), (4294967292U)))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1183996989U)) ? (((int) var_3)) : (((/* implicit */int) ((_Bool) 18446744073709551615ULL)))))) * (min((((/* implicit */unsigned long long int) ((short) var_4))), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) var_10)))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_11)))))) ? (((min((1987137061), (((/* implicit */int) var_7)))) % (((/* implicit */int) (short)-13617)))) : (((/* implicit */int) var_2))));
}
