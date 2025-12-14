/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160867
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
    var_11 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (signed char)124));
            var_12 *= ((/* implicit */signed char) max((min(((short)-26080), ((short)-11850))), (((/* implicit */short) arr_5 [i_1]))));
            var_13 = ((/* implicit */unsigned short) (short)-4698);
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)8721)) ^ (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1]))))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */long long int) var_1);
                            var_15 = ((/* implicit */long long int) min(((-(1359020273U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> (((((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) - (15))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_16 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) (_Bool)0)), (0LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) < (((/* implicit */int) (short)-32761)))))))) < (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_12 [i_5] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 1])))))));
            var_17 *= ((/* implicit */unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned int) var_3)), (arr_2 [i_0] [i_5 + 1]))));
        }
    }
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_6) ? (8396242418896772317LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4)))))))))))));
}
