/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153462
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(var_9)))), (((((/* implicit */_Bool) (unsigned char)250)) ? (var_2) : (((/* implicit */unsigned long long int) ((8562053981523384812LL) - (((/* implicit */long long int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) var_15);
                arr_5 [i_0] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */long long int) (-(var_0))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 775159301U)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (short)-32751))))) ? (((/* implicit */unsigned long long int) max((max((710380492007663252LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)255)))))))) : (min((var_5), (((/* implicit */unsigned long long int) var_9))))));
                                arr_14 [i_0] [18LL] [i_2] [i_2] [i_0] [i_3] [(signed char)2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((3312120018832967720LL) / (-3059413287147510436LL))) + ((~(-1006137131125076052LL))))))));
                                arr_15 [i_0 - 1] [(_Bool)0] [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_15)), (min((var_1), (12ULL))))), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                                arr_16 [(short)5] [(short)5] [i_2] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [(signed char)9] [12LL] [(unsigned short)18] [i_0] [i_4])) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [(_Bool)1] [i_0] [i_3] [i_0] [i_0 + 1])), (arr_13 [i_0] [i_0]))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_4 [i_0] [i_5] [i_2]))))) ? (((/* implicit */unsigned long long int) -596073955507542642LL)) : (max((var_2), (var_2)))))));
                                var_19 = ((/* implicit */signed char) min((((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_3))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                            {
                                arr_22 [(_Bool)1] [i_1] [(unsigned char)8] [i_0] [(unsigned char)8] [i_6] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)192))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [13LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4279374040884138276ULL)) ? (-5608337360155530730LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (0ULL)));
                                var_22 = ((/* implicit */unsigned int) (unsigned char)4);
                            }
                            arr_23 [i_0] [i_0] [(signed char)11] [i_3] = ((/* implicit */unsigned char) ((min((15110575833055037385ULL), (((/* implicit */unsigned long long int) 690707698)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 50331648))))))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] = ((/* implicit */long long int) ((max((max((arr_4 [i_0] [i_0] [(_Bool)1]), (1333508636U))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-24)), (16777215)))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((524287ULL), (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) ((unsigned char) (unsigned short)53798))))))));
            }
        } 
    } 
}
