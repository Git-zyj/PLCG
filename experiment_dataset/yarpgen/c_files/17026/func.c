/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17026
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
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) ^ (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_0] [i_1 - 1]))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) ((2918155560577195447ULL) / (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_0 - 2])) ? (15528588513132356169ULL) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (2918155560577195446ULL) : (15528588513132356160ULL)))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [6ULL])) ? (((/* implicit */int) (unsigned short)27052)) : (arr_4 [i_0 + 1] [i_2] [i_2])))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])) << (((arr_4 [i_0 + 1] [i_0 + 1] [i_2]) - (1411367870))))) : ((+(((/* implicit */int) arr_1 [i_0])))))))));
                    var_15 = ((/* implicit */int) (+((+(15528588513132356142ULL)))));
                    var_16 *= ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2959851368U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)8184))))) - (arr_6 [i_0] [i_2])))) >= (((((/* implicit */_Bool) 2789032228909850144ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2199)))))) : (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38484))) : (18446744073709551606ULL))))));
                    var_17 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 3] [i_2]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    arr_9 [i_1] [i_1 - 1] [(short)4] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))));
                    /* LoopSeq 3 */
                    for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) 1335115910U);
                        arr_15 [i_1] = ((/* implicit */signed char) (unsigned short)65528);
                    }
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [11ULL] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [(signed char)3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_5]))) : (arr_10 [i_0] [i_1] [i_0 - 1] [i_1] [(unsigned short)14] [i_0])))) ? ((~(1148417904979476480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2])))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_12 [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] = ((/* implicit */unsigned short) arr_8 [i_6] [i_3] [i_0]);
                            arr_23 [i_0] [i_5] [i_0 - 2] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */long long int) (short)32767);
                            var_19 += (unsigned short)0;
                        }
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */short) arr_10 [(signed char)6] [i_1] [i_7 + 3] [i_7 + 1] [i_7 - 1] [i_7]);
                            arr_26 [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_5] [i_3] [i_3] [(short)11] [i_0] [i_0])) ? (-1364378407) : (((/* implicit */int) (unsigned short)57266))))));
                            arr_27 [i_0] [i_0] [i_3] [i_5] [(signed char)2] |= ((/* implicit */short) ((((((/* implicit */_Bool) -2202826711554338769LL)) ? (((/* implicit */int) (short)1099)) : (((/* implicit */int) (short)29980)))) * (((/* implicit */int) ((-262983347) > (((/* implicit */int) arr_12 [i_3])))))));
                            var_21 = ((/* implicit */signed char) 18446744073709551610ULL);
                        }
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        arr_30 [i_8] [i_8] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-13);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) 11735664142733894643ULL)) ? (-3153659231045976664LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [i_8]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29984)) && (((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1])))))))))));
                    }
                }
                var_23 *= ((/* implicit */short) ((127ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 2] [i_0] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2199))) : (arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 3] [i_1] [i_1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32990)) << (((((/* implicit */int) var_8)) - (7839)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */_Bool) 2147483647)) ? (4611404543450677248ULL) : (11735664142733894643ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32)) ? (((/* implicit */int) (unsigned short)36380)) : (((/* implicit */int) (_Bool)1)))))));
    var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) 18446744073709551593ULL))));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 579817675)) ? (((/* implicit */int) (short)-2281)) : (((/* implicit */int) (signed char)123))));
                arr_37 [i_10] |= ((/* implicit */unsigned long long int) ((arr_20 [i_9] [i_10] [i_10] [i_9] [i_9]) + (((/* implicit */long long int) (-((-(((/* implicit */int) (short)-1)))))))));
            }
        } 
    } 
}
