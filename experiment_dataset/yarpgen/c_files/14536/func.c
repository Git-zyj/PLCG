/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14536
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned short)7] &= ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)203))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)203))) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (14748473767130305063ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) var_15))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)52)), ((unsigned short)56962)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_14)))), (min((arr_5 [(signed char)2]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((-932029759147139658LL), (((/* implicit */long long int) var_14)))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) var_12));
                arr_10 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1] [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))) ^ (arr_2 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-27555)), ((-(var_14)))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_2)) ? (((var_8) << (((((/* implicit */int) var_7)) + (16537))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))))));
    var_18 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_12)), ((+(var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (var_9))))));
}
