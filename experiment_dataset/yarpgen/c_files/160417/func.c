/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160417
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21257)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_5 [16] [(_Bool)0] [(_Bool)0] [i_0]))))) || (((/* implicit */_Bool) (signed char)-47)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (4294967290U)))))))));
                    var_13 = ((/* implicit */_Bool) (~(arr_4 [i_0] [i_2] [i_2])));
                }
                for (signed char i_3 = 1; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_14 = arr_8 [i_0] [i_0];
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_3 + 1] [i_5 - 3]))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (short)32767);
                                arr_17 [i_1] = ((/* implicit */unsigned char) (+(5U)));
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [i_1] [i_0]))) : (arr_3 [i_0] [i_1] [i_5])))) ? (arr_3 [i_4] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_1])) : (1244698033)))))) % (max((((((/* implicit */_Bool) 1004638974)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_4 [i_0] [i_0] [i_5]))), (((/* implicit */unsigned long long int) max((arr_8 [i_0] [i_5]), (1984U))))))));
                                arr_19 [i_5] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)63)) : (-1244698033)))) ? (((((/* implicit */int) (short)-17744)) * (min((((/* implicit */int) arr_11 [i_1])), (1244698033))))) : (min((((/* implicit */int) arr_6 [i_4] [i_5 - 2])), ((+(2147483640)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_4)))))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-44)) != (436805093)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) arr_2 [i_1] [i_8])) == (-1244698033)))));
                                var_19 += ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max(((signed char)113), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) -1244698033))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_23 [(short)0] [0ULL]))));
                }
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_11 [i_1]))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) == ((~(((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)1))))))))))));
                    var_23 = ((/* implicit */unsigned int) 20);
                    var_24 -= min(((~(((/* implicit */int) max(((short)-20774), (((/* implicit */short) (unsigned char)118))))))), (((/* implicit */int) arr_0 [i_9])));
                }
                for (int i_10 = 1; i_10 < 16; i_10 += 1) 
                {
                    arr_34 [i_1] [i_1] [i_10 + 1] [i_10 - 1] = ((/* implicit */signed char) arr_8 [i_1] [i_1]);
                    arr_35 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_33 [i_10] [i_10] [i_10 - 1] [i_10])) - (1244698026))) + (((/* implicit */int) min((arr_10 [i_0] [i_0] [i_1] [i_10 - 1]), (((arr_11 [i_1]) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)11])))))))));
                    arr_36 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                    var_25 = ((/* implicit */unsigned char) -2032164122);
                }
                arr_37 [i_1] [(signed char)15] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_26 -= ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)-4), (((/* implicit */short) var_9)))))) * ((~(var_5))));
}
