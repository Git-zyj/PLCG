/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185294
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
    var_12 = var_11;
    var_13 = max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */unsigned long long int) max((-9050619692766524965LL), (((/* implicit */long long int) (unsigned short)1650))))))), (((/* implicit */unsigned long long int) (+(var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 9898520910214877440ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24762))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (1729843596U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    arr_10 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1652))));
                }
                var_14 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [i_1] [i_1] [i_0 - 2])), (arr_5 [i_0])))))), (((/* implicit */int) arr_6 [i_1] [9U] [i_1]))));
                var_15 -= ((/* implicit */unsigned short) var_0);
                var_16 = ((/* implicit */short) arr_4 [i_1]);
            }
        } 
    } 
    var_17 *= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21718)) ? (((/* implicit */long long int) min(((+(((/* implicit */int) (short)24901)))), (((/* implicit */int) ((_Bool) var_6)))))) : (min((((/* implicit */long long int) max(((short)24871), (((/* implicit */short) var_11))))), (min((9050619692766524955LL), (((/* implicit */long long int) 1048448U))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max(((+(((/* implicit */int) max((arr_14 [i_3]), (((/* implicit */unsigned short) (short)-24910))))))), (((/* implicit */int) min((arr_16 [i_5]), (arr_19 [i_3] [i_4])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_22 [i_3] [i_3] = var_2;
                        arr_23 [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) (short)-24922);
                        arr_24 [i_3] [i_3] [i_5] [i_3] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-24902)) - (((/* implicit */int) (short)24912))));
                        var_20 = ((/* implicit */signed char) 4293918848U);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_3] [i_5 - 2] [i_5 - 2] [i_3])) ? (10688818244196655663ULL) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_17 [(signed char)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                    }
                    arr_25 [i_3] [(unsigned short)3] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
}
