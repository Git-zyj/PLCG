/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157375
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
    var_13 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) > (((/* implicit */int) var_11)))) ? (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (11953))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((min((((/* implicit */unsigned long long int) var_4)), (var_12))), (max((var_12), (var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) arr_0 [(unsigned char)0]);
        var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [0ULL])))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3952960214U)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) (short)27643)))))));
        var_16 += ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27643)) ? (((/* implicit */int) (short)27643)) : (((/* implicit */int) (short)(-32767 - 1)))))) > (arr_4 [i_1 - 1]))))) < (min((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))), (arr_3 [i_1 - 2])))));
        var_18 *= ((/* implicit */unsigned int) min((((8180056537040512033ULL) << (((4281659810930417084LL) - (4281659810930417026LL))))), (min((((arr_3 [i_1]) / (arr_4 [i_1]))), (arr_4 [i_1 - 1])))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 17650921437220344750ULL)) ? (((/* implicit */int) (short)27643)) : (((/* implicit */int) (short)28083))));
        var_20 = ((((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 1])) > (((((/* implicit */_Bool) 1039371258433213897ULL)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (_Bool)0)))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)0))))), (max((var_1), (((/* implicit */unsigned int) var_11))))))) >= (min((((/* implicit */unsigned long long int) min((var_0), (var_10)))), (min((var_2), (var_6)))))));
}
