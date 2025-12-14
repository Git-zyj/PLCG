/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182083
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
    var_20 = ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), (((((var_11) / (((/* implicit */unsigned long long int) var_7)))) << (((((/* implicit */int) var_17)) - (16536)))))));
    var_22 = ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32753)) * (((/* implicit */int) var_5))))), (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_24 *= ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_17))) < (0LL))), ((_Bool)1)));
        var_25 = ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (852247810793560964ULL))))))) > (((/* implicit */int) ((((var_1) % (var_1))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_26 = ((((/* implicit */_Bool) -1279463935)) ? (-3) : (((/* implicit */int) (_Bool)0)));
            arr_4 [i_0] = ((/* implicit */short) min((((min((6147696355724417845ULL), (var_16))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) < ((-(var_6))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((12299047717985133771ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (max((((((/* implicit */int) (unsigned short)65519)) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4))))));
        }
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (1943173400U)))), (((((/* implicit */_Bool) 9820702824541406218ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10699))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27249))) + (8837000397038685948LL))))));
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((var_7) >> (((var_15) - (6773420743379397264LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2147483647)) >= (-8837000397038685949LL)))))));
        var_27 = ((/* implicit */_Bool) (unsigned short)21085);
    }
}
