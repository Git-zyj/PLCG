/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111329
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
    var_11 |= ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (signed char)-71)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)188)), ((unsigned short)54667)))) : (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) (_Bool)0);
                var_13 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) min(((short)19978), (((/* implicit */short) (unsigned char)85)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 10982546509629930250ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)68)))))));
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? ((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    var_16 &= ((/* implicit */int) (!(((((unsigned int) var_10)) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [12U] [12U] [i_2])))))));
                    arr_12 [(signed char)10] [i_3] [i_4 + 2] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [(signed char)12] [i_3] [i_3])) - (((((/* implicit */int) arr_0 [i_4 + 3])) - (((/* implicit */int) arr_10 [i_2 + 1] [i_3 + 1] [i_4 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_6] [i_2] [(short)3] [i_2])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_14 [i_2] [5ULL] [i_4] [i_5] [i_4] [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [(unsigned short)11])))) : ((((_Bool)0) ? (arr_8 [i_2] [i_5]) : (((/* implicit */int) (unsigned char)128))))))));
                                var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_5] [i_4] [i_4]))) : (var_7)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_13 [i_2] [i_2] [i_4] [i_4] [i_4] [i_6])))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_4])) : (arr_11 [i_3] [i_3 + 1] [i_5]))) : (((/* implicit */int) min((arr_9 [i_4 + 3] [i_5] [i_3 + 1] [i_6]), (var_9))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_6 [i_5] [i_5] [i_4 + 3])))))))));
                                var_20 |= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                                var_21 *= ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */int) (signed char)19)) <= (var_6)))) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) >= (((/* implicit */int) (short)(-32767 - 1))))))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) (-(var_7)));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_7] [i_2 + 1] [i_7] [i_8] [i_8] [i_8])) % (1631991006))))));
                                var_25 = ((/* implicit */unsigned char) arr_7 [i_2] [i_3] [i_7]);
                                var_26 = ((/* implicit */unsigned int) -1030861790);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (arr_23 [i_2 - 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_3 + 1]))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (unsigned char)171))));
                        var_29 = ((signed char) (+(((/* implicit */int) var_1))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    arr_31 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (4574194490601348747ULL)))));
                    var_30 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [(unsigned short)14] [i_2 + 1] [i_3] [i_11] [i_11]))));
                }
            }
        } 
    } 
}
