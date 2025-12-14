/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110732
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4 - 1] [i_3] [i_1] [i_1 + 2] [i_0] = (unsigned char)128;
                                var_15 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned char) min(((-(arr_15 [i_2 - 2] [i_5 + 1]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_2 + 1] [i_5 - 2])))));
                        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) var_1)) | (arr_15 [i_0] [i_5 + 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (min((((var_7) ? (1281302589) : (((/* implicit */int) var_2)))), (((int) var_0)))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) arr_1 [i_5 - 1])) : ((~(((/* implicit */int) var_14)))))))))));
                        arr_18 [i_0] [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_7))))) ? (((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((int) 12ULL)))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2 - 2] [i_2]))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 + 3] [i_1] [i_2 - 2] [i_2 + 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-8156)))) : (((/* implicit */int) var_10))));
                    var_19 = ((/* implicit */short) (-(1281302589)));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((arr_19 [i_6 + 2]), (((/* implicit */unsigned long long int) arr_20 [i_6 + 2])))))));
        var_21 &= ((/* implicit */unsigned char) max((min((1819341034U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -920013535)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))))));
        var_22 = ((unsigned long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (var_8)))));
    }
    var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) 0ULL))))))));
    var_24 = ((((((3261403444606968065ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1819341037U));
    var_25 = var_0;
}
