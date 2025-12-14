/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10574
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
    var_18 -= max((((/* implicit */unsigned long long int) var_12)), ((((!(((/* implicit */_Bool) (unsigned short)1792)))) ? ((+(var_10))) : (((((/* implicit */_Bool) var_1)) ? (140737488355312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) (short)-523)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)58))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2334271126U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) <= (min((((/* implicit */unsigned long long int) 511)), (var_11)))))) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (-1496716929224019380LL))))))));
    var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (1496716929224019388LL)))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) 1496716929224019379LL))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) ? (72057594037927934ULL) : (((((/* implicit */unsigned long long int) -1496716929224019384LL)) * (18446744073709551615ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1974348132097295004LL))));
                arr_6 [i_0] = ((/* implicit */long long int) min((max(((-(var_4))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */int) arr_2 [i_1]))));
            }
        } 
    } 
}
