/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171525
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 |= ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(var_10)))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            arr_17 [i_2] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (short)-16782)) : (2037705826)))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        }
                        var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_0)))))) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
        arr_18 [16] |= ((/* implicit */signed char) (~(((((((/* implicit */int) var_4)) / (((/* implicit */int) var_3)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (int i_6 = 4; i_6 < 21; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_7] [i_5] [i_6 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_7)))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) var_4)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_5] [i_6 - 2] [i_7] [i_8 - 2] [i_8 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_5)))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) : (((((/* implicit */int) var_0)) % (((/* implicit */int) var_3))))));
                        }
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((((((/* implicit */int) var_0)) < (((/* implicit */int) var_7)))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)16419)) ? (((/* implicit */int) (short)16781)) : (((/* implicit */int) (short)-16782)))))))))));
                    }
                } 
            } 
        } 
    }
    var_16 |= ((/* implicit */int) var_3);
    var_17 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-110))));
}
