/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15940
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))) + (((unsigned long long int) -6384139563630799129LL))));
        arr_3 [i_0] = ((unsigned long long int) (+(((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [1] [(short)16]))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) var_8))))))) : (((/* implicit */long long int) (-(440311081))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (+((+(485806753U)))));
        var_20 = ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_1 + 2] [1LL])) - (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2]))))));
        var_21 = ((/* implicit */unsigned char) 14389771720090098280ULL);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                                var_22 = ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-111)) && (((/* implicit */_Bool) (signed char)76))));
                                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) max((var_17), (((/* implicit */short) (_Bool)1))))))), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) || (((/* implicit */_Bool) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_15)) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_7])))));
                                var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_16))))))));
                                var_27 = ((/* implicit */long long int) var_17);
                                arr_24 [i_1] [i_2] [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)13);
                                arr_25 [i_1] [i_1] [i_1] [i_6] [i_1] [i_7] = ((/* implicit */short) ((max(((!(((/* implicit */_Bool) -6384139563630799129LL)))), (((_Bool) arr_17 [i_1] [i_1] [i_1] [i_6] [i_1])))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3809160542U)))) && ((!(((/* implicit */_Bool) 469762048))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min(((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 6384139563630799128LL)))))), ((_Bool)1))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)-32744)))))))));
}
