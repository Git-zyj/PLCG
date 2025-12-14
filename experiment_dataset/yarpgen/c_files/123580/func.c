/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123580
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) max(((+(((/* implicit */int) var_17)))), (((((/* implicit */_Bool) 4917882524613506779LL)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)-42))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) var_17);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (+(arr_3 [i_0] [i_0] [i_0]))))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned short) ((short) (signed char)9));
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_0] = var_18;
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? ((+(4917882524613506777LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (1735973349) : (((/* implicit */int) (signed char)122)))))));
                    arr_13 [i_1] [i_0] [i_1] = ((/* implicit */short) (-(((((((/* implicit */unsigned long long int) arr_1 [i_0])) % (var_0))) % (((/* implicit */unsigned long long int) var_9))))));
                    var_23 = ((/* implicit */short) -8650227958747413100LL);
                }
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)16384))))))) ? (max((((((arr_15 [i_0] [i_1] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_17)) + (151))) - (37))))), (((((/* implicit */_Bool) 2410226481U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_11 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_4]) <= (arr_3 [i_0] [i_1] [i_1]))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) 409089049U)) ? (((((/* implicit */_Bool) arr_6 [i_0] [14U] [i_4])) ? (arr_10 [i_4] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4917882524613506777LL)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((3088631212U) <= (var_13))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) var_16);
                                var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 1206336083U)) < (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(4917882524613506781LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) 1206336083U)))) > ((~(arr_11 [i_0] [i_0]))))))) : ((+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_20 [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42993))))) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */int) var_18)) & (((/* implicit */int) (signed char)-29))))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4917882524613506779LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3088631212U)))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_7)))) : (((/* implicit */int) (short)32766))))));
}
