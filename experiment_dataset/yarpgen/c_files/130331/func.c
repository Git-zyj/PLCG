/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130331
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_3 [10U]);
                    arr_8 [i_0] [i_1] |= ((/* implicit */long long int) ((min((((/* implicit */int) arr_2 [i_2] [i_1])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_2 [i_1] [4ULL])) : (((/* implicit */int) arr_2 [11U] [i_2])))))) + (((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23794)))))) ? ((+(5088383842309790732ULL))) : (((/* implicit */unsigned long long int) min((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
        var_15 *= 2047354742194559823ULL;
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            {
                var_16 = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)1))))) == (arr_15 [i_5 + 1] [i_5 - 1])))), (((((/* implicit */_Bool) (~(var_8)))) ? (0ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_13 [i_5])), (-5854966363521549075LL)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -4517648780463906428LL))))))) - (((var_1) + (((/* implicit */unsigned long long int) arr_15 [i_5 + 1] [i_5 - 1])))))))));
                    var_18 |= ((/* implicit */short) var_9);
                }
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    arr_24 [i_4] [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_5]))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_19 -= (short)255;
                                var_20 = ((unsigned long long int) (+(arr_22 [i_7] [i_5 + 1] [i_5 + 1])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    arr_32 [i_4] [i_5] [0U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_17 [i_4])))) ? (((/* implicit */unsigned long long int) arr_26 [i_4] [i_4] [i_4] [i_4] [20U])) : (12603721163214950014ULL)))));
                    arr_33 [i_4] [i_5] [i_10] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((long long int) 18446744073709551615ULL)))) - (((arr_31 [i_4] [i_5 - 1] [i_5 + 1] [i_10]) - (arr_31 [i_5] [i_5 - 1] [i_5 - 1] [i_5])))));
                }
            }
        } 
    } 
}
