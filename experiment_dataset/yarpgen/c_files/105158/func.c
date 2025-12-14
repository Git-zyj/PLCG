/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105158
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((short)-1), (((/* implicit */short) (signed char)-8)))))));
    var_21 = ((/* implicit */unsigned long long int) min((((var_3) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))))), (((/* implicit */unsigned int) (+(((((((/* implicit */int) (signed char)-68)) + (2147483647))) << (((var_6) - (4609210883835855903ULL))))))))));
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [2ULL])))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_23 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((unsigned short)65518), (((/* implicit */unsigned short) (short)9895))))), (((((/* implicit */_Bool) -312408018)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))), (((((/* implicit */_Bool) (unsigned char)1)) ? (288230376017494016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
                                var_24 = ((/* implicit */short) var_19);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1]);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) (short)-19739)))))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        var_26 = ((/* implicit */long long int) arr_9 [i_5] [i_5 + 3] [i_5 + 3]);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_27 |= ((/* implicit */short) ((unsigned short) ((unsigned char) (-(3366314651U)))));
            var_28 *= var_11;
            var_29 = ((/* implicit */unsigned int) arr_1 [i_5 + 2] [i_5 + 2]);
        }
        var_30 = ((/* implicit */int) (short)14920);
    }
}
