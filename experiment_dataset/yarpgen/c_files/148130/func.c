/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148130
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) - (var_6))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */long long int) (!(var_9)));
                    var_14 = ((/* implicit */signed char) ((unsigned short) 4095));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) var_0));
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) arr_12 [i_1] [i_0] [i_3]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_1] [i_0]))) : (var_6)))));
                    var_16 ^= ((((/* implicit */_Bool) max(((short)29827), ((short)-9180)))) ? (((min((2233785415175766016LL), (((/* implicit */long long int) arr_1 [i_1])))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) var_1))))))) : (-1028046507062194447LL));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-((-(((long long int) arr_0 [i_0]))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2966204719363378850LL)) ? (-1028046507062194447LL) : (((/* implicit */long long int) var_4))));
                        var_18 = ((unsigned int) (+(-2233785415175766016LL)));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_4] [i_6] = ((/* implicit */short) ((int) ((unsigned long long int) (signed char)127)));
                        var_19 *= ((/* implicit */short) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) (_Bool)0))));
                        var_20 -= ((/* implicit */signed char) var_10);
                        arr_25 [i_0] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) ((short) var_2));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_18 [i_0] [i_1] [i_0] [i_0]);
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) ((short) var_8))))));
                    arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
                }
                var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((signed char)99), (((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1])))))));
                arr_28 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (max((arr_3 [i_0]), (arr_3 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2233785415175766008LL), (var_11)))) ? (((/* implicit */int) max((var_1), (var_2)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) var_4)) == (var_11)))), (var_7))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_4)) : (((2233785415175766008LL) - (var_11)))))));
    var_24 -= ((/* implicit */long long int) var_3);
}
