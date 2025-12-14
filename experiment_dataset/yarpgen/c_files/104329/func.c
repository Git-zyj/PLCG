/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104329
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)127)) & (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_1])))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((_Bool) arr_1 [i_1]))))) != ((+(((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 = var_14;
                                arr_13 [i_2 + 1] [i_2 + 1] = ((/* implicit */_Bool) max((min((((/* implicit */int) var_6)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_10 [(unsigned short)5] [i_1] [i_0] [i_1] [(unsigned short)5] [(unsigned short)5] [(unsigned char)7])))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))));
                                arr_14 [(unsigned char)12] [(unsigned char)12] [(unsigned short)0] [(unsigned char)12] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && ((_Bool)1)))) * (((/* implicit */int) ((unsigned char) 599619754U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_6)))) / (((((/* implicit */int) var_16)) * (((/* implicit */int) var_6))))))) ? (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_12)) : (12275169177961641612ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) : (((((((/* implicit */unsigned long long int) -1722142238)) / (var_0))) * (((/* implicit */unsigned long long int) var_11)))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_0))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_2))))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) var_12))))))))))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_16)), (var_7))))))))));
}
