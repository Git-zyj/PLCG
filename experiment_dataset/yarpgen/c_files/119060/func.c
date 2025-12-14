/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119060
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (signed char)-32))))) > (max((((/* implicit */int) arr_0 [i_0] [i_0])), (11))))) ? (((/* implicit */int) ((short) max((var_2), (((/* implicit */unsigned char) (_Bool)1)))))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */signed char) arr_2 [i_0]);
                        var_22 ^= ((/* implicit */signed char) 4294967295U);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned short)10971)))), (max((843171326), (((/* implicit */int) (signed char)8))))))) ? (min(((~(((/* implicit */int) arr_0 [i_2] [(unsigned char)10])))), (((((/* implicit */int) (unsigned char)63)) ^ (((/* implicit */int) var_17)))))) : ((~(max((((/* implicit */int) (unsigned char)50)), ((-2147483647 - 1)))))))))));
                        var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned char)115)) - (111)))))))) ? (((unsigned long long int) min((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_3])), (-1365896327816658655LL)))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_3])) ? (7213482369014913338LL) : (((/* implicit */long long int) 21U)))), (((/* implicit */long long int) var_1)))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (unsigned short)54343);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) min(((unsigned short)51193), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_4 - 2])), (arr_8 [i_4 - 2])))))))));
        var_26 = ((/* implicit */short) max((arr_7 [(unsigned short)7] [i_4] [(unsigned char)4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (1401114570) : (((/* implicit */int) (unsigned short)65535))))))))));
    }
    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5]);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_17 [i_5 - 3] [i_5]))));
    }
    var_29 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)129)) && (((/* implicit */_Bool) 15ULL))))), (((((/* implicit */_Bool) -1365896327816658655LL)) ? (-7213482369014913327LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
    var_30 = ((/* implicit */signed char) var_15);
    var_31 |= ((/* implicit */short) var_14);
}
