/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186364
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
    var_10 = ((/* implicit */unsigned short) var_6);
    var_11 |= ((/* implicit */short) -5113287231911189272LL);
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) arr_6 [i_0] [i_0]);
                            arr_11 [i_0] [i_1 - 3] [i_1 - 3] [i_2] [i_2] [i_3 + 1] = (short)-6800;
                            arr_12 [i_0] [i_1] [i_2] [i_3 + 1] |= ((/* implicit */int) ((max((min((((/* implicit */int) (short)-6800)), (var_9))), (arr_1 [i_1 - 3] [i_3 + 1]))) < (((/* implicit */int) ((unsigned char) 861131667U)))));
                            arr_13 [(unsigned short)7] [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [8ULL] [i_0] [8ULL])) / (var_9)))), (var_8))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1] [i_1 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
                {
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) (signed char)32));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_14 |= ((/* implicit */signed char) max((((/* implicit */int) (short)-6800)), (((((/* implicit */int) (unsigned short)3072)) >> (((((/* implicit */int) (signed char)122)) - (99)))))));
                                var_15 = max(((-((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22950)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)13976))))));
                                var_16 = ((/* implicit */unsigned long long int) min((3433835629U), (((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) (short)6800)), (5265427216355315337LL)))))));
                            }
                        } 
                    } 
                    arr_23 [11LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((arr_4 [i_4 - 3] [i_1 - 3] [i_1 + 1]) & (arr_4 [i_4 + 3] [i_1 - 1] [i_1 - 3])))) : (min((((/* implicit */unsigned long long int) arr_4 [i_4 - 3] [i_1 - 2] [i_1 - 1])), (var_6)))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_27 [i_0] [(signed char)1] [i_7] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */int) ((signed char) arr_21 [11LL] [11LL] [i_7]))) % (((/* implicit */int) arr_9 [i_1 - 3] [i_1] [i_0] [i_0] [i_0]))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_14 [i_0] [i_1 - 1] [i_0] [i_1 - 2])))) ? (((arr_14 [i_0] [i_0] [i_1 - 3] [i_7]) / (arr_14 [i_0] [i_7] [i_7] [i_1 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0] [i_0] [i_0]))))));
                }
                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))));
                var_19 = ((/* implicit */unsigned long long int) var_1);
                var_20 = ((/* implicit */unsigned int) arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 3]);
            }
        } 
    } 
}
