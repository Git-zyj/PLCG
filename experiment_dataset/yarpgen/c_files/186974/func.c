/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186974
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */int) ((_Bool) (+(18378233799137528947ULL))))) < ((-(((/* implicit */int) min((var_6), (((/* implicit */signed char) (_Bool)0)))))))));
        var_20 = ((/* implicit */unsigned int) 15546440143357542364ULL);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2U] [i_1]))) >= (min((arr_3 [i_1]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0]), (((/* implicit */signed char) arr_1 [(_Bool)1] [(_Bool)1])))))) / ((-(4319577565814971521ULL)))))));
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) : ((-(14127166507894580094ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [12U])))))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_23 |= ((/* implicit */unsigned int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
            var_24 &= ((((((/* implicit */_Bool) ((((/* implicit */int) (short)511)) & (((/* implicit */int) (signed char)-1))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = (((-(2572415030U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)49))))));
        }
        /* vectorizable */
        for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            arr_12 [i_0] [i_4] [i_0] = ((/* implicit */short) ((arr_3 [i_4]) / (arr_3 [i_4])));
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */signed char) 9121425484777880427ULL);
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned int) arr_1 [i_0] [i_4]);
        }
    }
    var_27 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) & (((/* implicit */int) var_10)))) >= (max((min((741387789), (-1))), (((/* implicit */int) var_17))))));
}
