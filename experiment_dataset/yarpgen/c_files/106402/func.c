/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106402
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
    var_11 &= ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) -759232978)))) ? (-1355268856) : (((/* implicit */int) (signed char)-19))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1355268874) : (-1355268874)))) ? (1355268860) : (((/* implicit */int) (unsigned char)129))))) ? ((~(((/* implicit */int) ((unsigned char) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_10)))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_9 [i_1] [i_3] = (signed char)34;
                    var_13 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) 1355268856))))) ? (1355268874) : (((/* implicit */int) ((((/* implicit */_Bool) 134217727)) || (((/* implicit */_Bool) -1355268856))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_5] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                                arr_16 [i_1] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-86)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))) : (var_1))) >> (((((/* implicit */int) var_2)) - (9695)))));
                                var_14 += ((/* implicit */long long int) (((-((+(var_1))))) % (((/* implicit */unsigned int) -1355268855))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_8))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_26 [i_9] [i_8 - 1] [i_7] [i_7] [i_6] [i_1] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (var_8) : (((/* implicit */long long int) 1355268867))));
                            var_16 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1355268877))))))));
                            var_17 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)224))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) ((signed char) var_0))))));
                        }
                    } 
                } 
            } 
            var_19 *= ((/* implicit */unsigned int) 1355268856);
            arr_27 [i_1] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
            arr_28 [i_6] [i_1 + 1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))));
            arr_29 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned int) ((signed char) (unsigned char)4));
        }
        var_20 ^= ((/* implicit */unsigned char) (+(((13563716534952058154ULL) * (((/* implicit */unsigned long long int) var_8))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) ((long long int) 7900472522915138482ULL)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        arr_34 [(unsigned char)3] = ((/* implicit */int) (((~(var_8))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))));
        arr_35 [i_10] = ((/* implicit */signed char) var_4);
        var_22 ^= (+((-(((/* implicit */int) (signed char)-1)))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_9))));
    }
}
