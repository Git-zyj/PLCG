/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117120
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)16] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3491804022U)))) ? (((/* implicit */int) ((4804377125812596927LL) >= (7748205030367184562LL)))) : (arr_2 [i_0] [i_1])))) * (var_10)));
                arr_6 [5ULL] [i_1] = ((/* implicit */short) arr_2 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */int) (short)-5233)) - (max((((/* implicit */int) (short)28987)), (arr_2 [i_0] [i_2])))))));
                    arr_11 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_9 [(short)19] [i_1] [i_2 + 3] [(short)19]), (arr_9 [3] [i_1 + 1] [i_1 + 1] [(short)16])))) && (((/* implicit */_Bool) max((arr_9 [i_0] [18ULL] [1] [18ULL]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 1] [i_1 + 1]))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : (var_6))))))));
                }
            }
        } 
    } 
    var_13 = max((((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_11))))))), (var_11));
}
