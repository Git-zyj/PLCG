/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165508
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
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (var_5)))) & (var_10)));
        arr_5 [i_0] [17] = ((max((1245048196U), (((/* implicit */unsigned int) (unsigned char)51)))) <= (((/* implicit */unsigned int) (~(max((((/* implicit */int) var_2)), (var_10)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (unsigned char)204))));
        var_12 |= ((/* implicit */unsigned short) var_10);
        arr_8 [i_1] = ((/* implicit */unsigned short) max(((+(7922323857280956752ULL))), (((/* implicit */unsigned long long int) (short)-20935))));
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 10524420216428594863ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((var_10) == (-1231510388))), ((!(((/* implicit */_Bool) var_3)))))))) : (((((var_7) % (((/* implicit */unsigned int) var_9)))) + (min((var_5), (3826854425U)))))));
    }
    var_13 = ((/* implicit */_Bool) min((var_8), (((/* implicit */short) ((((var_2) || (((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) 1979391203)) || (((/* implicit */_Bool) var_7)))))))));
    var_14 |= ((/* implicit */unsigned char) min((((((var_4) <= (((/* implicit */int) var_8)))) ? (((((/* implicit */int) (short)6394)) / (((/* implicit */int) (unsigned char)200)))) : (var_4))), (((/* implicit */int) ((((/* implicit */unsigned int) var_1)) > (var_6))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -859746606)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-25063))))) : (((((/* implicit */unsigned int) var_9)) * (var_7)))));
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) 1998124543U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))));
    }
}
