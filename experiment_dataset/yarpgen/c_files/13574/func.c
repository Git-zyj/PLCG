/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13574
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
    var_20 = ((((((/* implicit */_Bool) var_8)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (signed char)-9))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (var_19)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_4 [i_0]);
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((min((arr_5 [i_0] [i_0]), (arr_5 [(signed char)9] [i_0]))), (((/* implicit */unsigned short) var_0)))))));
            var_24 |= ((/* implicit */int) (unsigned short)27966);
        }
        var_25 |= ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-16)));
        arr_8 [i_0] = ((/* implicit */long long int) ((unsigned short) (signed char)-17));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((0ULL) << (((9658428359792059780ULL) - (9658428359792059767ULL))))))) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) (-(((424744327U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2])))))))))))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned short) var_17)), (((/* implicit */unsigned short) ((signed char) (_Bool)0)))))) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13579)))));
        var_28 = ((/* implicit */int) arr_1 [i_2]);
        var_29 += ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -13)) ? (var_1) : (((/* implicit */long long int) ((int) (short)-13559)))))) ? (((/* implicit */unsigned long long int) max((min((-1112903157), (((/* implicit */int) (short)-5)))), (736500131)))) : (var_19))))));
    var_31 = ((/* implicit */signed char) var_12);
}
