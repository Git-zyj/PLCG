/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118109
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [(short)4] [i_0] = ((/* implicit */signed char) ((int) (unsigned char)243));
                var_20 &= ((/* implicit */short) ((long long int) (+((-(var_16))))));
                arr_6 [i_0] = arr_0 [i_0];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 24; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_21 *= ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_2])) >= (((/* implicit */int) arr_7 [(unsigned short)16] [i_3])))))) | ((((_Bool)1) ? (arr_10 [(unsigned char)2] [16LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_22 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_15 [15LL] [19ULL] [2U] [i_6])) : (((/* implicit */int) arr_15 [1LL] [i_3] [i_4] [11]))))) ? (((150551679022411876ULL) | (((/* implicit */unsigned long long int) arr_17 [i_6] [(signed char)2])))) : (((((/* implicit */_Bool) var_3)) ? (17681233426304645392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)150)) ^ (((/* implicit */int) arr_15 [(short)7] [i_6] [i_6] [i_6])))) << (((((((/* implicit */_Bool) 4032821668U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (-2178780815308754845LL))) + (33LL)))))));
                                var_23 = ((/* implicit */signed char) ((((((-450065824) + (2147483647))) << (((((-2147483632) - ((-2147483647 - 1)))) - (16))))) ^ ((-(((/* implicit */int) (short)30575))))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned int) max((4647628929307103825LL), (((/* implicit */long long int) (unsigned char)83))));
                    arr_20 [21] [(short)3] [i_3] [i_3] = ((/* implicit */short) min(((((+(arr_10 [i_2] [i_3]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [21LL])) ? (((/* implicit */int) (unsigned short)30337)) : (((/* implicit */int) arr_7 [(signed char)0] [(signed char)0]))))))), (((/* implicit */unsigned int) -970593213))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((short) ((arr_8 [(signed char)8]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-6047)))))))))));
    }
}
