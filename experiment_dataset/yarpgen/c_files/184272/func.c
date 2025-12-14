/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184272
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
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) max((var_8), (max((((/* implicit */int) (short)32767)), (536346624)))))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_12)) : ((-9223372036854775807LL - 1LL))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned long long int) (short)-32755))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_2]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_1 [i_0 - 1]))))), (((/* implicit */unsigned long long int) arr_2 [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((short)-28835), (((/* implicit */short) arr_2 [i_4]))))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [(unsigned char)20])) ? (arr_5 [(signed char)16]) : (((/* implicit */unsigned int) arr_8 [11LL] [i_1] [i_2] [(signed char)6] [i_3])))) : (((((/* implicit */_Bool) 1121501860331520ULL)) ? (arr_5 [0ULL]) : (((/* implicit */unsigned int) arr_7 [i_3] [i_0] [4LL] [14ULL])))))))))));
                                var_17 &= ((((/* implicit */_Bool) 0)) ? (-174819486) : (((/* implicit */int) (short)32749)));
                                arr_11 [i_0] [i_1] [i_4 - 3] [i_3] [i_0 + 4] [i_3] = ((/* implicit */short) max(((-2147483647 - 1)), (((((/* implicit */_Bool) max((8191U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) ? (((arr_4 [i_3] [i_4] [i_0] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-45)))) : (((((/* implicit */_Bool) -1744043970102268562LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)15))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2147483639)), ((-9223372036854775807LL - 1LL))))), (536870911ULL))));
                    var_19 = ((/* implicit */long long int) min((-2147483643), (((/* implicit */int) (short)32763))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((int) arr_9 [(unsigned short)8] [i_1] [i_1] [i_0] [(unsigned char)20]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)183)) : (-512186424)))), (349653433551334219ULL))))))));
                }
            } 
        } 
    } 
    var_21 = max((((unsigned int) min(((unsigned char)104), (((/* implicit */unsigned char) var_6))))), (((/* implicit */unsigned int) var_14)));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (_Bool)1))));
}
