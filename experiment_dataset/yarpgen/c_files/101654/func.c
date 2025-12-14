/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101654
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
    var_10 = ((/* implicit */signed char) (+(max(((+(((/* implicit */int) (signed char)17)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [14])) : (((/* implicit */int) var_3)))) & ((+(((/* implicit */int) (short)-32759)))))), (((((/* implicit */int) ((-1891179223) >= (((/* implicit */int) (unsigned char)129))))) & (((((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)6])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_9))))))));
                    var_12 = ((/* implicit */unsigned short) 1479448272268902066LL);
                    var_13 = ((/* implicit */signed char) max((min((((/* implicit */long long int) max(((unsigned short)5631), (var_8)))), (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1])) ? (arr_2 [i_1] [(signed char)20]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-28778)) & (((/* implicit */int) (short)-32751))))) : ((+(141989045137599543LL)))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = min((min((((/* implicit */unsigned long long int) (unsigned short)59904)), (arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [i_2] [i_2])) >> (((arr_7 [i_2] [i_1] [i_1] [i_0]) - (3971795307584433235ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-115))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_4])) ? (((/* implicit */int) var_9)) : (914223839)))) ? (((int) (unsigned char)1)) : (max((-667385434), (((/* implicit */int) var_5))))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_3 - 2] [i_1] [i_1] [i_0] [i_4])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))))), (((/* implicit */long long int) (unsigned short)5632))))) ? (min((((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (-1249870649059774739LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_1]))))))) : (((long long int) (signed char)-40))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) min((var_3), (((/* implicit */signed char) var_9)))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1229975817)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-8102292003223484984LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) var_9)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_2))))), (((/* implicit */unsigned long long int) var_1))));
}
