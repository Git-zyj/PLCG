/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188750
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
    var_12 = ((/* implicit */unsigned int) max((max((1063845584), (((/* implicit */int) (unsigned char)224)))), (var_10)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (((((_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1] [i_1 - 2]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2181236059U)))))));
                    var_13 ^= min((((((/* implicit */_Bool) max((arr_0 [i_2] [i_1]), (((/* implicit */short) var_2))))) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_2 + 2])) : ((~(var_10))))), (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))) ? (((/* implicit */int) var_11)) : (1737643990))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_2] [i_1 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [(unsigned short)5] [i_0] [i_0] [(signed char)8])), ((unsigned short)511))))))) ? ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])))) : ((+(arr_1 [i_2])))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */short) max((max((((/* implicit */long long int) 2181236068U)), (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (-412991600245192449LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-2554)), (min((2113731248U), (((/* implicit */unsigned int) (short)-18782)))))))));
}
