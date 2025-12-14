/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17238
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-((+(((/* implicit */int) var_6)))))))));
        var_20 -= ((/* implicit */signed char) max((((unsigned long long int) (+(((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 777410422605864813LL)) * (10120173953299467298ULL)))) ? (3846962573U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)44)) ^ (((/* implicit */int) var_0))))))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((var_18), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((var_17), (((/* implicit */int) (_Bool)1)))))))));
        var_22 = ((/* implicit */_Bool) var_6);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)32752)), (3005755914U)))) - (((long long int) (signed char)74))))))));
            var_24 = max(((~(var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (-2147483633) : (((/* implicit */int) (signed char)-127))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_25 -= ((/* implicit */short) (+(3360967366U)));
                arr_13 [i_1] [i_1] [i_1] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (1384400125573109470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))));
                arr_14 [0U] = (+((~(((var_7) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (signed char)-121)))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_20 [6ULL] [i_4] [6ULL] [7LL] [7LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((var_17) == (((/* implicit */int) (unsigned char)113))))) >= ((~(((/* implicit */int) var_15)))))))));
                            var_26 ^= (signed char)-64;
                        }
                    } 
                } 
            }
            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_23 [i_6] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (_Bool)1))))))));
                var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_15)) : (-87570501)))) : ((+(4294967266U)))))));
                arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)16684)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17062343948136442152ULL)));
                arr_25 [i_1] [i_6] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) ? (max((((/* implicit */unsigned int) (signed char)7)), (max((((/* implicit */unsigned int) var_1)), (1791098765U))))) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-112)))))))));
            }
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            arr_28 [9ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) var_15)))));
            arr_29 [i_1] [i_7] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)-30839))))));
        }
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-((+(11571513318269359694ULL))))))));
    }
    var_29 = ((/* implicit */unsigned char) var_11);
}
