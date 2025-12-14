/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177000
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
    var_16 = ((/* implicit */int) 1963544601U);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) 1963544623U);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((_Bool) ((int) 359907995))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1963544603U)) ? (2331422693U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-9102)), ((unsigned short)65534))))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32797)))) ? (3194055154U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2331422693U))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((((2331422686U) << (((1963544602U) - (1963544573U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-8242))))) >> (((((/* implicit */_Bool) 2331422666U)) ? (((((/* implicit */int) (_Bool)1)) >> (((2331422693U) - (2331422687U))))) : (((/* implicit */int) ((_Bool) 1834496967174393983ULL)))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1407722736U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (2887244561U)))) ? (((((/* implicit */_Bool) 2875047659U)) ? (2331422678U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)43))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)-23896))));
                                arr_20 [i_0 - 1] [i_0] [i_2] [i_0] [i_0] = 2331422662U;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) ((long long int) (_Bool)1));
}
