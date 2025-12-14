/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146226
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) var_11);
                            var_19 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) var_8)) ? (-345629663) : (345629663))) : ((+(((/* implicit */int) var_0)))))), (max((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (signed char)0)) : (-345629664)))))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                            {
                                var_20 -= ((/* implicit */_Bool) ((int) 345629662));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_3 - 1] [i_1 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (max((2533756055U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_3 - 1] [i_2] [i_1 + 1])) < (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (unsigned char)0)))))))))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-115)), (var_8)))))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3290026837U)))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -345629664)) ? (((/* implicit */int) arr_3 [i_0] [i_5 - 1])) : (2005248854)));
                            }
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                            {
                                var_25 = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) ((short) var_4)))), ((-(1577638339U)))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) -345629664))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 1846703809U)) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11877))) : (max((3513890885U), (((/* implicit */unsigned int) var_9)))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */_Bool) var_2)) ? (781076416U) : (((/* implicit */unsigned int) var_11))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_0)))))));
}
