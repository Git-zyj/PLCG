/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161434
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-35))))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2])))) : (max((((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-35))))))));
                    var_17 ^= ((/* implicit */int) min(((unsigned short)65515), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))) == (14127352498116324805ULL))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_0] [i_1])));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) 2923135361030148815LL)))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_5 [i_0 + 1]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2923135361030148816LL)) ? (((/* implicit */int) min(((unsigned short)12288), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) (unsigned short)65528))));
                            arr_17 [i_5] [i_0] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_4] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
                            arr_22 [i_2] [i_4] [i_2] [i_4] [i_4] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-32765)))))));
                            var_21 = ((/* implicit */_Bool) (~(((arr_5 [i_0 + 1]) ^ (((/* implicit */long long int) var_8))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) 4426627176927156485LL)) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((((/* implicit */unsigned long long int) (short)25109)), (arr_7 [i_0])))))));
                        }
                        var_23 ^= ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (short)-23)) : (((/* implicit */int) (unsigned short)56274))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_2])))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_2);
}
