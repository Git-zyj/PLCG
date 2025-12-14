/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100767
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_4 [5U] = max(((+((-(16681373098875538864ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((16681373098875538865ULL) <= (((/* implicit */unsigned long long int) 8115312545102036610LL)))))))));
        var_18 = ((/* implicit */unsigned int) 1765370974834012752ULL);
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) var_1);
        var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (1765370974834012728ULL) : (((/* implicit */unsigned long long int) var_13)))));
        arr_10 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) min((16681373098875538865ULL), (((((/* implicit */_Bool) ((16681373098875538870ULL) >> (((var_12) - (7555356297297635617ULL)))))) ? (((((/* implicit */_Bool) (unsigned char)53)) ? (var_16) : (((/* implicit */unsigned long long int) 1973625228U)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_0)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_13 [i_2] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16681373098875538856ULL))))), (max((6644547542321598622ULL), (((/* implicit */unsigned long long int) (unsigned char)4)))));
        var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)92))))));
        var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (arr_5 [(unsigned char)12] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (arr_8 [12U]))))));
    }
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_16 [10U] [i_3] = ((/* implicit */unsigned int) var_3);
        arr_17 [i_3] [2U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -940089900908002029LL)) ? (arr_5 [i_3] [i_3]) : (arr_6 [i_3]))), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_13) : (((/* implicit */long long int) var_0))))))) : (max((arr_15 [i_3 - 2] [i_3]), (((/* implicit */unsigned long long int) arr_14 [i_3]))))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3]);
    }
}
