/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111708
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0] [i_1]);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_3);
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) min((1819807400U), (4294967295U)))) && (((/* implicit */_Bool) max((((long long int) var_7)), (((/* implicit */long long int) ((unsigned int) (unsigned short)15965)))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */_Bool) ((unsigned long long int) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */long long int) (~(var_1)))) | (max((var_9), (((/* implicit */long long int) 1U))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                        var_14 = ((/* implicit */int) max((((unsigned int) var_4)), (((/* implicit */unsigned int) arr_17 [i_3] [i_1] [i_0 - 1] [i_0]))));
                        var_15 = ((/* implicit */signed char) (+((+(arr_7 [i_0] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_5);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((arr_13 [i_0] [(_Bool)1] [i_3] [1LL]), (((/* implicit */unsigned char) var_7)))), (max((((/* implicit */unsigned char) (signed char)127)), (var_0)))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((unsigned long long int) var_4)))))))));
                            arr_26 [(_Bool)1] [i_0] [i_5] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_2)), (arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_5] [i_6]))) ^ (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (554153860399104LL))), (((long long int) var_6)))))));
                            arr_27 [i_0] [18] [i_0] [i_0] [i_6] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0])))))) >= ((((~(var_9))) / (((/* implicit */long long int) ((var_1) >> (((((/* implicit */int) var_2)) - (25019))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((~(var_9))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)960)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) var_7))))))))));
                                var_20 -= ((/* implicit */long long int) ((unsigned int) var_5));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (long long int i_11 = 1; i_11 < 21; i_11 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_0] [i_9] [24ULL] [24ULL] [i_0] [i_9] = ((/* implicit */short) var_6);
                                var_21 = ((/* implicit */long long int) max((((max((var_7), (var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (arr_23 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) var_1))), (((unsigned int) (signed char)-127)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) 4294967295U);
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_6))));
                    }
                    var_24 = ((/* implicit */long long int) ((unsigned char) 527765581332480LL));
                }
                var_25 += ((/* implicit */unsigned int) var_7);
                var_26 = ((/* implicit */unsigned long long int) ((min((min((var_3), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (64275558)))))) + (((/* implicit */long long int) (-((+(var_1))))))));
            }
        } 
    } 
    var_27 *= ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned char) var_7))));
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(((/* implicit */int) var_2))))))) : ((~((~(var_1))))))))));
}
