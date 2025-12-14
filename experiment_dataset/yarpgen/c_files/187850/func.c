/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187850
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)192))))) : (5573734746194880230ULL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_11 |= 17352386956347515589ULL;
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)63)), ((unsigned char)158)))), (var_0)))));
                        arr_11 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(var_9))) - (((/* implicit */long long int) max((((/* implicit */int) var_6)), (var_2))))))) ? (1343033563) : ((-(((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))));
                        arr_12 [(unsigned char)13] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_0 - 4] [i_0] [i_0 + 1])))) ? ((-(arr_5 [i_0] [i_0 - 1] [i_2]))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_2)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                arr_18 [i_5] [i_4] [(signed char)5] [(signed char)5] [(signed char)5] [i_0 - 3] = ((/* implicit */unsigned short) ((int) (-(18446744073709551615ULL))));
                                var_13 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (17352386956347515592ULL)))) ? ((-(arr_9 [i_0 - 1] [i_2] [i_4]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))));
                                arr_19 [i_0] [i_1] [4ULL] [i_2] [i_1] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_0 - 2] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((+(var_5))) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)53144)), (var_2)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [(unsigned char)9])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) max((((((((/* implicit */long long int) ((/* implicit */int) var_1))) < (arr_16 [i_7] [i_7] [i_7] [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) max(((unsigned char)152), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) max(((signed char)-114), (var_3)))))), (min((((/* implicit */int) var_4)), (arr_24 [1U] [i_6])))));
                arr_25 [(unsigned short)4] &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)34)) + (((/* implicit */int) (unsigned char)255))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_9))));
            }
        } 
    } 
}
