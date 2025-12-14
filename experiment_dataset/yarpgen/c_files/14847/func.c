/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14847
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (((152014242U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_4) : (arr_0 [(unsigned char)5])))) ? (((/* implicit */int) max(((unsigned short)6395), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) : ((+(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4108019022U)))) ? ((-(5421297816275010916LL))) : (((((/* implicit */_Bool) (short)-28603)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2]))) : (36028522141057024LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (arr_5 [i_0] [i_1] [i_0])))))));
                                var_22 = ((/* implicit */signed char) max((7088078570077666991LL), ((((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) -7088078570077666991LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_12 [i_0] [(signed char)6] [i_2] [i_3 + 3] [i_4]))) : ((+(arr_8 [i_0])))))));
                                var_23 = var_0;
                                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_0 + 3] [i_0 + 1] [i_3 - 3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_12 [i_1] [i_0 + 3] [i_0 - 1] [i_3 + 4] [(signed char)0])))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_12 [i_4] [i_0 + 2] [i_0 + 1] [i_3 + 2] [i_3 - 3]))) : (((((/* implicit */_Bool) arr_12 [i_4] [i_0 + 1] [i_0 + 3] [i_3 + 1] [i_4])) ? (var_12) : (arr_12 [i_1] [i_0 + 1] [i_0 + 2] [i_3 + 1] [i_3 - 1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) max((var_25), ((-(arr_9 [i_1] [12U] [i_2])))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((((((/* implicit */int) var_19)) > (((/* implicit */int) (short)21007)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1]))))) : ((+(var_2))))), (((/* implicit */long long int) arr_7 [i_0] [i_2])))))));
                }
            } 
        } 
    }
    var_27 += ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-6958)))))) > (((/* implicit */int) var_19))));
}
