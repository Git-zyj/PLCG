/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118741
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) ((short) 2966532540U))), ((~(((/* implicit */int) arr_3 [i_1]))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned short)20649)) ? (3996757871937634255LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14563)))))))));
                arr_7 [i_0 + 1] [i_1] = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned int) min((arr_4 [i_0] [0U] [i_1 - 1]), (arr_4 [i_1] [i_1] [i_1 - 1]))))));
                arr_8 [i_0] = min((((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_10)), (2745713628U))) >> (((((/* implicit */int) var_9)) - (222)))))), (((long long int) arr_1 [i_0] [i_1 - 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_2))) : (((/* implicit */unsigned long long int) ((((var_1) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))) | (((((/* implicit */_Bool) 33554400U)) ? (-5289807345393117949LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10588))))))))));
    var_14 += ((/* implicit */long long int) (+(var_0)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (16832338702993963028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)79))))))))));
}
