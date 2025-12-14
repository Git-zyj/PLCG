/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154553
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) ((max((550170286U), (((/* implicit */unsigned int) var_5)))) / (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37453)))))))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) var_3)) >= (arr_2 [i_0])))) >> (((413822952U) - (413822948U))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [7U] [i_0])), (4294967292U)))) > ((-(var_10)))))));
        var_12 = ((/* implicit */unsigned int) ((var_1) * (((/* implicit */unsigned long long int) 1828582216U))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) min(((~(((unsigned long long int) 413822952U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_6 [i_0] [i_1] [i_2] [i_0]), (arr_1 [i_0])))))))));
                    var_14 = ((((/* implicit */unsigned int) max((((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */int) arr_0 [14] [14]))))), (((((/* implicit */int) (unsigned short)127)) >> (((3881144343U) - (3881144315U)))))))) / (((max((((/* implicit */unsigned int) (unsigned short)37453)), (3881144329U))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))))));
                    var_15 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) ((((/* implicit */_Bool) 137438953471ULL)) || (((/* implicit */_Bool) (unsigned short)37453))))), ((~(((/* implicit */int) (unsigned short)53843))))))));
                    var_16 = var_10;
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) var_6);
    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 9007199187632128ULL))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)34287)), ((-(960384241)))))) : (4294967295U)));
    var_19 -= ((/* implicit */int) 4294967267U);
    var_20 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)22991), (var_8)))) || ((!(((/* implicit */_Bool) var_6))))))), (max((((((/* implicit */_Bool) 4294967295U)) ? (var_10) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_7))))));
}
