/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157730
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) (~((~(-1105209643)))));
                var_10 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_4] [8] = ((/* implicit */signed char) var_4);
                                var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_2))))))), (5162408015319830922ULL)));
                                var_12 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))))));
                                var_13 = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_28 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 13284336058389720708ULL))))) & (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) var_4)))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((long long int) var_2))))) ? (((((/* implicit */_Bool) 8657452067520224987ULL)) ? (((/* implicit */unsigned int) var_7)) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))));
                                var_16 = ((/* implicit */int) var_1);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))) - (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 4; i_13 < 7; i_13 += 3) 
                        {
                            {
                                arr_42 [i_9] [i_9] [i_9] [i_11] [i_9] [i_12] [i_9] = ((/* implicit */int) ((long long int) max(((+(((/* implicit */int) (unsigned char)146)))), (((/* implicit */int) ((signed char) (unsigned char)126))))));
                                var_18 = ((/* implicit */int) var_1);
                                var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) (unsigned char)219)) ? (((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) + ((-(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) (-((~(min((67108863), (((/* implicit */int) var_9))))))));
                var_21 = ((/* implicit */short) var_4);
                /* LoopNest 3 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            {
                                arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) var_9);
                                var_22 = ((/* implicit */unsigned long long int) var_5);
                                arr_51 [i_14] [i_9] [i_14] [0U] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
