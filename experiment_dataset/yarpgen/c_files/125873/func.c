/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125873
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
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (-134217728) : ((-(-134217707))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    var_12 = (+((-((-(var_10))))));
                    var_13 = ((/* implicit */int) min((var_13), (var_5)));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_11 [(signed char)0] [(signed char)0] [1] [(signed char)2] = ((/* implicit */signed char) (+((~(((/* implicit */int) (_Bool)1))))));
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_0)))))))));
                    var_15 += ((/* implicit */short) var_0);
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    var_16 *= (-(var_10));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(var_2))))));
                                var_18 = (+(-9087977603051792730LL));
                                arr_21 [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : ((-((+(((/* implicit */int) var_3))))))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                                var_21 ^= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                                var_22 = var_10;
                                arr_34 [i_0] [(unsigned short)0] [11] [(unsigned short)12] [i_8] = ((/* implicit */unsigned int) (~((~(var_8)))));
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
