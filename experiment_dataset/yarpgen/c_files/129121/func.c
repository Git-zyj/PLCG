/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129121
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((arr_1 [(short)3]), (min((((unsigned char) var_1)), (((/* implicit */unsigned char) arr_0 [i_2] [i_2]))))));
                        var_20 ^= ((/* implicit */int) (+((+(min((arr_3 [i_3] [i_1]), (((/* implicit */long long int) var_17))))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3]))))))));
                        var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0] [(short)8]);
                    }
                    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((short) var_8));
                        var_24 = ((/* implicit */unsigned short) ((unsigned char) min((5226372649579465671LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (var_1)))))));
                        var_25 = (+(((((/* implicit */_Bool) arr_8 [i_2] [i_4 + 1] [i_4 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_4 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_0])))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */short) arr_1 [i_0 - 1])))))));
                            arr_18 [i_0] [i_1] [i_5 + 1] [i_1] [i_6] [2U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (short)-14771)) ? (max((((/* implicit */long long int) (unsigned short)40042)), (-5226372649579465671LL))) : (((/* implicit */long long int) ((int) arr_10 [i_1] [i_1])))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-5226372649579465671LL)))) ? (((((/* implicit */_Bool) 549755811840LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)512)))) : (((/* implicit */int) ((unsigned char) -228327537932724894LL)))));
                            var_28 = ((/* implicit */unsigned long long int) ((min((5226372649579465671LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1]))))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5 - 2] [i_2 - 1] [i_0] [i_0 - 1] [i_0])) >> (((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_5]), (((/* implicit */unsigned short) arr_10 [i_0] [i_0]))))) - (62698))))))));
                            arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_0 - 1] [i_2 - 3]), (((/* implicit */short) var_1))))) ? (((unsigned long long int) 5226372649579465671LL)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)64720)))))));
                        }
                        arr_20 [i_0] [i_2 + 1] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) arr_22 [i_8] [i_10]);
                        arr_30 [i_8] [i_7] [i_8] [i_8 - 1] [i_9] [i_10] = ((/* implicit */_Bool) var_2);
                        var_31 = ((/* implicit */unsigned char) ((long long int) var_0));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5226372649579465671LL)) ? (var_2) : (((unsigned int) min((((/* implicit */unsigned short) arr_21 [i_9])), ((unsigned short)8192))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_16) >> (((arr_27 [i_7] [i_7] [i_7]) - (872825808)))))) ? (((/* implicit */long long int) (-(var_2)))) : (max((5226372649579465671LL), (((/* implicit */long long int) arr_24 [12U]))))));
    }
    var_34 |= ((((/* implicit */_Bool) ((signed char) var_18))) ? (var_5) : (((/* implicit */unsigned long long int) min((min((var_14), (5226372649579465658LL))), (((/* implicit */long long int) var_3))))));
    var_35 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((5226372649579465671LL), (((/* implicit */long long int) (_Bool)0))))), (min(((~(var_5))), (((/* implicit */unsigned long long int) ((int) var_11)))))));
}
