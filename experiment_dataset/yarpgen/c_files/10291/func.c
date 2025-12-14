/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10291
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((int) min((((var_3) ^ (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1685310337)) / (325797014U))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) (-(-1685310314)));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned short i_3 = 4; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_2] |= ((/* implicit */signed char) (-(min((18128382715871481788ULL), (((/* implicit */unsigned long long int) -1685310337))))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (8030732276110084830ULL))))));
                        arr_13 [i_2] |= ((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_2))))) > (770441422U));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) == (-1685310322)));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_7)))) >> (((-1149523701) + (1149523722))))))))));
                            arr_19 [i_0] [i_0] [i_0] [0] [i_0] = ((/* implicit */unsigned short) min((((min((143974450587500544ULL), (((/* implicit */unsigned long long int) -1685310350)))) + (((/* implicit */unsigned long long int) (-(-1149523701)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -1149523701)) : (arr_4 [i_0] [i_0]))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_6))));
                            arr_24 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))), (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))))));
                            arr_25 [i_2] [i_2] [i_0] [i_2] [i_1] [12U] = ((/* implicit */int) ((unsigned int) var_8));
                        }
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((~(var_3)))))) && (((/* implicit */_Bool) (unsigned short)40052))));
                    }
                } 
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1149523701)) : (3524525861U))));
    }
}
