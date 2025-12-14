/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100012
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [17ULL] [i_0] [i_1] = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)));
                                var_13 = ((/* implicit */int) ((var_1) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 894133464U)) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_5 [i_4 - 2] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) 4904694738415990888LL)) : (arr_9 [i_2])));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65517)))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [17U] [i_5])) ? (3400833832U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_0])))))) ? (arr_18 [i_0] [i_0 + 2] [i_0] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                                arr_22 [i_0] [(signed char)9] [i_2] [i_5] = (-((+(((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) 894133472U);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_1] [22ULL]))) : (arr_18 [14] [i_1] [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_2]) : (((/* implicit */int) (short)-19)))) : ((-(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        arr_23 [i_0 - 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (11963500521178822115ULL) : (6483243552530729515ULL))) << ((((~(3400833840U))) - (894133392U)))));
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21)) ? (((/* implicit */int) (unsigned char)243)) : (-800423249)));
            arr_26 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-19)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_21 [18U] [i_0]))))));
            var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (signed char)113)) << (((800423274) - (800423253))))));
        }
        var_21 += ((/* implicit */unsigned char) arr_7 [i_0] [(short)0]);
    }
    var_22 = ((/* implicit */unsigned long long int) (signed char)-43);
    var_23 = max((((/* implicit */int) var_3)), ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_4))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-800423274)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((var_9) << (((8191) - (8190))))) : (((/* implicit */long long int) ((unsigned int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_10))))) != (((((/* implicit */_Bool) (unsigned char)243)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
}
