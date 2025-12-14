/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117195
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)0)) : (var_4))) >> ((((~((-(12081003679722093283ULL))))) - (12081003679722093252ULL))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_8 [i_0] [(unsigned char)2] [i_0] [17] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_4 [(short)8] [i_2] [(unsigned short)21])) == (((/* implicit */int) arr_4 [(unsigned short)19] [i_0] [i_0]))))), (min((((/* implicit */int) (_Bool)0)), ((-2147483647 - 1))))));
                    var_14 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    var_15 -= ((/* implicit */unsigned short) (-(max(((~(((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_3 [i_0]))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (~(((int) arr_5 [i_3] [i_1] [i_0]))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) == (((/* implicit */int) arr_7 [i_3] [8] [8])))))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((long long int) -1233306911)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39775)) + (((/* implicit */int) var_2))))))))))));
                    var_19 = ((/* implicit */unsigned long long int) 202739262);
                }
                var_20 = ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_3)))) : (max((((/* implicit */int) var_1)), (var_12))))), (((/* implicit */int) var_11))));
}
