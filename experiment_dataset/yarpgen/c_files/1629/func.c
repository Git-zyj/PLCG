/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1629
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
    var_18 = ((/* implicit */long long int) var_15);
    var_19 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_2))), (min((((/* implicit */unsigned long long int) (signed char)24)), (8796093022208ULL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (max((((/* implicit */long long int) var_17)), (var_12))))) : (((/* implicit */long long int) var_9)));
    var_20 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (short)27744)), (8796093020160LL)));
        var_21 ^= ((/* implicit */long long int) max((((signed char) (short)-27745)), (((/* implicit */signed char) ((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)28995)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)53))))))))));
        var_22 = ((/* implicit */signed char) ((unsigned char) 7821038108289660710LL));
        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)-111)));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_24 ^= ((/* implicit */_Bool) (short)-24808);
            arr_7 [i_0] [i_1] [0LL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)112))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (((-8796093020151LL) + (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
            arr_8 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? ((((+(var_6))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((-9141330350761487690LL) % (((/* implicit */long long int) (+(var_15)))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_11 [i_0] [i_2] = ((/* implicit */signed char) (-(-6376818376187374203LL)));
            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34438))));
            var_26 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)28995))));
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (8796093020133LL)));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28995)) <= (((/* implicit */int) arr_10 [i_0]))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_19 [i_5] [i_4 - 1] [i_0] [i_3] [i_2] [i_0]))));
                            var_30 = ((/* implicit */unsigned short) (-(arr_19 [i_5] [i_4] [i_4 - 3] [i_4] [8U] [i_3 - 2])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36530)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 - 2] [i_2] [i_3] [i_2]))) : (790715448U)));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_0] [i_0] [i_2] = arr_19 [i_6] [3LL] [i_2] [i_2] [i_0] [i_0];
                var_32 = ((/* implicit */unsigned short) arr_6 [i_0] [i_2]);
            }
            var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [4LL] [4LL])) <= (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */signed char) arr_17 [0U] [0U] [i_7] [i_7]);
            /* LoopSeq 2 */
            for (unsigned int i_8 = 2; i_8 < 8; i_8 += 4) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((8796093020126LL) + (-8796093020135LL)))) ? (((((/* implicit */int) (unsigned short)34438)) + (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) arr_26 [i_0] [i_7] [i_0]))))));
                var_35 = ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0]))));
            }
            for (unsigned int i_9 = 2; i_9 < 8; i_9 += 4) /* same iter space */
            {
                var_36 ^= ((/* implicit */unsigned char) ((8796093020167LL) > (arr_13 [i_0] [i_0] [i_0] [i_0])));
                var_37 = ((/* implicit */long long int) (short)29992);
            }
            var_38 = ((/* implicit */unsigned char) (+(((-5752312523549196999LL) - (((/* implicit */long long int) 2574819255U))))));
        }
    }
}
