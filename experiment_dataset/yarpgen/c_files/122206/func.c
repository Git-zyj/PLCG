/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122206
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_6)))));
    var_12 = ((/* implicit */long long int) ((((7389153443307266965ULL) | (11057590630402284665ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((((-2147483647 - 1)) & (((/* implicit */int) var_8)))) : ((~(-15886044))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-125))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14352)))))));
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_1 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_3])) ? (7389153443307266965ULL) : (((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_4 - 1])))))));
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-6))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((var_0) - (1431855733)))))) : (2732240205U)));
                            }
                        } 
                    } 
                    arr_15 [(unsigned char)22] [i_1] [i_2 - 1] |= ((/* implicit */unsigned short) arr_0 [18U]);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) (!(((-3264412665320678796LL) == (arr_18 [i_0] [i_0] [i_2 - 2] [i_5])))));
                        var_19 -= ((/* implicit */signed char) var_9);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_0] [6LL] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_19 [i_0] [i_1] [5ULL] [5ULL] [5ULL])) % (var_10))) | (((/* implicit */long long int) arr_13 [(unsigned short)9] [i_5] [i_5 - 2] [i_2 - 2] [i_2] [i_2]))));
                            arr_22 [(unsigned char)17] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_5] [13U]))))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_6])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1])))))));
                            var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_21 = ((/* implicit */long long int) arr_5 [14U]);
                        }
                        var_22 = ((/* implicit */signed char) arr_0 [i_0]);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [0LL])) & (((/* implicit */int) (_Bool)0))))) / (((((/* implicit */_Bool) (signed char)-125)) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [16] [i_0])))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_7])))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_6)) ? (arr_17 [i_7]) : (((/* implicit */long long int) 2147483642)))) + (9223372036854775807LL))) << (((((((-8118480188406700690LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (8118480188406700732LL))) - (43LL)))))) ? ((-(min((788186015148243593LL), (var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_19 [(signed char)5] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_20 [i_7])))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_7])) < (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [20LL] [i_7] [20LL])) ? (4814528869992124426ULL) : (arr_16 [i_7] [i_7] [i_7] [i_7])))))) ? (((arr_8 [i_7] [i_7] [i_7] [i_7]) & (arr_8 [i_7] [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [(short)4]))))))));
    }
}
