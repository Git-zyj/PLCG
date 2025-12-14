/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125360
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
    var_12 &= ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (arr_1 [i_0])));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((1012910792767975417ULL), (((/* implicit */unsigned long long int) -987845491)))))));
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_15 += ((/* implicit */unsigned char) ((((arr_5 [i_0] [i_0 - 1] [i_1 + 2]) == (0ULL))) ? (max((min((4646111071375652248ULL), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)9296))) == (arr_6 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68)))));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = ((34359730176ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)236)), (1026821539)))));
                }
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1745153181)) ? (arr_2 [i_0] [i_0] [i_0]) : (2134833684U)));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(arr_3 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((-1026821540) / (-1026821539)))) > ((+(arr_0 [i_0])))));
                                var_20 = ((var_5) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (9007198986305536ULL))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_11 [16LL] [i_1] [i_4] [i_5]))));
                                var_22 = ((/* implicit */unsigned int) ((unsigned char) ((1026821540) / (1026821540))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [(unsigned char)14] [(unsigned char)14] [i_4] [i_4])) ? (var_6) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [6U])) : (((/* implicit */int) arr_9 [i_1]))));
                    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                }
                var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)16238)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) : (-5640803275364757084LL)))));
            }
        } 
    } 
    var_26 += ((/* implicit */signed char) min((var_1), (var_2)));
}
