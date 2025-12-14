/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163367
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_1] [i_1] [i_0 - 1])) ? (((4713123443911456197LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)162)))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(signed char)0] [i_0 - 2] [(signed char)0])) ? (((/* implicit */int) arr_4 [(short)6] [i_0 - 1] [(short)6])) : (((/* implicit */int) arr_4 [(signed char)0] [i_0 + 1] [i_0 + 1])))))));
                        arr_12 [i_0] [(unsigned char)10] [i_0] [i_1] = ((/* implicit */long long int) ((short) (short)17989));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) 4713123443911456197LL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_2 + 3] [i_1])))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2584520819703724734LL)) ? (-1907405512) : (1219915440)))))))));
                    }
                    for (signed char i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (+(1577160798U)))) ? (7599827101560428307LL) : ((~(-7599827101560428300LL))))));
                        var_18 = var_0;
                        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 156207093464991154LL))))), (((short) arr_8 [i_0] [0LL] [(short)2] [i_4 - 3])))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((((long long int) arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0] [(signed char)9])), (((/* implicit */long long int) var_10))));
                                var_21 -= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 + 3] [i_6]))) + (3680925837953023782LL))));
                                arr_21 [i_0] [i_1] [i_2 + 2] [i_1] [i_5] [i_2] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-2912928815975571641LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -4713123443911456220LL)) ? (14478063U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)27)), ((short)-10703)));
}
