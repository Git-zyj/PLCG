/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11885
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) != ((~(arr_1 [(unsigned short)12] [(_Bool)1])))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 1] [i_0 + 1]))))));
    }
    for (short i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))))) ? ((((+(((/* implicit */int) arr_4 [i_1] [0ULL])))) - (((/* implicit */int) max(((unsigned short)12529), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))) : (((((/* implicit */int) ((signed char) arr_4 [i_1] [i_1]))) >> (((max((arr_3 [23]), (arr_3 [i_1]))) - (1852430261285278202LL)))))));
        var_15 = ((/* implicit */_Bool) arr_3 [12LL]);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) ((arr_2 [17LL] [i_1]) <= (((/* implicit */unsigned long long int) arr_3 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32256))))) ? (((arr_3 [i_1]) >> (((arr_2 [i_1] [i_1]) - (14119606707801110088ULL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)42710)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_6)))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        var_18 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) (unsigned short)65531))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_2 [23LL] [i_2 + 4]))), (max((arr_2 [i_2] [(signed char)3]), (((/* implicit */unsigned long long int) (signed char)31))))))));
        var_19 = ((/* implicit */unsigned short) ((short) ((_Bool) arr_3 [i_2 - 2])));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2 - 3] [i_2])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [14]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-13)))))))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) - (arr_2 [i_2] [i_2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) | (arr_2 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)103)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3]))));
            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 6383378214170227138ULL)) && (((/* implicit */_Bool) arr_7 [i_3])))))));
        }
    }
    var_24 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((((-(3310505301U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))));
}
