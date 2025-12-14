/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189567
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
    var_16 &= ((/* implicit */int) var_3);
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (unsigned char)156))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)15] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_1 + 3])) : (((/* implicit */int) arr_3 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = ((_Bool) arr_9 [i_0] [i_0] [i_2] [i_4]);
                                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)99))));
                                arr_16 [i_2] [i_2] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)236))))));
                                var_20 *= (_Bool)0;
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_21 ^= ((/* implicit */_Bool) var_3);
                    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-37)) % (((/* implicit */int) (_Bool)1))))));
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_7 [i_0] [i_1] [i_5] [i_5])))))))));
                }
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_23 &= ((/* implicit */unsigned char) min((((long long int) var_12)), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 700962928)) : (((((/* implicit */_Bool) (unsigned char)149)) ? (1664134671018866308LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) >= (17041813598490718002ULL))))) / (5457074747797255744LL))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 17041813598490718002ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)66))))))));
                }
                var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(6143163787125268987LL)))) ? (arr_4 [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (arr_0 [i_1])));
            }
        } 
    } 
}
