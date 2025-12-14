/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12809
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)(-127 - 1))), (-1)))) ? (max((arr_3 [i_4] [i_2] [(signed char)9]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))))) ? (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_7 [(signed char)14] [7ULL])), (arr_5 [i_0] [i_4] [i_0]))), (((/* implicit */unsigned int) (+(-1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16368))) : (14783242136905493402ULL)))) ? (((/* implicit */long long int) (~(698927236U)))) : (((((/* implicit */_Bool) 2326590521U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_2])))))));
                                arr_11 [(unsigned short)0] [i_0] [i_4] = ((/* implicit */unsigned short) (~((~(3582390410U)))));
                                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) arr_10 [(signed char)16] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1 - 1])), (arr_8 [i_1] [i_3] [i_4])))))) ? (max((4294967286U), (((/* implicit */unsigned int) (signed char)67)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [11U]))))))))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0U) : (arr_8 [(signed char)5] [14] [(_Bool)1])))))) ? (((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned int) var_16))))) ? (max((2883363312U), (10U))) : (max((arr_4 [i_0] [(signed char)4] [i_1] [i_2]), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_10 [i_0] [i_2] [(_Bool)1] [i_2] [i_0] [(_Bool)1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) var_3))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)0), ((unsigned short)1302)))), (max((0), (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-59)), (var_18)))) ? (max((((/* implicit */unsigned long long int) var_14)), (7027688406461942911ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_5)))))))));
    var_22 *= ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) : (853505941U)))))));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1)))))))));
}
