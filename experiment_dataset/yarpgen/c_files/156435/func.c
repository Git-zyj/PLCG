/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156435
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
    var_15 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) -110060125)), ((~(var_3))))) >= (((/* implicit */long long int) (+(var_2))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((18446744073709551597ULL) > (((/* implicit */unsigned long long int) -5821167050460551373LL))))), (arr_0 [i_0]))) / (((unsigned long long int) 1418686385))));
        var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) 12697091296804432049ULL)) ? (((/* implicit */unsigned long long int) 10)) : (18446744073709551613ULL))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) & (arr_3 [i_1 + 1]))) ^ (((arr_3 [i_1 + 2]) ^ (((/* implicit */unsigned long long int) arr_1 [i_1 + 2]))))));
        var_18 = ((/* implicit */unsigned long long int) var_0);
        var_19 *= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) 9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_1 - 1]) : (((/* implicit */long long int) var_11)))))))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((int) min((((/* implicit */long long int) 2105588992U)), (-169808816782252656LL))))) / (((((/* implicit */_Bool) 1418686382)) ? (-7248753930170700510LL) : (((/* implicit */long long int) 2147483647))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned int i_4 = 4; i_4 < 12; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) min((var_7), (arr_1 [i_2])))), (((((/* implicit */_Bool) 2147483647)) ? (19ULL) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_3])))))), (((/* implicit */unsigned long long int) min((((long long int) 12ULL)), (((((/* implicit */_Bool) arr_9 [1U] [i_3])) ? (arr_13 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) var_0)))))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((min((((var_8) - (((/* implicit */unsigned long long int) 6223927156051304180LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_10 [i_2])), (2140446572U)))))) > ((-(min((((/* implicit */unsigned long long int) -1)), (7920640046802386090ULL))))))))));
                    arr_14 [i_2 + 1] [i_3] [i_2 + 1] = -4219195267062900602LL;
                }
            } 
        } 
    }
}
