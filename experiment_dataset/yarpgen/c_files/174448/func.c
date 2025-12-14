/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174448
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3044646415U)), (((long long int) ((((/* implicit */unsigned long long int) -2297152870154225277LL)) | (var_10))))));
    var_17 = ((/* implicit */signed char) var_10);
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 355525422U))))) : ((~(((/* implicit */int) (unsigned short)3680)))))), ((((+(((/* implicit */int) (unsigned short)3666)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3620538869U)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (signed char)62))))), (max((3620538874U), (((/* implicit */unsigned int) 372217110)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) & (var_11)))) ? (((/* implicit */unsigned long long int) var_13)) : (min((var_10), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)-14986), (((/* implicit */short) (signed char)-10))))))))));
                                var_20 = ((/* implicit */int) (~(max(((~(var_10))), (((/* implicit */unsigned long long int) (signed char)-42))))));
                                arr_11 [i_2] [i_1] [i_2] [10LL] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((0U) % (((/* implicit */unsigned int) var_5))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((4294967282U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 666092536U)))))) : ((~(var_7)))))));
                    var_21 &= ((/* implicit */short) (+(min((var_7), (((/* implicit */unsigned long long int) -8187936441206901520LL))))));
                    var_22 -= ((/* implicit */long long int) var_0);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        var_23 = (~(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (var_3))), (((/* implicit */long long int) var_4)))));
                        arr_16 [i_2] = ((/* implicit */short) ((signed char) (((+(var_6))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))))));
                        var_24 = ((/* implicit */long long int) ((((unsigned int) ((606363878279574068ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) >= ((+(536870912U)))));
                        var_25 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */int) (unsigned short)3666)) != (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 3628874759U)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)61868)))))))));
                    }
                }
            } 
        } 
    }
}
