/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132540
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
    var_17 = ((/* implicit */long long int) (signed char)48);
    var_18 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) max((-955502432593554127LL), (((((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0]))) ? (max((((/* implicit */long long int) var_14)), (2176723921901449631LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 2147483647))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                            {
                                arr_14 [i_2] [i_2] [(unsigned short)1] [i_2] [i_4] [i_1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) + (13987949244783037587ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (13987949244783037587ULL)))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [(signed char)4] [i_4] = ((/* implicit */unsigned long long int) var_1);
                                arr_16 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)192)) >> (((-2176723921901449633LL) + (2176723921901449656LL)))));
                            }
                            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 1) 
                            {
                                var_20 += ((int) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_5 + 2]))));
                                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((144115188042301440ULL) != (arr_3 [i_2 - 1] [i_3]))))))) && (var_8)));
                                arr_19 [(unsigned char)7] [i_1] [i_1] [8U] [i_3] [(_Bool)1] [i_5] = ((/* implicit */short) ((unsigned char) 2176723921901449631LL));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((int) ((6U) * (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(unsigned short)10] [i_5 - 2]))))))));
                            }
                            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) var_16);
                                var_23 -= ((/* implicit */int) ((((((/* implicit */unsigned int) (((_Bool)1) ? (1455211054) : (((/* implicit */int) (short)26945))))) + (((466768815U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-25580)))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 1; i_7 < 7; i_7 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) (+(var_13)));
                                arr_25 [i_0] [(unsigned short)3] [(unsigned short)3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_2 - 2]) < (((/* implicit */unsigned int) (+(((/* implicit */int) (short)26943)))))));
                                var_25 = ((/* implicit */_Bool) ((109152165) - (((/* implicit */int) arr_13 [i_2 - 1] [i_2] [i_2 - 2] [i_3 + 2] [i_7 + 2] [5ULL]))));
                                arr_26 [i_0] [i_3 - 2] [2LL] [i_0] [i_0] = ((((/* implicit */int) (short)-1)) % (((/* implicit */int) (_Bool)1)));
                                var_26 ^= ((/* implicit */unsigned int) var_16);
                            }
                            var_27 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49714))))) ? (((/* implicit */long long int) var_4)) : (((6873701550070618086LL) << (((((/* implicit */int) (unsigned char)255)) - (255)))))))));
                            var_28 = ((/* implicit */long long int) ((min(((-(arr_18 [7LL] [i_1] [i_2] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_3]))))))) / (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_13 [i_0] [3U] [8] [i_0] [i_0] [i_0])), (6792615699075852189ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
