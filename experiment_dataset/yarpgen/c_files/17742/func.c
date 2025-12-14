/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17742
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_1] = (((!(((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)80)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1543810852)))))) : (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)2534)) : (((/* implicit */int) (unsigned char)146))))))));
                arr_8 [i_0] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_1 [12ULL]))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_11 [6ULL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 14246287674703846336ULL))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (1543810840) : (((/* implicit */int) (unsigned short)2559)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_4)))))))) % (var_1)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] [0LL] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((_Bool) ((unsigned int) (signed char)(-127 - 1)))))));
                                arr_18 [i_0] [i_2] [i_4 + 3] = ((/* implicit */short) ((_Bool) 1519331946));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_13 *= ((/* implicit */unsigned char) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)15515)) ? (((((/* implicit */_Bool) min((arr_27 [i_0] [(signed char)6] [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)120))))) ? (((/* implicit */int) ((_Bool) -1543810870))) : (arr_5 [i_0]))) : (((/* implicit */int) ((_Bool) ((unsigned short) (unsigned short)63001))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9558)))))));
                                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_7 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_7 - 1] [i_7 - 1])) : (arr_6 [i_7 - 1] [i_7 + 1] [i_7 + 1]))), (((((/* implicit */_Bool) ((unsigned int) (short)496))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (arr_16 [i_0] [i_6])))));
                                arr_28 [i_0] [i_1] [i_5] [i_6] [14ULL] = ((/* implicit */unsigned short) ((long long int) min((arr_10 [i_7 + 1] [i_7 + 1] [12LL] [i_7]), (((((/* implicit */_Bool) 31U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1U))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((var_17), (arr_13 [i_0] [(unsigned short)10] [i_5] [(unsigned short)10])));
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_9)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43425), (min(((unsigned short)24385), (((/* implicit */unsigned short) var_10)))))))) != (1022389702U)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+((+(((long long int) var_0))))));
}
