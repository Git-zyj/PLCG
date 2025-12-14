/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163743
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2]))));
        arr_2 [(_Bool)1] = ((/* implicit */unsigned short) ((((_Bool) (unsigned short)51243)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 391762930435188741ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (2147483647)))) : (540945749U)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)14606)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2]))));
                    var_17 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)14296)))) & (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((long long int) ((unsigned char) arr_4 [i_5 + 2])));
                                var_19 -= ((/* implicit */short) 925643949U);
                                var_20 = ((/* implicit */unsigned char) 540945724U);
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)256)) <= (((/* implicit */int) arr_0 [i_1 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */int) (_Bool)1);
                                var_23 += (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 2]))));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), ((~((((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) -1912931518432853324LL)))))))))));
}
