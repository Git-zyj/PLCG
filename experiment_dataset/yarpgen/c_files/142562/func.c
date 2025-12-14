/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142562
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 &= ((/* implicit */signed char) max((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6529367356527095663LL)) ? (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [(unsigned char)8])) : (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [(_Bool)1])))))));
                                var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4]))) : (var_5))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_7)), (6529367356527095651LL))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(3806075403U)))) & (((((/* implicit */_Bool) max((6529367356527095637LL), (((/* implicit */long long int) arr_12 [i_0] [0ULL] [i_0]))))) ? (((18446744073709551608ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 4] [i_0]))) ^ (var_2)))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 2] [i_1 + 2])), (1675032294303391152ULL))))) != ((-(((/* implicit */int) var_9))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1 + 3] [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [15ULL] [i_6]))) : (arr_2 [i_0])))) ? ((+(((/* implicit */int) var_1)))) : ((+(((/* implicit */int) arr_19 [i_7] [i_0] [i_6] [14] [i_0] [i_0] [i_0]))))))));
                                var_14 = ((/* implicit */short) -6529367356527095652LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_5))) : (((/* implicit */unsigned long long int) 6529367356527095651LL))))));
    var_16 = ((/* implicit */short) ((((var_4) && (((/* implicit */_Bool) var_5)))) ? (var_10) : (var_8)));
    var_17 = ((/* implicit */unsigned long long int) var_9);
}
