/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122603
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((((((/* implicit */int) arr_2 [i_1])) + ((~(var_9))))) == (((/* implicit */int) arr_1 [i_0])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [10] &= ((/* implicit */int) (+(((unsigned long long int) 374274572))));
                                arr_15 [i_2] [(signed char)7] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((var_5) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) ^ (var_7)))))))));
                                arr_16 [i_2] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_11 [i_2] [i_3] [i_2] [10ULL] [i_2])))) ? ((+(3140016097U))) : (3086510337U)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) max((507120771U), (1154951198U))))));
                            arr_22 [(signed char)1] [i_6] [i_5] [7] = max((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) var_11)), (var_0)))))), (max((1154951198U), (((/* implicit */unsigned int) (+(var_5)))))));
                            var_13 = ((/* implicit */unsigned long long int) min(((+(((int) var_7)))), ((+(var_0)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_7]))))) ? ((~(-2143604141))) : (374274556)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18701)) ? (1623072905U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) != (max((((/* implicit */unsigned long long int) 898017316)), (arr_18 [5] [i_7] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)5489), (((/* implicit */short) arr_23 [i_7]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-55))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) (unsigned short)0))))) : ((((_Bool)1) ? (10788229209381445072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))))))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (374274553)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_5 [i_0] [i_0]))) : (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
                        arr_28 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7] [i_7] [(unsigned char)10] [i_7]);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (var_6)))) ? (((unsigned long long int) arr_1 [i_7])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1])))))));
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) - ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (unsigned char)247)))))))));
}
