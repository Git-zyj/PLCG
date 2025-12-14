/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183492
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_1)) > (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-9083375050429572115LL)))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-9083375050429572110LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) 9083375050429572112LL);
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) 1320597645)) - (var_7)))) ? (((/* implicit */long long int) min((-399597833), (((/* implicit */int) var_1))))) : (min((((/* implicit */long long int) var_2)), (5922126620050715242LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_14 = ((/* implicit */short) ((-1116378645) >= (((/* implicit */int) (unsigned char)0))));
                    arr_14 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (278695563)))) >= (((-9083375050429572115LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) * (min((var_3), (((/* implicit */unsigned long long int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_20 [i_1] [i_2] [(signed char)9] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)10364);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((1134907106097364992ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((1401081334U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)6067))))) ? (var_3) : (max((((/* implicit */unsigned long long int) (unsigned short)51492)), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))) ? (var_7) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) var_4))) * (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_0)))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) 9083375050429572101LL);
                            arr_35 [i_6] [i_8] [i_1] [i_7 - 1] [i_1] [i_6] [i_1] = ((/* implicit */long long int) (((+(var_0))) >= (1090148567579104376LL)));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-2147483646) / (((/* implicit */int) var_8))))) ? (1116378645) : (((((/* implicit */int) (unsigned char)56)) + (((/* implicit */int) var_4)))))))));
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))))) ? ((~(-101165269))) : (((/* implicit */int) var_2))));
    }
    var_20 *= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_5)), (min((var_9), (((/* implicit */long long int) -779996303)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((-1090148567579104376LL) >= (((/* implicit */long long int) -175307771))))))))));
    var_21 = ((/* implicit */int) 9083375050429572089LL);
}
