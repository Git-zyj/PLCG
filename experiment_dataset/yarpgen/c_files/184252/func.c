/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184252
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
    var_17 = ((/* implicit */short) (-2147483647 - 1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) (-(((2147483647) & (((((/* implicit */int) arr_6 [(short)16] [i_1] [(short)16])) << (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 2]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0]);
                    var_18 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3810804806U))))) * ((~(962102146)))));
                }
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(484162490U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22897)) || (((/* implicit */_Bool) 3284177939U))))) == (((((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) >> (((((/* implicit */int) (unsigned short)65535)) - (65509)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -2046089778)) & (0U)))) || ((_Bool)1))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [6] [(short)18] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_19 = (+(((/* implicit */int) (short)-16151)));
                arr_22 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 3810804815U)) ? ((-2147483647 - 1)) : ((+((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 877931259);
}
