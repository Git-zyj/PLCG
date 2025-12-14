/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128050
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
    var_17 &= ((/* implicit */unsigned char) (unsigned short)9946);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)9946))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_1])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])), (var_15))))))) ? (min(((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_4 [i_0]))))))) : (((/* implicit */int) var_6))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_16)) * (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [i_1]))));
                                var_21 &= ((/* implicit */int) ((unsigned char) ((((18446744073709551608ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))) ? (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (short)-1006)) + (1030))))) : (((/* implicit */int) arr_5 [i_1] [i_3 + 1] [i_4])))));
                                var_22 -= var_6;
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((13776848105150743792ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)56), (((/* implicit */unsigned short) (short)-4302)))))) : (((-1LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))))) ? (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))), (((((/* implicit */int) (unsigned char)25)) - (((/* implicit */int) arr_8 [i_1] [i_1])))))) : (max((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) > (arr_3 [i_0]))))))));
                }
            } 
        } 
    } 
}
