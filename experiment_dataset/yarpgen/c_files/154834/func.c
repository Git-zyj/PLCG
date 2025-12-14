/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154834
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 5940376032240135441ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_4)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((unsigned short)15172), (((/* implicit */unsigned short) (short)-17887)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26174)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_1 [i_1]), (arr_3 [i_0 - 1] [21U]))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned short) var_3)), (((/* implicit */unsigned short) (unsigned char)192)))))));
                    var_16 = ((/* implicit */short) ((long long int) min((((/* implicit */int) max((((/* implicit */short) var_2)), (var_9)))), ((~(1880196157))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */long long int) 2054862434)), (7291027527701020121LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((short) ((((/* implicit */int) arr_0 [18U] [i_1])) * (((/* implicit */int) arr_0 [(unsigned char)12] [i_0 - 2])))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned short) var_3);
                        var_19 = ((/* implicit */short) min(((+(((/* implicit */int) arr_3 [i_0 - 1] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12480181382244221328ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7175)))))) ? (((/* implicit */int) var_9)) : (-1));
                        var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned char)13))));
                        var_22 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                        var_23 = ((/* implicit */unsigned int) var_12);
                    }
                }
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_18 [i_5] [i_7 + 3]))));
                                var_25 = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-104)))) >= (((/* implicit */int) max(((unsigned short)59944), (((/* implicit */unsigned short) (signed char)-28)))))))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((var_3), (var_11))))));
                            }
                        } 
                    } 
                    var_27 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((33776997205278720ULL), (((/* implicit */unsigned long long int) (unsigned char)159)))))))), (arr_3 [i_0 - 2] [i_0 - 3])));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)20])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) min((arr_17 [i_0]), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [14U] [14U] [(signed char)10]))) : (min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)10]))) : (var_8))), (((/* implicit */unsigned int) var_13)))))))));
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28122))))) ? ((-((+(((/* implicit */int) var_12)))))) : (((/* implicit */int) var_2))));
                    var_31 = ((/* implicit */signed char) 2799300439U);
                }
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32270)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48349))) : (15066741197923832730ULL)));
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)4425), (((/* implicit */unsigned short) (short)-1288))))) / ((~(((/* implicit */int) var_12))))));
            }
        } 
    } 
}
