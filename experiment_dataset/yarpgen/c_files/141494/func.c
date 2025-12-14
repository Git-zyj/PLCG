/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141494
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_0)))) ? ((-(var_6))) : (max((var_0), (((/* implicit */int) var_3))))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)119)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((unsigned short) var_5)))));
                var_12 += ((/* implicit */signed char) max((min((((var_4) ^ (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_1)) ? (var_8) : (var_1))))), (((/* implicit */int) ((unsigned short) var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0))))))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_8)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) var_6))))) : (((/* implicit */int) var_3)))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 13; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1)))));
                                var_16 ^= ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)32)))));
                                var_17 = ((/* implicit */unsigned char) ((((_Bool) max((var_5), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5)))))) : (max((((/* implicit */long long int) (_Bool)1)), (-2125873319288991139LL)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (max((var_9), (min((var_9), (var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            arr_22 [i_2] [i_3] |= ((/* implicit */signed char) var_1);
                            var_19 ^= ((/* implicit */unsigned char) var_6);
                            arr_23 [i_3 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_3)))) : (min((((/* implicit */int) var_9)), (var_8)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_0)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) min((var_6), (var_0)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))))));
                        }
                    } 
                } 
                arr_24 [i_2] [i_2] = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 2; i_9 < 22; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned short i_11 = 2; i_11 < 21; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((min((var_8), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))))));
                                var_21 = ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_0))) : (((/* implicit */int) ((var_8) > (((/* implicit */int) var_7)))))));
                                var_22 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((var_1) ^ (var_1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))));
                                arr_42 [i_13] [i_13 + 3] [i_11] [i_13] [i_13 + 2] = ((/* implicit */signed char) ((unsigned long long int) -8020780132102337097LL));
                            }
                        } 
                    } 
                    arr_43 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((signed char) var_3)), (((signed char) var_2))))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((((/* implicit */_Bool) ((signed char) var_8))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_5))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_0))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 19; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                arr_50 [i_9] [i_11] [i_11 - 2] [i_14] [i_10] [i_14] = ((/* implicit */_Bool) min(((+(var_8))), (min((((var_7) ? (var_6) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_2))))));
                                var_23 = ((/* implicit */unsigned char) min((((short) var_8)), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
                                var_24 *= ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_6))), (var_9)))), (min((var_8), (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) (-(max((var_1), (var_0)))))) ? (((/* implicit */unsigned long long int) (-((~(var_1)))))) : (var_5));
    var_26 = ((/* implicit */short) var_6);
}
