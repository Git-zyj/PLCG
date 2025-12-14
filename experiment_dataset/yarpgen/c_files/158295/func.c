/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158295
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_18))));
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)6] [10LL] [i_2])) ? (-443461411535736720LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))))) && (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0]))))))), (((int) (~(((/* implicit */int) var_3)))))));
                    var_21 = ((/* implicit */long long int) max((((_Bool) (+(((/* implicit */int) arr_0 [i_0]))))), ((!(((/* implicit */_Bool) arr_1 [10LL]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    arr_14 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [(_Bool)1] [i_4] [i_4] [i_5])) / (arr_9 [i_5]))) / ((+(((/* implicit */int) arr_12 [i_4] [i_4] [i_5] [i_5]))))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_11 [i_3] [i_3])))))) : (min((657368387), (((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1))))))));
                    arr_15 [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [(_Bool)1] [(signed char)21]), (arr_10 [i_3] [i_4]))))) : (min((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_3])), (14303106558901664755ULL))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_11 [i_3] [i_5])), (443461411535736718LL))), (((/* implicit */long long int) arr_9 [i_3])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) (short)14))))) ? (((/* implicit */int) (short)12809)) : (((/* implicit */int) ((unsigned short) var_14)))))));
}
