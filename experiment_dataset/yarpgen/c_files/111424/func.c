/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111424
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
    var_12 ^= ((/* implicit */_Bool) ((min((((/* implicit */int) var_6)), (((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)127)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8048)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_6)))) : (((/* implicit */int) var_10))))));
    var_13 = var_1;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (((((+(var_7))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (5862887926723667605LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8064)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_3)) - (28856)))))) ? ((~(((/* implicit */int) (short)-8064)))) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_1]))))));
            arr_8 [6U] &= ((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */short) var_11))))) < ((~(((/* implicit */int) (unsigned short)0)))))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3741354742U)));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_15 -= ((/* implicit */unsigned int) (short)8063);
            var_16 ^= ((/* implicit */_Bool) arr_10 [i_0] [i_2]);
        }
        var_17 ^= ((/* implicit */unsigned char) ((min((33554432), (((/* implicit */int) (signed char)120)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)34138)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) ((signed char) 3251954458U)))))));
        var_18 ^= ((/* implicit */_Bool) var_9);
        var_19 = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (unsigned short)19))))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_15 [i_4]))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((15586466222002076409ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_23 *= ((/* implicit */short) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_6] [i_5 - 1])))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3))));
                            var_25 = var_0;
                        }
                    }
                } 
            } 
        }
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned char) arr_15 [2ULL]);
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8574)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))));
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2403590202U)))) || (((/* implicit */_Bool) var_11)))))));
}
