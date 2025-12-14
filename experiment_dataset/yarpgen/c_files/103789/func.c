/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103789
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
    var_19 = ((/* implicit */unsigned short) ((unsigned char) var_2));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50317))) | (14ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
    var_21 = ((/* implicit */long long int) ((signed char) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [0LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((18446744073709551601ULL) <= (0ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((arr_7 [(_Bool)1] [i_1] [i_0] [i_3]), (((/* implicit */unsigned long long int) var_9)))))))));
                        var_23 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (var_1))), (((/* implicit */int) ((_Bool) var_2)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4209105792422359715LL)) ? (14ULL) : (14ULL))))) <= (((/* implicit */int) arr_4 [i_4] [i_2] [i_0 - 1] [i_0 - 1]))));
                        var_25 = ((/* implicit */long long int) max((((((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) * (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0] [i_0]))))))), ((~(((/* implicit */int) max((arr_9 [i_0] [i_0 - 1] [i_0] [i_2] [(_Bool)1] [i_4]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_2] [i_0])))))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_4] [i_1] [i_2] [i_4]))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) var_11))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) < (arr_13 [i_0])))))), (min((((/* implicit */int) min((var_18), (arr_0 [i_4])))), (((int) arr_1 [i_2])))))))));
                    }
                    arr_14 [i_0] [i_1] = (+(((((/* implicit */_Bool) -4209105792422359715LL)) ? ((+(((/* implicit */int) (unsigned short)65535)))) : ((-2147483647 - 1)))));
                    arr_15 [i_0] [i_2] [i_2] |= ((/* implicit */_Bool) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [3ULL] [i_0]))) : (arr_12 [7] [7] [7] [i_1] [i_1])))) <= (max((4209105792422359715LL), (((/* implicit */long long int) (short)-1)))))))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)))))));
    }
}
