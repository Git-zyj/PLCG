/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176959
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
    var_18 &= ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 160895577))))) | (var_10)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((var_4) / (((/* implicit */long long int) ((/* implicit */int) ((short) 2501847060308444368ULL)))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))) == (((/* implicit */int) ((short) var_8)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((unsigned int) var_12)) << (((((long long int) arr_0 [i_0])) + (32LL)))));
    }
    for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_20 -= (-(((((/* implicit */_Bool) (~(arr_4 [i_1 + 2] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : (arr_4 [i_1 - 2] [i_1 + 1]))));
        var_21 = ((/* implicit */_Bool) (~(arr_4 [i_1 + 2] [i_1 - 1])));
        var_22 = (((!(((/* implicit */_Bool) ((signed char) var_3))))) ? (((/* implicit */int) arr_3 [i_1 - 3])) : (((/* implicit */int) arr_3 [i_1 - 2])));
        var_23 = ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 2])) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_1 - 3])) : (var_16))) : (((/* implicit */unsigned int) min((arr_4 [i_1 - 2] [i_1 + 2]), (arr_4 [i_1] [i_1])))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            {
                var_24 &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)176)) ? (833800713571585720LL) : (((/* implicit */long long int) ((/* implicit */int) (short)127))))), (((/* implicit */long long int) 1316182351))))) ? (arr_4 [i_2] [i_3]) : (max(((-(((/* implicit */int) arr_3 [i_2])))), (((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_3])) : (((/* implicit */int) (unsigned short)39544)))))));
                var_25 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1587848075))))) == ((-(arr_6 [i_3 - 1] [i_3 + 1])))));
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) arr_15 [i_2] [i_3 - 1] [i_3 - 1] [i_5] [i_6])) : (((/* implicit */int) arr_8 [i_2] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [0LL])) || (((/* implicit */_Bool) (-2147483647 - 1)))))) : (((((/* implicit */int) arr_5 [i_2] [14LL])) >> (((var_10) - (1663748204))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)12]))) : (var_3)))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_2] [(unsigned short)12]))) : (((((/* implicit */int) (unsigned short)31736)) / (((/* implicit */int) arr_10 [i_6] [i_5] [i_4] [i_3])))))))))));
                                var_27 += ((-1386513871) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3 - 1]))) - (var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_26 [i_2] [i_2] [i_4] [i_7] [i_8] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1] [(signed char)11])))));
                                var_28 = ((/* implicit */int) min((var_28), ((-((-(((/* implicit */int) arr_0 [(signed char)14]))))))));
                            }
                        } 
                    } 
                }
                var_29 = max((((unsigned short) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [(signed char)10] [(signed char)10] [i_3] [i_3 - 1] [(signed char)7])) | (((/* implicit */int) arr_23 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3]))))) || (((/* implicit */_Bool) var_6))))));
            }
        } 
    } 
    var_30 = ((unsigned short) var_15);
}
