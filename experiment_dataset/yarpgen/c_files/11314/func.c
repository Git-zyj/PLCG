/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11314
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_1 [i_0])) < (4481270132896810757LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 576460743713488896ULL)) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6790934879747351726LL))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)28)) < (((/* implicit */int) (unsigned char)206))))))) : (((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -2087473170)) - (min((((/* implicit */unsigned int) (unsigned char)50)), (arr_0 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) 8033632006665886809LL)) ? (13753708375333115004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)209)), (1666295483819969221LL))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        var_15 = ((/* implicit */int) -1666295483819969222LL);
        var_16 ^= ((/* implicit */unsigned int) arr_3 [6ULL]);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (min((((/* implicit */unsigned long long int) (unsigned short)7664)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (10102984780886586323ULL)))))));
        var_18 = max((max((((/* implicit */unsigned long long int) (unsigned short)65527)), (((((/* implicit */_Bool) -6061130134919099605LL)) ? (((/* implicit */unsigned long long int) arr_2 [14U])) : (arr_4 [i_1] [i_1 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1666295483819969207LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (13753708375333115025ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (unsigned char)21)))))) : (max((((/* implicit */long long int) (short)8184)), (6061130134919099605LL)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1245277992))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2])) != (((/* implicit */int) arr_3 [i_2]))));
    }
}
