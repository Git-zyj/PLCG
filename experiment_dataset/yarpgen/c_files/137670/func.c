/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137670
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
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 |= 4153945127U;
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32791)))))) && (((/* implicit */_Bool) 141022169U)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_6))) != ((-(((/* implicit */int) (short)13412))))))) : (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) (signed char)0))))) * (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))))))))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) var_9);
                        var_19 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) ^ (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (3194287480U)))));
                        arr_11 [i_3 - 1] [i_2] [i_2] [i_0] = ((/* implicit */short) ((var_5) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    }
                    for (short i_4 = 4; i_4 < 21; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((4153945127U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [0LL] [i_2] [i_4 - 1] [i_4] [i_5 - 1]))))) ? (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)9)))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 3788074661980545403ULL))));
                            var_22 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (signed char)110)))));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((unsigned long long int) 4153945127U)) >> (((18446744073709551615ULL) - (18446744073709551573ULL))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3194287490U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_2] [i_4] [i_4 - 4])))))) ? (((((/* implicit */_Bool) (unsigned short)41848)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)0)))))))) : ((-(((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_0] [i_2]) : (17175054944625537433ULL)))))));
                            arr_18 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [13LL] [i_2])) + ((+(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) arr_5 [(signed char)8] [i_4] [(unsigned char)4])) ? (8ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (536870911U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)20460))))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11))) : (0ULL))))) : (((/* implicit */unsigned long long int) 3194287490U))));
                        arr_19 [10ULL] [(signed char)13] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)10188)) ? ((+(((/* implicit */int) min(((short)1024), (((/* implicit */short) (signed char)127))))))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned short)30618)) >= (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [(short)18]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)16829)))))))));
                        var_26 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                }
            } 
        } 
    } 
}
