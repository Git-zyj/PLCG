/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142386
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned short)54120))))))) & (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_8 [i_0 + 3] [i_3 - 3] [i_2] [i_3 - 2])))))))));
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_7))) == (((/* implicit */int) ((short) ((unsigned char) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_0 - 2] [i_1]))))));
                                var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-104)), (((unsigned short) arr_1 [i_3]))))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_4]))) | (var_2))), (((/* implicit */long long int) var_4))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_7 [i_4] [(unsigned char)8] [(short)3] [i_0 - 1])), (min((4466662271011893541ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1] [i_1] [13ULL] [i_3])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [(short)10] [0U] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_4]))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3878110730U)) ? (((/* implicit */int) var_3)) : (-1824013059)));
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) var_12);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), ((-(((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_4 [i_2] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) ^ (13980081802697658074ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    }
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [2] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])) > (((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [2LL] [2LL] [(short)4])) ? (((/* implicit */int) (short)18813)) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))))) ? (((int) (unsigned short)62365)) : (((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_2] [0U])))) : ((((~(((/* implicit */int) var_0)))) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
