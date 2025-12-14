/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18924
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_11)))) ? (((/* implicit */int) var_2)) : (var_1)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (~(((unsigned int) arr_0 [i_0] [i_0]))));
        var_17 = max((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (max((3022834118072536096ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 1521015595U))));
        var_18 = ((/* implicit */signed char) (-(3283413748U)));
        arr_3 [i_0] [10ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2773951707U))))), ((-(max((2773951700U), (1521015595U)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1]) + (arr_4 [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)1])) || (((/* implicit */_Bool) var_7)))))) <= (1521015595U)))) : (((/* implicit */int) ((short) arr_4 [i_1])))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) max(((~(arr_4 [i_1]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)7985)), (var_8))))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) arr_4 [i_2]);
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((arr_4 [i_2]) + (arr_1 [i_2] [i_2]))), (((/* implicit */unsigned int) ((int) arr_7 [(unsigned short)0]))))))));
    }
    var_22 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_23 = ((var_0) + (max((max((var_5), (((/* implicit */unsigned long long int) arr_10 [i_3] [16U])))), (((/* implicit */unsigned long long int) ((int) arr_14 [14ULL]))))));
                    var_24 = ((/* implicit */short) max((max((var_0), (((/* implicit */unsigned long long int) 2773951679U)))), (((/* implicit */unsigned long long int) arr_11 [i_3] [(signed char)5] [i_3 + 2]))));
                }
            } 
        } 
    } 
}
