/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116897
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_18)), ((short)26)))) ? (var_12) : (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) var_19))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_2));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) var_11)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) / (var_15)))) : (((((/* implicit */_Bool) 2913977886U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29493))) : (var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (short)29709));
                arr_6 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_2] [13ULL]))))))) << (((((((((/* implicit */_Bool) var_11)) ? (arr_8 [(unsigned short)6] [(unsigned short)6] [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)9]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28597)) ? (arr_7 [0LL] [i_2 - 1] [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))) - (1099991176ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)52), ((unsigned char)127)))) / (((/* implicit */int) (unsigned char)136))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [3ULL] = ((/* implicit */int) ((((4743336443391174532LL) | (arr_1 [i_1 - 1]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) >= (18446744073709551615ULL)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_17);
}
