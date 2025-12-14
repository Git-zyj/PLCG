/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124868
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
    var_20 = ((/* implicit */unsigned long long int) (signed char)106);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32750)) || (((/* implicit */_Bool) (signed char)-93))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) : (-6917275862861588676LL))), (((/* implicit */long long int) arr_3 [i_1 + 2] [i_1 + 4]))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_4)) ? (var_16) : (var_2))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 + 3]))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 2]))) : ((+(((/* implicit */int) var_19)))))))));
                                var_24 += ((/* implicit */signed char) ((max((max((((/* implicit */long long int) var_7)), (var_2))), (((/* implicit */long long int) arr_11 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 1])))) < (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)101)) + (((/* implicit */int) (signed char)-107))))) : (((((/* implicit */_Bool) 4879867147681597488LL)) ? (5639310566292600986LL) : (((/* implicit */long long int) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((arr_2 [i_1 + 2] [i_2] [i_2 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))), (var_6)));
                        var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)60062)) && (((/* implicit */_Bool) (unsigned short)60062)))), (min((arr_12 [i_2 + 3] [i_1 - 2] [i_1] [i_1 + 1]), (arr_12 [i_2 + 3] [i_1 + 2] [i_1] [i_1 - 2])))));
                    }
                }
            } 
        } 
    } 
}
