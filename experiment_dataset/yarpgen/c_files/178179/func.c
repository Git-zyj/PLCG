/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178179
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 3051983387U))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)33)) ? (var_1) : (var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((int) (+(1858660761U))))));
        arr_5 [i_0] [i_0] = var_0;
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (short)926))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_3))) : (((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-119))) ? (((((/* implicit */int) (_Bool)1)) * (var_0))) : (((int) (_Bool)1)))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_4)))) ? (((int) (unsigned char)62)) : (((/* implicit */int) ((unsigned short) (_Bool)1))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_11))), (((((/* implicit */_Bool) 3464328703U)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551615ULL)))));
    }
    var_20 = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((int) ((unsigned int) var_7)));
                    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((((/* implicit */_Bool) var_7)) ? (2747244677260168250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)27013))))), (((/* implicit */unsigned long long int) min((((-3747611421049178530LL) & (((/* implicit */long long int) 2147483647U)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned short) ((arr_14 [i_2 - 1] [i_4] [i_2 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((var_8) >> (((((((/* implicit */unsigned int) var_13)) & (var_7))) - (539442727U))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_26 *= ((/* implicit */_Bool) var_1);
                        var_27 = (((_Bool)1) ? (286422304U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4))));
                        arr_22 [i_2] [i_2] [i_4] [i_3] [18LL] [i_2] = ((((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 2])) >> (((/* implicit */int) arr_16 [i_2 - 2] [i_2 - 2])));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_7 = 2; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) -8151298192550835702LL))));
                        var_29 = ((((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_2 + 1])), ((short)-25406)))) ? (970233572984575356ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_4] [i_7] [i_7 + 2])), (((3264533411U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                        /* LoopSeq 2 */
                        for (short i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 3439588383U)), (max((((/* implicit */unsigned long long int) var_12)), (arr_14 [i_2] [i_4] [i_8]))))) * (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned char) arr_16 [i_7] [i_7])), (arr_24 [i_4] [i_8] [i_4])))))));
                            arr_28 [i_4] [i_3] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4230921055379944857LL)))))));
                            var_31 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_19 [i_2 - 1] [i_3] [i_7 + 2] [i_7 + 2] [i_8 + 2] [i_8])))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_31 [i_2] [i_2 - 1] [i_3] [i_4] [14LL] [i_7] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (_Bool)1))));
                        }
                    }
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_4] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 855378912U)))) ^ (13933936868190973550ULL))));
                        arr_35 [i_2] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                        var_33 = ((/* implicit */int) min((var_33), (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((signed char)13), (((/* implicit */signed char) arr_9 [i_2 + 1])))))))));
                        var_34 = ((/* implicit */unsigned int) ((short) ((int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8924)))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) min((373123373U), (((/* implicit */unsigned int) -2147483630))));
}
