/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133472
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
    var_20 = ((/* implicit */signed char) var_18);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-126))))) <= (((var_10) + (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]))))));
        var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)18546))));
        var_22 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)2]))))))) + (((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)0]))));
        var_23 = ((/* implicit */signed char) min((var_23), (var_15)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((var_3) < (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_5 [i_1]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)123)))) : (0U)))));
                            var_26 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)155)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20073))) + (14476146147351258105ULL)))))) | (((/* implicit */int) (unsigned char)99)));
                            arr_15 [i_4] [i_4] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1]))));
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_1] [8ULL] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (18159967745331383629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((18159967745331383632ULL) << (((((/* implicit */int) (unsigned short)65535)) - (65525))))) ^ (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_6] [i_6])))))))));
                    arr_23 [i_6] [i_1] [i_6] [i_7] |= ((/* implicit */signed char) (unsigned char)196);
                    var_28 = ((/* implicit */long long int) var_8);
                    var_29 += ((/* implicit */unsigned short) arr_19 [i_1] [i_2] [i_1] [i_7] [i_1]);
                }
                arr_24 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)47009)) ? (8444249301319680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) max((arr_9 [i_2] [i_2] [i_2]), (arr_12 [i_1] [i_1] [i_1] [i_1] [(_Bool)1])))))))));
                var_30 = ((/* implicit */unsigned char) (~(2147483647)));
            }
            arr_25 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_18)))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 732962481U)) ? (2676811888U) : (1713576551U)));
            arr_29 [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)46216)) && (((/* implicit */_Bool) (unsigned short)1709)))) ? ((-(((((/* implicit */_Bool) (short)0)) ? (2147483647) : (((/* implicit */int) (unsigned short)26016)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)172)) ? (-1016124643) : (((/* implicit */int) arr_20 [i_8] [i_8]))))))));
        }
        var_32 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-20)), ((short)-25198)))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (286776328378167987ULL))))));
        var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned short) var_16)), (var_11)))) ? (((/* implicit */unsigned int) (-(2147483647)))) : (((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_19 [i_1] [(_Bool)0] [8ULL] [i_1] [i_1])))));
        var_34 = ((/* implicit */short) ((((((3080888368715085915ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)32767)))))));
    }
    var_35 ^= ((/* implicit */short) ((_Bool) (unsigned short)13));
}
