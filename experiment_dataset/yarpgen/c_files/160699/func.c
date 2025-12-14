/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160699
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) ((unsigned int) max((arr_2 [i_1]), (arr_2 [i_1]))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_5 [i_0] [i_1] [i_2] [14]) >= (var_9))) ? (((((/* implicit */_Bool) max((arr_0 [i_2]), (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [12LL] [i_2] [i_2]))))))) : (((/* implicit */int) ((_Bool) var_8)))));
                    var_18 = min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0] [i_0] [i_1 + 3])))), (((/* implicit */long long int) ((arr_5 [i_0 + 1] [i_0] [i_0] [i_1 + 3]) / (arr_5 [i_0 - 2] [7LL] [i_0] [i_1 + 3])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_19 *= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_4] [i_5])) ? (((/* implicit */unsigned int) -1337360978)) : (arr_9 [i_0] [i_3] [i_4]))))))), (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32766))))))));
                        arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12674612843964052551ULL))));
                    }
                } 
            } 
        } 
        var_20 = min((((/* implicit */int) min((((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (short)-17001))))), ((!(((/* implicit */_Bool) var_4))))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -8140806149157064213LL))))) >> (((((/* implicit */int) var_6)) - (62921))))));
        var_21 = ((/* implicit */unsigned int) (unsigned char)255);
        var_22 = ((/* implicit */long long int) ((max((arr_2 [i_0]), (var_12))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 17; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    arr_23 [10U] [i_7 + 1] [i_8] = ((/* implicit */unsigned int) (short)-32767);
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) 145108327785715229LL)));
                    var_24 = ((/* implicit */unsigned int) arr_19 [i_7] [i_8]);
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_22 [17] [i_7] [i_8] [i_10])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)19435)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_12)) : (arr_24 [i_9 - 1] [5LL] [i_9 + 1] [i_9 + 1])))));
                                var_26 ^= ((/* implicit */int) var_3);
                                arr_29 [i_7 - 2] [i_9] [i_9 + 1] = arr_7 [i_7 - 2];
                                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_11 [i_9 + 1] [i_7] [i_6] [i_9]), (36028792723996672LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) var_10))), (arr_5 [i_6] [i_6] [10LL] [i_6])));
        arr_30 [i_6] [i_6] = ((/* implicit */long long int) var_1);
        arr_31 [i_6] |= ((/* implicit */_Bool) -145108327785715230LL);
        arr_32 [i_6] = max((145108327785715210LL), (((/* implicit */long long int) ((int) 145108327785715229LL))));
    }
    var_29 = ((/* implicit */unsigned int) var_14);
    var_30 -= ((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */long long int) var_2)))) ^ (var_7)));
    var_31 = ((/* implicit */int) var_13);
}
