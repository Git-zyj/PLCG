/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144294
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
    var_16 -= ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (arr_4 [i_0]))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (signed char)49);
                                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1007862032)) ? (((/* implicit */int) (short)-13240)) : (((/* implicit */int) (unsigned short)65535))))) ^ (var_2)))) & (var_6)));
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) 15U);
                                var_19 = ((/* implicit */unsigned short) (+(1573725353U)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) var_9);
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-68)) < ((-(((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (unsigned short)25071)) : (((/* implicit */int) arr_7 [(unsigned short)9]))))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((6364340956193051530ULL) & (((/* implicit */unsigned long long int) 2721241946U))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_11 [i_0] [i_0] [i_0]) % (((/* implicit */int) (unsigned short)949)))) * (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)949)) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (-(((((/* implicit */int) arr_6 [i_0] [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                    var_23 += ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((arr_24 [(unsigned short)14] [i_1] [i_5]) ? (((/* implicit */unsigned long long int) var_2)) : (112253889708622989ULL)))))));
                    arr_29 [i_1] [i_0] [16] [i_1] = ((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_5] [(short)4]);
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_34 [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_16 [i_0] [i_8] [i_5] [i_8])), (8796093022176ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)949))) : (((18446735277616529439ULL) * (var_3)))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) var_5))) || (((/* implicit */_Bool) ((int) arr_33 [i_0] [i_1] [i_5] [i_8] [i_1] [i_1]))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) (((((~(8469550123035527871LL))) + (9223372036854775807LL))) << (((max((4198526857U), (var_2))) - (4198526857U))))))));
                        var_25 = ((((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_31 [i_0] [i_0]))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))) % (var_3));
                    }
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_26 = arr_6 [i_1] [i_1];
                    var_27 = ((/* implicit */short) ((arr_14 [i_9] [i_1] [i_1] [12LL] [2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))));
                    arr_37 [i_0] [i_0] [i_9] = ((/* implicit */int) arr_6 [i_0] [i_9]);
                }
                for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-1))));
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) + (((unsigned int) (unsigned char)26)))) == (min((((/* implicit */unsigned int) var_12)), (134217727U)))));
                }
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */unsigned char) arr_11 [i_11] [i_11] [i_11]);
        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)35)) >> (((/* implicit */int) ((arr_4 [i_11]) != (arr_4 [i_11]))))));
        arr_43 [i_11] = ((/* implicit */int) arr_12 [i_11] [i_11] [i_11]);
    }
}
