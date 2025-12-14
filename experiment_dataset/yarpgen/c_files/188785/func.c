/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188785
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
    var_18 -= ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) ? (0U) : (5U))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((((arr_10 [(unsigned char)9] [i_2] [i_2 + 2] [i_0 + 2] [i_2] [i_0]) ? (((/* implicit */int) arr_10 [i_4] [i_2] [i_2 + 2] [i_0 + 4] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_2 + 3] [i_0 + 1] [i_2] [i_0])))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 3] [i_0 - 1] [i_2] [i_0 + 3]))))));
                                arr_14 [i_4] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) -19LL)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (unsigned char)38))))), (((min((arr_4 [i_0]), (((/* implicit */long long int) arr_1 [i_4] [i_1])))) ^ (((/* implicit */long long int) ((19U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                                arr_15 [i_2] = ((/* implicit */_Bool) min((arr_2 [(signed char)6]), ((~(((/* implicit */int) var_14))))));
                                var_20 = ((/* implicit */int) min((var_20), (((((((/* implicit */int) ((signed char) var_2))) < (((/* implicit */int) (_Bool)1)))) ? (min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_3 + 1] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned short)8])))))) : ((-(((/* implicit */int) max(((signed char)123), ((signed char)59))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_6] [i_5] [i_6] [i_0 - 1] = ((/* implicit */unsigned short) (-(((unsigned int) 655687179733561658LL))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] = (-(((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 3] [i_6])) ? (((/* implicit */int) ((unsigned char) var_16))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned short)34846))))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4227858432U) << (((4227858432U) - (4227858425U)))))) ? (1534435907167957241LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned short) arr_20 [i_5] [i_0])))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)6] [i_1]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_17)))) ? (((/* implicit */int) min((arr_7 [i_1] [(unsigned char)9] [i_0]), (((/* implicit */unsigned char) var_5))))) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned char)0] [(_Bool)1])))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned short) (((~(67108858U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3)))))));
}
