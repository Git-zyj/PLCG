/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133029
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_2 [i_0])) : ((+(((/* implicit */int) var_3))))))) ? (((long long int) ((unsigned char) var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)79))))) : (((/* implicit */int) max((var_5), ((unsigned short)13946))))))));
        arr_3 [i_0 - 1] [i_0] &= ((/* implicit */unsigned short) ((-1501220785) + (((/* implicit */int) (unsigned short)65534))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned short) arr_1 [i_0 - 2] [i_0 + 1])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (var_4))))))))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1977131118)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2584592294U)))) : (arr_5 [i_1])))) ? (((arr_5 [i_1]) ^ (((((/* implicit */_Bool) 1257380828U)) ? (-4117624845652642291LL) : (((/* implicit */long long int) -158851267)))))) : (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_0] [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_0 [i_0 - 2]))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_9))), (var_9))) : (-712207815377568058LL));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 155170006615903915ULL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)3830))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)12237)), (-1048576LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (min((var_6), (((/* implicit */long long int) 1390079412U))))))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) min((arr_4 [i_2 - 1] [i_2 - 2]), (((long long int) -3861673152180961169LL))));
            arr_10 [i_2 - 1] [i_2 - 2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49036))) - (14787010596725526809ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2])) ? (var_9) : (arr_5 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 1]))) : (var_6))) : (arr_5 [i_2]));
            arr_11 [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) - (var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8526))))) : ((-(var_0)))))) - (((((/* implicit */_Bool) (unsigned short)46640)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)39296))))) : (((((/* implicit */_Bool) 2906651698U)) ? (5656436210597730010ULL) : (((/* implicit */unsigned long long int) var_6))))))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_3])) | (min((((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [i_3])))), (((/* implicit */int) max((var_10), (var_2))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (var_8)))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (30786325577728LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) << (((((/* implicit */int) arr_0 [i_3])) - (65))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_22 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_20 [i_3] [i_4] [i_5 + 2])), (var_10)))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (unsigned short)55874))))));
                    arr_23 [i_3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) : (var_7)))), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4]))) : (((((/* implicit */_Bool) (unsigned short)25430)) ? (-3731849091447987022LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21)))))))) : (min((((/* implicit */unsigned long long int) arr_19 [i_4] [i_5 + 2])), (var_4)))));
                    var_19 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_19 [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))) >= ((+(((/* implicit */int) arr_14 [i_5 - 1]))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)27732)))))), (((/* implicit */int) var_1))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), ((~(var_4)))))) ? (((/* implicit */unsigned long long int) var_9)) : ((+(var_4))))))));
}
