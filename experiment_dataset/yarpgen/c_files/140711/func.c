/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140711
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59336))))) | (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6220))) & ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0]))) ? ((~(((/* implicit */int) arr_4 [i_0])))) : (max((0), (((/* implicit */int) (unsigned short)52693)))))))));
                var_15 = (((!(((/* implicit */_Bool) ((576460752303423487ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7325)))))))) ? (max((arr_2 [i_1 + 1] [i_1 + 1] [(signed char)7]), (arr_2 [i_1 + 1] [i_1 - 1] [0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))));
                var_16 = -9223372036854775806LL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), ((~(18446744073709551613ULL)))));
                arr_12 [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_3 - 1]))) ? ((+(((((/* implicit */_Bool) 18446744073709551598ULL)) ? (arr_11 [i_2] [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) arr_7 [i_3 - 2] [i_2])))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_11 [i_2] [i_2] [i_2]) : (531494706U)))))));
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 - 1])) ? (arr_10 [i_3 - 2] [i_3 + 1]) : (arr_10 [i_3 - 1] [i_3 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(1040182438U))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))))));
            }
        } 
    } 
}
