/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102213
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((((~(((/* implicit */int) (unsigned char)0)))) & (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_6))))))) : (((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */int) (unsigned short)26319))))) ? (((/* implicit */int) ((short) var_17))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)11195))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) 2706784542U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) : (arr_2 [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 1]) && (arr_0 [i_0 + 2])))))));
                var_21 = ((/* implicit */unsigned int) (unsigned char)246);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1])))))) >= (arr_2 [i_0] [i_0])))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)2519)) << (((((/* implicit */int) (short)32)) - (26)))));
                                arr_17 [i_0] [(_Bool)1] [i_4 + 1] [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [2LL]);
                                var_23 *= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)243)), (var_4)));
                                var_24 = ((/* implicit */short) ((unsigned char) (short)2101));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
