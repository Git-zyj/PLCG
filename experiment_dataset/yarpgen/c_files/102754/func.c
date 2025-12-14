/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102754
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (signed char)-119))));
                    var_15 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (signed char)116)) << (((((/* implicit */int) (signed char)118)) - (116))))) | (((/* implicit */int) (signed char)100))))));
                    arr_7 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-118)) ? (min((arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 3]), (((/* implicit */unsigned int) (signed char)-112)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1 + 4] [i_0])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_7))));
                        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (short)790)) : (((/* implicit */int) (unsigned short)15650))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-814)) | (((/* implicit */int) (short)-32740))));
                    }
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [16U] [i_2] [i_2] [i_1 + 4] [i_0])) ? (max((arr_11 [i_0] [i_0] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) (short)17943)))) : (arr_11 [i_0] [i_1 + 3] [i_2] [i_2] [i_2])));
                }
            } 
        } 
        var_20 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) -5979986607785610010LL)) ? (9663726172284965099ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) arr_4 [i_6] [i_5] [i_0]);
                                arr_23 [i_0] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (unsigned char)112)))), (((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_5] [i_4])) ? (((/* implicit */int) arr_20 [i_7] [i_6] [i_4] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_7] [i_5] [i_6]))))));
                                arr_24 [i_4] = ((/* implicit */int) min((((unsigned short) var_11)), (((/* implicit */unsigned short) ((_Bool) arr_4 [i_5] [i_5] [i_0])))));
                                arr_25 [i_4] [i_7] [i_6] [i_5] [(short)14] [i_4] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned short) max((arr_17 [i_4] [i_7]), (arr_17 [i_4] [i_0]))))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned char)0] [i_4] [i_5] [8ULL] = ((/* implicit */signed char) (-(max((((/* implicit */int) ((unsigned char) (unsigned char)23))), ((-(arr_15 [i_4])))))));
                    var_22 *= ((/* implicit */unsigned char) arr_15 [(short)14]);
                }
            } 
        } 
    }
}
