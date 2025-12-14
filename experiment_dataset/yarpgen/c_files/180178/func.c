/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180178
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [11U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3924530304U)))) ? (((var_2) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)29144)))))))) + ((+(2383423516U)))));
                                var_14 = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_20 [10LL] [i_1] [8ULL] [i_0] [9LL] [i_5] [i_6] = ((/* implicit */short) ((var_5) > (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_21 [10] [i_1] [(signed char)0] [i_2] [i_0] [(short)4] = ((/* implicit */unsigned long long int) var_13);
                                var_15 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)99)) ? (var_8) : (((/* implicit */int) (_Bool)0))))) + (min((((/* implicit */unsigned int) (_Bool)1)), (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45900)) ? (((/* implicit */long long int) var_2)) : (var_5)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 7021546864644788053ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)90)))) >= (((/* implicit */int) (signed char)122)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (_Bool)1)) : (205593151)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)103))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6))))))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) % (770737972)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((3990702241U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)20828)))))))))));
}
