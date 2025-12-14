/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18905
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) max((var_14), (var_11)));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) -1)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((int) var_11))))))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((unsigned short) ((int) ((_Bool) var_7))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_17 = ((/* implicit */int) ((long long int) var_13));
            var_18 ^= ((int) ((unsigned short) var_13));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_9))));
                        var_20 = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
            {
                arr_16 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_1))));
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((var_0) - (((/* implicit */long long int) ((unsigned int) var_11))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_1))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) / (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) + (var_3)))))));
                            var_24 = var_4;
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) >> (((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_0))) - (8043133575839275263LL)))))) || (((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) != (6917529027641081856LL))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (var_11)))) + (((/* implicit */int) ((unsigned short) var_10)))));
                arr_29 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))) >= (var_12)));
                arr_30 [i_1] [i_1] [i_1] = ((unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-36))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((int) var_1)))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) -6213751319134170577LL))) != (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            }
        }
    }
    var_29 |= ((/* implicit */int) var_8);
    var_30 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((unsigned short) var_9))) >> (((var_12) - (1371370801U))))));
    var_31 = ((/* implicit */unsigned short) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1))))));
}
