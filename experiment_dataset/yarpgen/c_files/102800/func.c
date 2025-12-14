/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102800
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
    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) var_9))));
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_0 [i_0]))))));
        var_20 = (~(((/* implicit */int) ((arr_0 [i_0]) || (((/* implicit */_Bool) var_12))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (short)3128))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_9 [i_1] = ((/* implicit */int) var_1);
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_1 [i_1]))));
            }
            for (short i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                var_23 = ((/* implicit */short) arr_8 [i_4] [i_4] [i_1] [i_1]);
                arr_14 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */int) var_9);
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)15)))))) >= (((arr_1 [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                arr_15 [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((signed char) var_14));
            }
            /* LoopSeq 3 */
            for (unsigned char i_5 = 4; i_5 < 10; i_5 += 2) 
            {
                var_25 |= ((/* implicit */unsigned short) (~(arr_7 [i_5] [i_2] [i_1] [i_1])));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) < (11051293708193454040ULL)))) >> (((arr_1 [i_1]) - (1076867703U))))))));
                arr_20 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_17 [i_2] [i_5 - 1] [i_5]) : (arr_17 [i_2] [i_5 - 1] [i_2])));
                arr_21 [i_1] [i_1] [i_1] = arr_6 [i_1] [i_1] [i_1];
            }
            for (int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_2] [i_6] [i_1] [i_2]))) ? (arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
                arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_15);
            }
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                var_28 = ((/* implicit */long long int) min((var_28), ((+(((((-474901825585193636LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_16 [i_2] [i_2] [i_1])) - (48)))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_33 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((2521828523692881345LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46743)))));
                            var_29 &= (+(((long long int) (signed char)0)));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2]))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_2]))))) : ((~(var_10)))));
        }
        arr_34 [i_1] [i_1] = ((/* implicit */short) (signed char)0);
        arr_35 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)248));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)9131)))) != ((+(var_13))))))));
    }
    var_34 = ((/* implicit */_Bool) (+((((+(((/* implicit */int) var_12)))) & ((+(((/* implicit */int) (_Bool)1))))))));
    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) | ((-(-8574649388718728042LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4)))))))));
}
