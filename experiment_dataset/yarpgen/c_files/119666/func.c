/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119666
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
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */int) ((short) (unsigned char)249))) : (((/* implicit */int) var_5)))) < (((((/* implicit */int) var_3)) ^ (((/* implicit */int) max(((short)18), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) % ((~(10U)))));
        var_13 = ((1101648983900617265ULL) >> (((((/* implicit */int) ((unsigned char) (unsigned short)19275))) - (63))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_15 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-34)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3] [i_3 - 1]))) : (6424291358455039740LL)))));
                            var_16 = ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_1) : (var_1)));
                            arr_18 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_0)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))) || (((/* implicit */_Bool) var_1)))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))))) ? (((((/* implicit */int) max(((unsigned char)255), (var_4)))) ^ (max((((/* implicit */int) (unsigned char)170)), (1048512))))) : (((/* implicit */int) ((unsigned short) (short)-23311))))))));
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1]))))) : (((/* implicit */int) arr_3 [i_1]))));
                        }
                        arr_20 [i_2] [i_2] [1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -6243926540798866797LL)) ? (((/* implicit */int) (unsigned short)38969)) : (((/* implicit */int) (unsigned char)25)))))), (((unsigned long long int) (+(((/* implicit */int) (signed char)122)))))));
                        arr_21 [i_2] [i_3 - 2] = ((/* implicit */_Bool) var_8);
                        var_18 ^= ((/* implicit */short) var_9);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) var_7);
    }
}
