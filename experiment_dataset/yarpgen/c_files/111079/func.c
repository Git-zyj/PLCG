/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111079
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
    var_13 += ((/* implicit */unsigned char) ((long long int) (((-(1099511627775LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_7))))))));
    var_14 = ((((/* implicit */_Bool) (signed char)101)) ? ((((-2147483647 - 1)) / (((/* implicit */int) (short)26793)))) : ((~((-(((/* implicit */int) (unsigned short)6144)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (min((((((/* implicit */int) (unsigned char)208)) / (((/* implicit */int) var_7)))), (((/* implicit */int) max(((_Bool)1), (arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-26792)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))))) ? (max((((/* implicit */int) (unsigned short)43566)), ((-2147483647 - 1)))) : ((~(((/* implicit */int) ((signed char) 2147483637)))))));
        arr_5 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (var_0)))) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2032)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0])))), ((-(4294967295U))))) : (4294967292U)));
        arr_6 [(signed char)10] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) - (((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) 16U))))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_10)) : (arr_2 [i_0])))))))));
    }
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)124))));
    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) var_4))))) * (((((/* implicit */_Bool) 5937624548753186701ULL)) ? (2147483647) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((unsigned long long int) (!(((/* implicit */_Bool) 2047U)))))));
}
