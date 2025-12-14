/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141001
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), ((_Bool)1)));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) % (((/* implicit */int) arr_4 [i_2] [i_0]))))) ? ((-(((/* implicit */int) (unsigned short)39958)))) : ((+(((/* implicit */int) (unsigned short)36466)))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_11 [i_0] [i_3 + 3] [i_2] [i_3]))));
                            var_18 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 2] [i_0] [i_3] [i_5]))) & (arr_1 [i_5 + 1] [i_3 - 1])));
                            var_20 += ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)29080)) + (((/* implicit */int) (_Bool)1))))));
                            var_21 += (_Bool)1;
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)17)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5 - 1] [i_1] [i_1] [i_1] [i_0])))))));
                            var_22 = ((/* implicit */signed char) (((+(-4060714451148733584LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 1] [i_3 + 1] [i_3 + 1] [i_3])))));
                        }
                        arr_15 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = min((((/* implicit */unsigned char) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 3] [i_3 + 3])), (min(((unsigned char)127), (((/* implicit */unsigned char) arr_7 [i_1] [i_3 + 3] [i_3 + 2] [i_1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) arr_19 [i_0] [i_6] [i_7 - 1]);
                    var_24 -= (~(min((arr_6 [i_7] [i_7]), ((+(((/* implicit */int) var_13)))))));
                    arr_20 [i_0] = ((/* implicit */int) (((-(((/* implicit */int) arr_12 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1])))) >= (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_7 - 1] [i_7 - 1] [i_0])) > (((/* implicit */int) arr_17 [i_0] [i_6])))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) & (arr_1 [i_0] [i_0])));
        var_25 = (-((~(((/* implicit */int) (short)29522)))));
    }
    var_26 = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), ((short)9789)));
}
