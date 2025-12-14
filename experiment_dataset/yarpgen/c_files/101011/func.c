/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101011
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
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((+(14U))) + (((3673194768U) % (3818330692U))))))));
        var_21 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(-1))))))), (((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0 - 3]))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55282))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) 1170842752)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_5 [i_1] [10] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)55279))));
            arr_6 [i_0 - 4] [i_1] [i_0] = ((/* implicit */unsigned int) (((+(-1893327302))) & (((/* implicit */int) arr_3 [i_1] [i_1]))));
            var_22 = ((/* implicit */unsigned short) (+(max((max((arr_2 [i_0] [i_0]), (var_16))), (((unsigned int) arr_0 [i_0]))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)49415))));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) var_5);
        }
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(819129444051974912ULL)))) ? ((-(arr_8 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0 + 3] [i_0])))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1182345887)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (7855924626247391169LL)))) - (((arr_3 [i_0] [i_0 + 1]) ? (arr_1 [15LL] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) 7855924626247391169LL)) || (((/* implicit */_Bool) 0ULL))))))))));
    var_26 *= ((/* implicit */unsigned long long int) ((unsigned int) 2304085627U));
}
