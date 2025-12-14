/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186639
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] [i_3 + 1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_2))))))));
                        arr_11 [i_0] [i_3] [i_2 + 1] [i_3] [i_3] = ((/* implicit */signed char) (!((_Bool)0)));
                        var_18 -= ((/* implicit */_Bool) max((1548043909), (1088446264)));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (1048575LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? ((+(var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
                        arr_17 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))))) ? (arr_14 [i_4 - 1] [i_2] [i_1] [i_0]) : ((-((~(((/* implicit */int) (_Bool)1))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) max((arr_2 [i_0] [i_1]), ((~(((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 3]))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_2 - 2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-6659784263638870364LL), (((/* implicit */long long int) 1812766949U))))) ? (((((/* implicit */_Bool) 8156470450714716844ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (15561138437103420871ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((/* implicit */int) var_9)))))))) ? (var_5) : (((/* implicit */unsigned int) ((int) (((_Bool)1) ? (12719544167854654260ULL) : (((/* implicit */unsigned long long int) -6659784263638870353LL))))))));
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_5] [i_6] = ((/* implicit */unsigned char) (-((-(-1689630258)))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_7)) : (var_11)))) != ((+(arr_8 [i_0] [i_1] [i_0] [i_5]))))) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_1))))));
                            arr_27 [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)50192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (12719544167854654260ULL)));
                            arr_28 [i_0] [i_0] [i_7] [i_0] = min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_7 + 1] [i_7] [i_7 + 1] [i_7])))) ? (2597425176U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))), (((long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2 - 3] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (6997353767215328888ULL)))));
                            arr_29 [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) >> (((/* implicit */int) ((_Bool) var_10)))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((-6659784263638870381LL) / (((/* implicit */long long int) var_14)))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (var_5)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_10)))))) ? (((/* implicit */unsigned long long int) (+(((long long int) var_15))))) : (((unsigned long long int) 771788333))));
}
