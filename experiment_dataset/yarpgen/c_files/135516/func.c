/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135516
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
    var_15 = (+(((/* implicit */int) var_9)));
    var_16 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_13)) : (var_0))), (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned short)31965)))))), (((((/* implicit */_Bool) max(((unsigned short)31953), (((/* implicit */unsigned short) (unsigned char)0))))) ? ((-(((/* implicit */int) (unsigned char)155)))) : (((((/* implicit */_Bool) (signed char)121)) ? (1286962585) : (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) max((var_2), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)124)), (max(((unsigned char)158), (((/* implicit */unsigned char) (signed char)-125)))))))));
                                arr_14 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max(((+(((((/* implicit */int) (signed char)124)) << (((((((/* implicit */int) (signed char)-82)) + (112))) - (11))))))), ((-(((/* implicit */int) ((_Bool) (unsigned short)59927)))))));
                            }
                        } 
                    } 
                    arr_15 [(signed char)10] [i_2] [i_2] [i_2] = ((((/* implicit */int) (unsigned short)33571)) <= (((/* implicit */int) max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))));
                    arr_16 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((18446744073709551609ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) % (-2123803030)))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                            {
                                arr_27 [i_0] [(short)9] [(short)9] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)84))));
                                var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 2] [i_0 - 2]))));
                                arr_28 [i_0] [i_0] [i_1 - 1] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned short)33554);
                            }
                            var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1872531452672530961LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */unsigned long long int) arr_26 [i_0 + 1] [i_6] [i_0 + 1]))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)-124))));
                        }
                    } 
                } 
                arr_29 [(_Bool)0] = (unsigned char)112;
            }
        } 
    } 
}
