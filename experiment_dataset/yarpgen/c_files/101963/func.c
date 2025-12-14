/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101963
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
    var_18 = var_8;
    var_19 = ((/* implicit */short) var_17);
    var_20 = ((/* implicit */short) ((4715001673530896775LL) ^ (-3185224964242488687LL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_9 [16U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)30))))), (arr_1 [8LL])));
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)14] [4LL] [(unsigned char)3] [i_2] [2LL] [(unsigned char)11])) ? (((/* implicit */long long int) arr_3 [8U] [(unsigned char)13])) : (3185224964242488686LL)))) ? (-4715001673530896775LL) : (((long long int) (unsigned char)221))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [(unsigned char)16] [i_1] [i_0])) - (((((/* implicit */int) (unsigned char)60)) * (((/* implicit */int) arr_7 [i_0] [i_0] [13LL] [i_0] [(unsigned char)9] [5U]))))))) : (((((/* implicit */_Bool) (+(arr_8 [i_0] [(unsigned char)11] [i_1] [(unsigned char)16] [i_2] [i_3])))) ? (arr_8 [i_3 + 1] [i_1] [i_3] [(unsigned char)5] [(unsigned char)5] [(unsigned char)8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2126195527U)) ? (((/* implicit */int) (short)-18633)) : (((/* implicit */int) (unsigned char)175)))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(short)4] [i_2] [i_2] [i_1] [(unsigned char)13] [(short)1])))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_5))))), (arr_2 [i_3 - 1])))))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */unsigned char) var_3);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)47)) ? (max((((/* implicit */unsigned int) (unsigned char)173)), (3640105592U))) : (arr_8 [i_0] [i_0] [(unsigned char)6] [i_0] [11U] [9U])));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? ((~(arr_1 [i_1 + 1]))) : (((long long int) (unsigned char)67))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28241)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned char)101))));
}
