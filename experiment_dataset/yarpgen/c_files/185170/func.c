/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185170
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) arr_1 [i_0])), (var_11))));
                            var_14 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)207)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) * (500661057U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))));
                            var_15 += arr_6 [i_0] [i_1] [i_1];
                            var_16 = ((/* implicit */unsigned int) min((arr_5 [(unsigned char)3] [7U] [i_0] [(unsigned char)3]), (((unsigned short) ((unsigned char) arr_9 [(unsigned short)5] [i_3] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_6 [(unsigned short)4] [i_0] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)14)), (var_0)))) : (((((/* implicit */_Bool) (unsigned short)50878)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)50878))))))) ^ (((((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (var_2) : (arr_8 [i_0] [i_0]))) - (((/* implicit */long long int) 3794306239U)))));
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (max((min((((/* implicit */long long int) arr_0 [i_0])), (var_11))), (((/* implicit */long long int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26915))))))))));
                var_19 = ((/* implicit */long long int) max((((unsigned short) arr_9 [(unsigned short)16] [0LL] [0LL] [9LL] [i_0])), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) arr_0 [i_0])), (2908728515U)))))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 6285758799979967231LL))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (min((((/* implicit */int) var_3)), (((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))))))));
}
