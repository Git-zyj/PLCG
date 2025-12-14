/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140733
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((unsigned short) (~(717310178U))))) : ((+(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3577657121U)) ? (717310174U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((long long int) 717310193U))) : ((+(arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)7))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [12] [10] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((717310187U) << (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */unsigned int) var_8)), (arr_8 [12LL] [i_0] [i_1 + 1] [i_4] [i_4])))));
                                arr_13 [(_Bool)1] [(short)8] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) 3577657133U));
                            }
                        } 
                    } 
                    var_13 = ((arr_6 [i_0]) << (((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_9)))))) - (65433))));
                    arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (unsigned short)42853))))))) ? ((~(((((/* implicit */_Bool) 717310175U)) ? (arr_0 [i_0]) : (arr_9 [i_2 + 1] [i_0] [i_0 - 1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_19 [(_Bool)1] [i_5] [i_0 - 1] [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_1 [i_5]))))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_1)) ? (5180307646119891798LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) arr_11 [i_1 - 1] [i_0] [i_5] [i_6])))) - (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [9])) || (((/* implicit */_Bool) var_4))))))));
                        arr_23 [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                    }
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((_Bool) -679614409282908257LL)) ? (((((/* implicit */_Bool) 13088891854434593589ULL)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5] [i_5])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (6970278985572213677LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */int) arr_15 [i_0] [i_5] [i_0 - 1])) * (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (unsigned short)32))))))))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(0LL))))));
                        arr_26 [i_7 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((-679614409282908244LL) ^ (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 369671852U)) ? (((/* implicit */int) (unsigned short)9686)) : (((/* implicit */int) arr_7 [(unsigned short)14] [i_1 + 1] [i_5] [i_1]))))))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) != (((unsigned long long int) 3577657119U))));
                }
            }
        } 
    } 
    var_17 = ((unsigned long long int) (_Bool)1);
}
