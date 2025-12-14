/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151552
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
    var_14 = ((/* implicit */_Bool) (unsigned short)63678);
    var_15 = ((/* implicit */short) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) var_2)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) min((min((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)46280)))), ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1]))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_17 = ((/* implicit */signed char) var_2);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) arr_10 [i_1 - 1] [i_1 - 1] [(signed char)4] [i_1 + 1]);
                        var_19 &= ((/* implicit */_Bool) 2111700908364982055LL);
                        var_20 ^= ((/* implicit */short) (-(-2111700908364982049LL)));
                    }
                    arr_13 [(short)0] [i_1] [(short)0] &= ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) arr_12 [i_0 - 2] [i_2 + 2] [(_Bool)1] [i_2] [i_2 + 2]))), (((unsigned int) (short)-2888))));
                }
                for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    var_21 &= ((/* implicit */short) max((((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) * ((+(arr_10 [4] [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [8LL] [(signed char)12])) * (((/* implicit */int) arr_15 [i_1 - 2] [14ULL] [i_4])))))));
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_11)))));
                }
            }
        } 
    } 
}
