/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146771
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3 - 2] [i_3] [i_3 + 3] [(unsigned short)0] [i_3 + 2] [i_3 + 3] [i_3] = ((/* implicit */unsigned int) (-(-917137327)));
                                arr_13 [i_0] [1U] [i_2] [19LL] [i_4] = ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_4])) ? (((/* implicit */int) arr_2 [(signed char)12] [(unsigned char)2])) : (((/* implicit */int) arr_2 [1U] [i_4]))))) : (arr_7 [i_2 - 4] [i_3] [(signed char)12] [i_3 + 1]));
                                var_11 -= ((/* implicit */long long int) arr_0 [i_1] [i_4]);
                                arr_14 [20ULL] = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_12 &= (+(arr_10 [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 3] [i_0 - 1]));
                    arr_15 [7ULL] = ((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_2 - 2]);
                    arr_16 [9ULL] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_0] [i_1])))) / (((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_2 - 4] [i_0 - 2] [i_2 - 3]))));
                }
                for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    arr_19 [(unsigned char)20] [i_5] [(unsigned char)20] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)34181)) ? (arr_6 [i_5 + 3] [i_1] [i_5 + 1]) : (arr_6 [i_0] [i_1] [5U]))));
                    arr_20 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned short) -7657615526787557885LL);
                }
                arr_21 [i_0 - 2] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_0 [i_0 - 1] [i_1])))), (((/* implicit */int) arr_17 [i_0] [i_1]))));
                arr_22 [(signed char)14] = ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) arr_4 [i_0 - 1] [i_1])))), (((/* implicit */int) min(((signed char)103), ((signed char)110))))))));
                arr_23 [i_0] [i_1] = ((/* implicit */unsigned short) (+((~(arr_7 [i_0 - 2] [i_1] [i_1] [i_0])))));
                arr_24 [1LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1243654455)) ? (((/* implicit */int) arr_4 [(unsigned short)4] [i_1])) : (((/* implicit */int) (signed char)-110))))))) ^ (arr_6 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (var_7)));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    var_15 |= ((/* implicit */unsigned int) var_4);
}
