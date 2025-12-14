/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133590
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = (unsigned short)17468;
        var_10 = ((/* implicit */int) max((var_10), (((((((/* implicit */int) max((arr_1 [(unsigned short)2]), (arr_0 [i_0])))) == (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) (unsigned short)48068)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)4)))) : ((~(((/* implicit */int) min((arr_0 [1U]), (arr_1 [i_0]))))))))));
        arr_3 [(unsigned short)6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48041)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)39)) % (((/* implicit */int) (signed char)-4))))))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_11 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)3)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (1771081530U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0] [(unsigned short)2] [i_3]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)216)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) (unsigned char)152)) : ((+(((/* implicit */int) (unsigned short)7214))))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) (_Bool)1);
                            var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_13 [i_0] [i_1] [i_4])))) != ((((_Bool)1) ? (749095020) : (1529050258))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_19 [i_0] [(unsigned char)13] [i_2] [(_Bool)0] = ((/* implicit */unsigned int) arr_13 [i_1] [i_2 + 1] [i_5]);
                            var_14 = ((/* implicit */_Bool) arr_1 [i_2]);
                            arr_20 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 + 2]);
                            arr_21 [2LL] [i_1] [2LL] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)63)) + (((/* implicit */int) var_7)))), ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) arr_6 [i_1] [i_3])) / (arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] [15])))))));
                            arr_22 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_3] = 927161333;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */short) arr_6 [i_0] [i_1 + 3]);
                            var_16 -= ((/* implicit */short) (+(arr_17 [i_0] [i_1 - 1] [i_2] [i_3] [i_6] [i_6] [i_2 - 1])));
                        }
                        arr_25 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)6321);
                        var_17 = ((/* implicit */signed char) arr_13 [i_1 + 2] [i_2] [0]);
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) ((unsigned short) 1704781865U))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) + (((unsigned long long int) (unsigned short)48068))));
    var_19 = ((/* implicit */unsigned short) ((int) var_5));
}
