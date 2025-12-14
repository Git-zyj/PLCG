/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184655
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1]) ? (var_7) : (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [9])))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61601))) : (((arr_1 [i_0] [i_0 + 1]) + (((/* implicit */unsigned long long int) 3056047352U))))))));
        var_10 = 1238919973U;
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_0 [i_1])), (((unsigned int) arr_5 [i_0 + 1] [i_0 + 1]))));
            arr_8 [i_0] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_4 [i_1])), (3056047338U))), ((-(4018199512U)))))) && (((/* implicit */_Bool) arr_1 [i_0] [(signed char)8]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_11 = ((/* implicit */short) arr_4 [i_2]);
                var_12 = ((/* implicit */unsigned short) ((arr_0 [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3816045819U)))));
                var_13 ^= ((/* implicit */long long int) (unsigned short)10847);
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_13 [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)22396))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)105)), ((unsigned short)54701)))))) ? (3125877138322747062LL) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_10 [i_1]))))), (arr_12 [i_3] [i_3])))));
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) max((2359184352U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0 - 1]) : (arr_10 [i_0 + 1]))))));
            }
            var_14 = ((/* implicit */unsigned int) var_3);
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) min((((signed char) 1238919943U)), (arr_17 [i_0 + 1])));
            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (short)-11680)) : (((/* implicit */int) arr_3 [i_0] [i_4] [i_4]))))) ? (((/* implicit */int) arr_3 [i_4] [(unsigned short)10] [i_0 + 1])) : (((((/* implicit */int) arr_3 [i_0 - 1] [i_4] [i_0])) & (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])), (arr_12 [i_0] [i_4]))), (((/* implicit */long long int) ((unsigned short) var_1)))))) && (((/* implicit */_Bool) max((max(((unsigned short)54684), (((/* implicit */unsigned short) (short)21811)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4] [i_0 + 1] [i_0])) && (((/* implicit */_Bool) (unsigned short)10833))))))))));
            var_16 = ((/* implicit */signed char) ((unsigned char) (unsigned short)10849));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)54702)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned short)10847)))), (((/* implicit */int) var_4))));
            arr_23 [1] [i_0] = ((/* implicit */short) (-(max((max((-7692647018546228720LL), (((/* implicit */long long int) arr_10 [8U])))), (((/* implicit */long long int) ((int) arr_15 [(signed char)6] [4LL] [(signed char)6])))))));
        }
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 3) 
        {
            var_18 = min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) arr_16 [i_0 + 1])) >> (((((/* implicit */int) arr_16 [i_0 - 1])) - (46067))))));
            arr_27 [i_0] [i_6] = ((/* implicit */unsigned char) (unsigned short)10834);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_19 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_7] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
                var_20 = ((/* implicit */unsigned int) (short)6603);
            }
            arr_31 [i_6] [i_0] [i_6] = (~(((/* implicit */int) (_Bool)0)));
        }
        /* LoopNest 3 */
        for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            for (unsigned char i_9 = 3; i_9 < 10; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 276767784U)) && (((/* implicit */_Bool) (unsigned char)48)))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_8] [i_10])) ? (min((((/* implicit */int) (unsigned short)60270)), (var_7))) : (((/* implicit */int) ((short) arr_5 [i_9] [i_0])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
    {
        arr_43 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3056047352U)) ? (arr_35 [i_11] [i_11 + 1] [i_11] [i_11 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)246)), ((unsigned short)63180)))))))) : (((unsigned long long int) (short)6592))));
        arr_44 [i_11] [i_11] = ((/* implicit */int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (unsigned short)5651)) : (((/* implicit */int) arr_15 [i_11] [i_11] [i_11]))))), (arr_35 [i_11] [i_11] [i_11] [i_11]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-26)), (4130499012U)))) && (((/* implicit */_Bool) (short)-644)))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_4 [i_11 - 1]))));
        var_24 *= ((unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_9 [i_11 - 1] [i_11 - 1] [i_11 + 1]) : (arr_9 [i_11 - 1] [i_11 - 1] [i_11 + 1])));
    }
    var_25 &= ((/* implicit */_Bool) (unsigned char)27);
    /* LoopNest 2 */
    for (long long int i_12 = 3; i_12 < 19; i_12 += 4) 
    {
        for (signed char i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            {
                arr_50 [i_12] = ((arr_48 [i_12] [i_13]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_5))))))));
                var_26 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((unsigned short) var_6))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)114))) && (((/* implicit */_Bool) (signed char)-8)))))));
            }
        } 
    } 
}
