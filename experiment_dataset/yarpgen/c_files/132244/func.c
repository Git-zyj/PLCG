/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132244
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
    var_16 = (!(((_Bool) (short)32748)));
    var_17 = ((/* implicit */unsigned int) ((signed char) var_5));
    var_18 = ((/* implicit */signed char) max((((/* implicit */short) var_7)), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [10ULL] [i_1] = ((/* implicit */short) ((max((((unsigned long long int) var_14)), (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_2)), ((short)-21229)))) >> (((min((var_9), (((/* implicit */unsigned long long int) var_6)))) - (14295ULL))))))));
                arr_6 [2ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_11)), (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((var_15) - (9730905391590783947ULL))))))))) ? ((+((~(arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) - (arr_2 [i_1] [i_0])))) ? (max((arr_1 [i_1]), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) ((((var_15) / (((/* implicit */unsigned long long int) arr_1 [i_1])))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_13)))))))));
                arr_7 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)5582))));
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) + (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)8] [i_1] [i_1]))) + (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) var_6);
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_0);
            }
        } 
    } 
}
