/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104660
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [14LL] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_1 [i_0])) << ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((((((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_0] [i_0]))))) : ((~(9223372036854775807LL))))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((min((((/* implicit */long long int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))), (((arr_1 [i_0]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) + (6380538257587692546LL))) - (46LL))));
        arr_4 [i_0] = max((max(((~(var_9))), (var_10))), (((/* implicit */long long int) (!(max(((_Bool)1), (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] [i_1] = ((max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0))))))) << (((((/* implicit */int) (_Bool)1)) - (1))));
            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) min((((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_1)))), ((~(((/* implicit */int) min((arr_0 [i_0] [12LL]), (arr_1 [i_0])))))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((4130486459442994583LL), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_5 [i_2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [18LL])))))))) : (((/* implicit */int) max((arr_6 [i_0] [1LL]), (max(((_Bool)1), (arr_0 [i_0] [i_0])))))))))));
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_6)))))))) * ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_12 [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((8043982651721365054LL) < (-6197623434019761525LL))))))) / (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2 - 1]) : (var_0)))));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_17 [i_0] |= ((arr_10 [i_3 - 1] [(_Bool)1]) || (arr_10 [i_3 - 1] [i_3]));
            arr_18 [i_0] = (((+(arr_5 [(_Bool)1] [i_0] [i_0]))) - ((~(var_5))));
        }
    }
    var_13 = var_10;
}
