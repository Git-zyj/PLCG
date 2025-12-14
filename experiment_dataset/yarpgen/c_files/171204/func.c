/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171204
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_21 = ((((/* implicit */_Bool) 729006038U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((unsigned int) var_7)));
            var_22 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0]));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12802)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_7))))) : (var_18)));
            var_23 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) (unsigned short)36478)) : (((((/* implicit */_Bool) var_4)) ? (-1444970056) : (((/* implicit */int) var_7))))));
            arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) var_5)) : (arr_4 [i_0])));
        }
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((unsigned int) ((signed char) var_1)));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
            arr_15 [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_11)) : (((unsigned int) var_0)));
        }
        arr_16 [(signed char)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7619366425630955911ULL)) ? (var_2) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)13] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (3210033083U) : (var_18)))));
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (short i_5 = 3; i_5 < 24; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_26 += ((/* implicit */short) ((((min((var_14), (((/* implicit */unsigned int) var_1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) ^ (max((2569195879U), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (-958642678))))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-22589))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1444970055)))))))))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_17 [i_6 + 1] [i_5 + 1]))) ? (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_6 - 1] [i_5 - 2]) : (((/* implicit */unsigned int) -3)))) : (min((arr_17 [i_6 + 1] [i_5 + 1]), (((/* implicit */unsigned int) var_13)))))))));
                        arr_28 [i_7] [i_7] |= ((/* implicit */int) ((min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21678)) ? (((/* implicit */int) arr_25 [i_4] [i_5 - 3] [i_6] [i_7] [i_4])) : (-1444970033)))))) ^ ((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) var_13)) : (var_14)))))));
                        arr_29 [i_4] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) 3411071692U))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_21 [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (1444970054))))), (((/* implicit */int) var_8))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_29 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)15274)) ? (3901517343508862913ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10888))))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)188)))));
                        arr_32 [i_5 - 3] [i_5 - 3] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)127)), (3901517343508862913ULL)));
                    }
                    arr_33 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) var_1);
                    var_30 = ((((arr_25 [i_4] [i_4] [i_5] [i_6 + 1] [i_6 + 2]) && (((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)2579)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [(unsigned char)20] [i_6] [(unsigned char)21])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_18))));
                    arr_34 [i_4] [i_4] [i_4] = 379602444U;
                }
            } 
        } 
    } 
    var_31 |= ((/* implicit */signed char) var_16);
}
