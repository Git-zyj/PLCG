/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153686
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_11 = (((((_Bool)1) ? (var_1) : ((~(var_6))))) >> (((arr_6 [i_0] [i_1] [i_3 + 3] [i_3 - 2]) % (arr_6 [i_1] [i_1] [i_3 + 3] [i_3 + 2]))));
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((7618143203537428048ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9103))))))));
                                var_13 = ((/* implicit */signed char) (~((~((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((arr_5 [i_0] [i_0]) - (2225846210519282128ULL)))))))));
                                var_14 -= ((/* implicit */_Bool) (-((+(((((/* implicit */int) arr_14 [(unsigned char)16] [i_0] [i_5] [i_2] [i_4] [i_2])) % (((/* implicit */int) (signed char)115))))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) || (((((/* implicit */int) max(((signed char)-116), (arr_3 [i_2] [i_1] [i_0])))) > (((/* implicit */int) (signed char)-89))))));
                            }
                        } 
                    } 
                    var_16 &= ((/* implicit */unsigned char) ((unsigned int) (~(min((arr_5 [i_0] [(unsigned char)6]), (18181542652115942873ULL))))));
                    arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_5 [(short)12] [i_2 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (2103066353U))))))) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) max((var_2), (arr_8 [i_0] [i_1] [i_0])))))))));
                    var_17 ^= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_8)))), ((~(arr_16 [10U])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            {
                arr_25 [i_6] [i_6] = ((/* implicit */int) max((((((_Bool) arr_15 [i_6] [i_6] [i_6] [(short)21])) ? (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [(_Bool)1] [i_6] [i_7] [i_6]))) : (arr_6 [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (+(arr_0 [i_6]))))));
                arr_26 [i_6] [i_7] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [(_Bool)1])))) : (2063642004U)))) ? (((/* implicit */int) (signed char)-116)) : (((((/* implicit */int) arr_3 [i_6] [i_6] [i_7])) ^ (((/* implicit */int) arr_3 [i_7] [i_7] [i_6]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned int) max((min((var_5), (2231325293U))), (arr_1 [i_8] [i_8])))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_13 [(unsigned short)7] [i_9] [i_9] [i_9] [i_9] [i_8]))) ? (((long long int) (~(((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_8 [i_8] [i_8] [i_9])))))));
                    var_20 = ((/* implicit */signed char) arr_2 [i_8]);
                }
            } 
        } 
    } 
}
