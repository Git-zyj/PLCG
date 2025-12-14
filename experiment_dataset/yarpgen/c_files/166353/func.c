/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166353
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
    var_19 = ((/* implicit */unsigned short) max((var_4), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) - (2063255639094729464ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)243)), (arr_0 [i_0] [i_0])))))))) + (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [6ULL])) | (((/* implicit */int) arr_3 [i_1])))))))));
                var_21 = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */unsigned int) (((~(arr_4 [i_1]))) == (arr_4 [i_0])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    var_23 = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) || (((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0]))))));
                    arr_9 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)235)) >= (((/* implicit */int) arr_7 [i_2] [i_2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) - (((/* implicit */int) arr_3 [i_2 - 2]))));
                        var_24 *= ((/* implicit */unsigned int) (!(arr_8 [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 3])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) 887115951);
                        var_26 = (~(((/* implicit */int) arr_1 [i_2 - 2])));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((402653184U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)8176))))), (max((((/* implicit */unsigned int) (signed char)98)), (402653166U)))))) * ((+((+(var_1)))))));
    var_28 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), ((+(var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((4150342134783512446ULL) <= (var_2)))) >> (((((/* implicit */int) var_16)) - (204))))))));
}
