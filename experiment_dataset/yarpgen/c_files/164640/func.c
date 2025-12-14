/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164640
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
    var_19 = ((/* implicit */unsigned short) max((231455232984565115ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (var_7) : (36028797017915392LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))))))));
    var_20 = ((/* implicit */unsigned int) -36028797017915397LL);
    var_21 = ((/* implicit */long long int) (+(var_9)));
    var_22 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4015858508579266634LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) : (1750482690U))) >> (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))), ((~(var_5))))) : (var_18));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned long long int) 2814577069U);
        var_24 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (unsigned char)204);
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) - (1480390226U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (max((((/* implicit */unsigned int) arr_0 [i_1 + 1])), (1480390216U)))));
            arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1480390226U)) ? (((/* implicit */int) (signed char)-34)) : (268435456)));
            arr_9 [i_1] [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_2]) % (((/* implicit */unsigned int) 1175464245))))), (((((/* implicit */_Bool) (short)-28107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (18014398509481968ULL))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((16202230851141405149ULL), (((/* implicit */unsigned long long int) var_11))))) ? (max((((/* implicit */int) (_Bool)1)), (8190))) : ((~(1808610074))))))));
        }
        for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_1]), (arr_11 [i_1])))))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_1))));
            arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2139095040ULL)) ? (18428729675200069668ULL) : (((/* implicit */unsigned long long int) 2113929216)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28107)) + (((/* implicit */int) arr_0 [i_3])))))))) ? (((arr_6 [i_1] [i_3] [i_3]) + (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) (unsigned short)49033))))))) : (arr_6 [i_1] [i_1] [i_1])));
        }
    }
}
