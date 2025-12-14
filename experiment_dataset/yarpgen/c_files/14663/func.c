/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14663
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_3 [i_3] [i_0] [i_0])))) | ((~(max((15252964897940742235ULL), (15252964897940742235ULL)))))));
                            arr_14 [0] [i_0] [0] [i_0] [11] [i_1] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)71)), (15252964897940742235ULL)))))));
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) 3193779175768809380ULL));
                            arr_15 [i_0] [i_0] [i_3] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1]))))) & (max((((/* implicit */unsigned long long int) var_12)), (15252964897940742235ULL)))))));
                            var_17 = (~(((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)49))))) + ((+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    var_18 = max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) 900181934)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0)))) == (((/* implicit */int) var_0))))), (((unsigned short) max((var_3), (((/* implicit */short) var_13))))));
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)187)) && (((/* implicit */_Bool) 2880422459U)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_0] [(unsigned short)4] [(_Bool)1] = max((900181952), (((/* implicit */int) (unsigned short)38807)));
                                var_20 = ((/* implicit */long long int) ((unsigned short) ((min((2657608750U), (((/* implicit */unsigned int) var_7)))) == (((/* implicit */unsigned int) (~(var_4)))))));
                                arr_25 [i_0] [i_0] [i_4 - 1] [i_4 + 2] [i_5] [i_4 - 1] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)50111), (((/* implicit */unsigned short) arr_6 [i_0] [i_0]))))), (((((/* implicit */_Bool) min((-7261173018229142520LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (signed char)-116))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) >> ((((~(var_14))) - (3084501984U)))))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 31119643)), (arr_1 [i_6])))) ? (((long long int) 0)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33009)))))) ? (((/* implicit */int) (unsigned short)25637)) : (((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */long long int) ((_Bool) arr_3 [i_4] [i_0] [i_0]));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((_Bool) (+(((((/* implicit */_Bool) var_13)) ? (-8545882320099521809LL) : (((/* implicit */long long int) 216333336U)))))));
}
