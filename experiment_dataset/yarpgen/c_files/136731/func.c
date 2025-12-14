/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136731
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
    var_12 ^= ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (-(1069547520)))), (((((/* implicit */_Bool) (unsigned short)60916)) ? (((/* implicit */unsigned long long int) var_8)) : (686342768218746198ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_14 = ((/* implicit */int) var_11);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4619))) : (4244334142112658445ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))) == (18ULL))) ? (4095LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_1])), (arr_3 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_3);
        var_17 = ((/* implicit */long long int) 2147483648U);
        arr_8 [i_2] = ((/* implicit */unsigned char) max((18ULL), (((/* implicit */unsigned long long int) (unsigned short)8176))));
        var_18 *= ((/* implicit */unsigned char) (unsigned short)4619);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)20678))))), ((unsigned short)60916)));
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) arr_7 [i_3] [i_3])))) == ((((_Bool)1) ? (max((var_8), (833440848))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_5)))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (3265628851U)))) << (((/* implicit */int) ((_Bool) 4244334142112658445ULL)))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4620)))))));
                    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4086504988U)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_5 [i_4]))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) -1LL))));
    var_24 += ((/* implicit */unsigned short) var_5);
}
