/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18451
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) var_5);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) ((unsigned char) var_1));
                        arr_9 [(unsigned short)10] [i_1] [i_3] [(unsigned short)10] = ((((/* implicit */_Bool) min((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(1358095664)))) : ((-(var_9))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_16 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((int) var_6))))) * (((max((var_0), (((/* implicit */unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)0] [i_2] [i_4] [2U]))) : (arr_0 [i_1]))))))));
                        arr_13 [i_4] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8))))));
                        var_17 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483647)))) : (max((var_13), (((/* implicit */long long int) (unsigned short)10196)))))))));
                    }
                    var_18 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (arr_4 [i_1 - 1]) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) -2))))))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) 4080712178264310904LL))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((var_3), (((signed char) max((5612941882748714704ULL), (((/* implicit */unsigned long long int) -985895648))))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)160)), (var_13))) >= (((/* implicit */long long int) ((unsigned int) var_1))))))) : (var_12)));
}
