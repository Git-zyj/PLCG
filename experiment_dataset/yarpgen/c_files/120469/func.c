/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120469
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
    var_11 = ((/* implicit */int) var_1);
    var_12 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_5)) << (min((((/* implicit */long long int) var_8)), (var_3))))));
    var_13 = ((/* implicit */unsigned short) (~(((int) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            var_14 = ((arr_8 [i_0 - 2]) >> (((((/* implicit */int) var_9)) - (12061))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63541)) >= (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) var_10)) >= (((/* implicit */int) var_10)))) ? (-6770713609052977619LL) : (((/* implicit */long long int) var_6)))))));
                            var_17 = var_6;
                        }
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_18 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (arr_10 [i_0] [10] [i_2] [(unsigned short)9] [i_0 + 2] [i_0 + 2])));
                            var_19 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) % ((+(4611686018427387904ULL)))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_6] &= ((/* implicit */short) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_9 [i_0 + 1]))));
                        }
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((short) var_3)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_14 [i_0 + 1])) > (((unsigned long long int) (_Bool)1))));
        }
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
}
