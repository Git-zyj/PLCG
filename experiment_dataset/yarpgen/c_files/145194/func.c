/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145194
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
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((int) var_4))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9595)) ? ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)9601)) : (((/* implicit */int) var_11)))))) : (var_7)));
    var_18 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) 868521939)) : (var_0))));
    var_19 = ((unsigned long long int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3174163247366135137LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) ^ (arr_5 [i_0]))))))));
                    arr_9 [i_0 + 2] [i_0] [1ULL] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 2] [i_2])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)4]))))) ? ((-(((/* implicit */int) arr_1 [(unsigned short)2])))) : (((/* implicit */int) arr_4 [12]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_15);
                                arr_14 [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [10ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-9605)), (((((/* implicit */_Bool) (short)15923)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))));
                                var_21 = ((/* implicit */short) min(((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9601))) : (2ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [(short)13] [(_Bool)1] [i_3] [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)17079))))) + (arr_6 [0]))))));
                                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3)))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(var_9)))))) ? ((+(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
