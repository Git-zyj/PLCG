/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12003
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) <= ((~(var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) (unsigned char)235))))) : (((((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_8)) + (127)))))) / ((~(var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_13), ((signed char)113)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) ((signed char) var_13))))), ((+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1792))))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-36)))) ? (max((var_12), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)9] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32760)) ? (-1499490135) : (1442144149))))));
                arr_5 [i_0] [i_0] = ((((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (short)2895)) : ((-2147483647 - 1)))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) <= (var_1)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0])))))));
                arr_6 [i_0] [8U] [i_1] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 0)) : (3633082055U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))));
                                var_18 = ((short) var_1);
                                arr_19 [i_4] [i_3] = ((/* implicit */unsigned long long int) (~((~(((var_0) ^ (var_4)))))));
                                arr_20 [i_2] [i_3] [i_3] = ((/* implicit */int) ((4294967280U) >> (((/* implicit */int) ((((arr_10 [i_4] [i_3]) >> (((var_4) - (4004814037U))))) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))))))));
                                arr_21 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)10))))), (((((/* implicit */_Bool) arr_15 [i_3] [i_5])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (signed char)116))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) var_5);
                    arr_22 [i_3] [i_3] = ((((/* implicit */long long int) max((((var_5) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1))))))) >= (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_10 [i_2 - 1] [i_4 + 1]))));
                }
                arr_23 [i_2 - 2] [i_2] |= ((/* implicit */short) ((int) (~(var_9))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
}
