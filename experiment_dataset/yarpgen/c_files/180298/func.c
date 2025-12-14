/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180298
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? ((-(var_1))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_9))))))));
    var_12 = ((((/* implicit */_Bool) (-(var_1)))) ? (var_1) : (min((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) (short)13910)), (16105640536603719849ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -3072283482932289943LL)), (3ULL)))) ? (2338788393U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-26958))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 1] [14U] [i_0] [i_2] = ((/* implicit */_Bool) min((var_4), ((-(((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [22] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((((/* implicit */_Bool) arr_7 [(unsigned short)21] [(short)21] [i_1] [(short)21] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(var_1)))))) : (max((max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_3])))), (((/* implicit */unsigned long long int) ((short) arr_3 [i_0] [17] [17]))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), ((-(((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [20] [i_2] [16] [14U])) ? (var_6) : (((/* implicit */unsigned int) arr_4 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [(short)20] [i_0] [i_0] [14U] [i_0])) ? (((/* implicit */long long int) var_10)) : (arr_3 [i_0] [i_1 + 1] [i_0])))) ? (((/* implicit */long long int) ((arr_11 [i_0] [i_1 - 1] [i_0]) ? (arr_10 [i_0] [i_1 + 1] [i_0]) : (var_10)))) : (((((/* implicit */_Bool) var_2)) ? (arr_3 [17U] [17U] [17U]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_0] [i_1])))))))));
                        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0 + 2] [i_1 - 1] [i_0] [i_1] [i_1] [i_1 + 1]) : (((unsigned int) arr_7 [i_0] [24LL] [i_0] [i_4] [i_0] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5752)) ? (((/* implicit */int) (short)4306)) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (unsigned short)61531)))) : (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_1 - 1] [i_0] [i_4])))))));
                    }
                }
            } 
        } 
    } 
}
