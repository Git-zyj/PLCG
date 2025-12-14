/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176444
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((int) (!((!(((/* implicit */_Bool) (unsigned short)49415))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_7);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned char) var_2);
            arr_7 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned char) var_9)));
        }
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            arr_10 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
            var_12 = ((/* implicit */signed char) ((short) (short)112));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)142))));
            var_14 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-30657)) : (((/* implicit */int) var_1))))));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30657))) : (-1709766732372282926LL)));
            var_16 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)61574));
            var_17 += ((/* implicit */unsigned int) ((unsigned short) var_4));
        }
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((unsigned int) var_1)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_19 += ((signed char) (-(var_4)));
            var_20 = ((/* implicit */short) -4117780469529586983LL);
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned char)140)) != (((/* implicit */int) var_7))))));
            arr_21 [i_4] [i_6] = ((/* implicit */long long int) (unsigned short)19);
            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-30657))))) > (((/* implicit */int) var_1))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61601)) << (((992417734U) - (992417720U)))))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
        {
            arr_24 [i_4] [i_7] [i_4] = (~(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) : (3302549569U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))))));
            var_24 = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_0)))) ? ((-(var_4))) : (((/* implicit */int) (unsigned char)157))))));
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_32 [i_4] [i_7] [i_4] [i_9] [i_10] = ((/* implicit */_Bool) (short)-30649);
                            var_25 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) min((var_0), ((unsigned short)3934))))))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3628141194U)) ? (((/* implicit */int) (unsigned short)3935)) : (((/* implicit */int) (short)15295))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)15))))))))));
                        }
                    } 
                } 
                arr_34 [i_4] [i_7] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned char)129)))))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) / (((var_7) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) var_0))))));
                            arr_43 [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
                var_28 *= ((unsigned short) (!(((/* implicit */_Bool) 4210031207U))));
            }
            arr_44 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_1)))))))), (((unsigned char) ((signed char) (unsigned short)62397)))));
        }
    }
}
