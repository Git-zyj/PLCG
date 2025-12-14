/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10434
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
    var_14 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (3U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(arr_0 [i_0] [i_0])))))))))));
        var_16 = ((/* implicit */unsigned int) arr_1 [11ULL] [11ULL]);
        arr_2 [i_0 - 1] = ((unsigned char) (~(((((/* implicit */int) (unsigned char)194)) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) ^ (((/* implicit */int) ((arr_6 [i_1]) == (arr_6 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
        var_18 = ((/* implicit */_Bool) 644225591U);
        arr_8 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [11U]))));
        var_19 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */long long int) var_2)) : (arr_3 [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2063269442664848521LL))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) ((arr_10 [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_13 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_2])) : ((-(((/* implicit */int) arr_9 [i_2])))))), (((((/* implicit */int) ((_Bool) arr_11 [i_2]))) + (((/* implicit */int) arr_9 [i_2]))))));
        var_20 = ((/* implicit */unsigned char) ((max((min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned int) arr_11 [i_2])))), (arr_10 [i_2] [i_2]))) % (((/* implicit */unsigned int) ((int) 305705320U)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        var_21 = (!(((/* implicit */_Bool) arr_14 [i_3] [i_3 + 2])));
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_3]))));
        arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_3] [i_3 - 2])) % (((/* implicit */int) arr_14 [i_3] [i_3 - 2]))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3])) << (((-2063269442664848521LL) + (2063269442664848529LL))))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) ((min((var_0), (((/* implicit */unsigned long long int) var_7)))) ^ (((/* implicit */unsigned long long int) max((137436856320LL), (((/* implicit */long long int) var_9))))))))))));
}
