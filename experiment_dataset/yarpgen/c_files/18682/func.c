/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18682
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
    var_12 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    var_13 = ((/* implicit */unsigned long long int) ((short) ((1748521507U) > (3645886347U))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [(short)1] = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) (~(arr_5 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7604))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (649080949U)))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] [i_0] [i_4] = var_0;
                            var_15 *= ((/* implicit */signed char) (short)-19530);
                            var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 649080922U)) ? (((((/* implicit */_Bool) 3645886395U)) ? (1668973854) : (((/* implicit */int) (short)3674)))) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3 - 1] [i_4 - 1])))))));
                            arr_16 [i_0] [i_0] [i_2] [7U] [i_0] [i_3] [i_4] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4 + 1])))) - ((~(((/* implicit */int) arr_14 [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_3]))))));
                            arr_17 [i_1] [i_2] [i_1] [i_0] = (-(((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [0LL] [0LL] [(_Bool)1])) : (((/* implicit */int) (unsigned char)101))))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) -2125641797684830191LL)) : (14919196964722897109ULL)));
                arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((max((((/* implicit */unsigned long long int) arr_13 [i_2] [i_0] [i_1] [i_1] [i_1] [i_0] [(signed char)15])), (var_11))) >> (((((((/* implicit */_Bool) 3527547108986654507ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (var_3))) - (84LL)))))));
            }
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (short)-3661))));
        }
    }
}
