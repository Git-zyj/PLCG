/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170534
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_12)))));
    var_15 = var_6;
    var_16 += ((/* implicit */unsigned int) min((((17592186044415ULL) | (((/* implicit */unsigned long long int) ((unsigned int) var_12))))), (((/* implicit */unsigned long long int) 6889219634902906830LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 6889219634902906830LL))) && (((/* implicit */_Bool) ((long long int) 584971793U)))));
                        var_19 = ((/* implicit */long long int) arr_2 [i_3] [(unsigned short)10] [i_3]);
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1 - 1] [i_1 - 1]))))));
                        var_21 |= ((/* implicit */unsigned int) ((2915824647425356417LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)896))) : (3250980149480011417LL)));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned short) ((-1152921504606846976LL) < (var_4)));
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) var_6)) : (var_5)));
                            var_24 = var_12;
                        }
                    }
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) -1924302772863137675LL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned int i_7 = 4; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_24 [i_0] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) arr_0 [i_7 - 4]);
                    var_25 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */unsigned long long int) -501600669704782920LL)) : (var_0))) * (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551605ULL)))));
                    arr_25 [14LL] [i_6] [i_6] [i_0] = ((((((/* implicit */_Bool) var_9)) ? (arr_20 [i_7] [(unsigned short)15] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_7] [i_6])))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) arr_22 [i_0] [i_6] [i_7 - 4])) : (-7030023383162657710LL)))));
                }
            } 
        } 
    }
}
