/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131885
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
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((unsigned short)65280), ((unsigned short)53148)))) ? (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) 172506440974059809LL))));
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -172506440974059809LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 172506440974059824LL)) ? (((/* implicit */int) (unsigned short)274)) : (((/* implicit */int) (unsigned char)239))))))))) * (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (3LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned char)3] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_4 [i_0] [(signed char)14])), (min((((/* implicit */unsigned char) var_0)), (max((((/* implicit */unsigned char) arr_4 [i_0] [i_1])), (var_9)))))));
                arr_6 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))), (((var_14) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73)))))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_2 [i_0] [i_1]), ((unsigned short)53160))))));
                arr_7 [i_1] [(unsigned short)3] = ((/* implicit */short) ((((((((/* implicit */int) var_15)) + (((/* implicit */int) arr_0 [i_1])))) + (2147483647))) << (((((/* implicit */int) var_3)) - (1)))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_10 [i_1] [i_1] [i_1]))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_8))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) -5053516304228268655LL);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (5053516304228268655LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23))) != (-5053516304228268655LL)))))));
}
