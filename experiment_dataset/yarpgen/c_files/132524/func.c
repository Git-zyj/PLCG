/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132524
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
    var_17 = ((/* implicit */unsigned short) (~(min((((61892822U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_13))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */_Bool) (unsigned short)49052);
                var_19 = min((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned short)16483))))))), (arr_1 [i_1]));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) arr_1 [i_2]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (((~(arr_2 [i_0 - 1] [i_0]))) << (((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_2])))) + (144)))));
                    arr_10 [i_0 + 1] [i_0] [i_2] = ((/* implicit */short) ((signed char) ((_Bool) (~(((/* implicit */int) (signed char)54))))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (4282819723U)))) * ((+(2479669643453893517ULL)))))));
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_0])), (1163094587240714709ULL))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-1175264186870974917LL)))));
                }
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_5 [i_0 - 1] [i_0 + 2] [i_4]))) && (((/* implicit */_Bool) (unsigned short)43312))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_4] [i_0 + 1]))) : (var_3)))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 2] [i_4] [2ULL] [8U])) || (((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) arr_3 [i_1] [i_4])) - (92))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((long long int) arr_8 [i_5] [i_1] [i_4] [i_0 + 1])))));
                    }
                    arr_18 [i_0] [i_1] [i_4] = (+(1175264186870974917LL));
                }
            }
        } 
    } 
}
