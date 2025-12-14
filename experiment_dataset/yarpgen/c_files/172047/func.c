/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172047
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
    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)120)))), (((/* implicit */int) var_14))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))))));
    var_16 = ((/* implicit */int) (signed char)13);
    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) < (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_5 [0U] [i_1 - 1] [i_1 + 1]), ((signed char)-15)))), (((((/* implicit */_Bool) arr_5 [11U] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_1))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((((/* implicit */int) var_4)) < (var_12))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-13)) + (2147483647))) >> (((((/* implicit */int) arr_0 [(unsigned short)14])) - (103)))))) : (min((((/* implicit */long long int) (signed char)13)), (arr_12 [i_0] [i_0]))))), (((/* implicit */long long int) (unsigned short)26114)))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) min((var_11), (((/* implicit */long long int) (signed char)-30)))))) < (((/* implicit */int) arr_0 [i_4]))));
                                var_21 = ((/* implicit */signed char) arr_1 [i_1]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */int) (short)10878))))))));
                    arr_16 [i_0] [i_1] [13LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (558047188745518298LL) : (((/* implicit */long long int) arr_10 [i_1] [i_5] [i_1 - 1] [i_1])))) | (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_1])))))));
                    var_22 = ((/* implicit */unsigned int) (unsigned short)54170);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_7 - 2] [i_6] [i_5] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) ((((unsigned int) (_Bool)1)) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))))));
                                arr_22 [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) 3103144345U);
                                var_24 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) min((max((((/* implicit */long long int) (signed char)-31)), (((arr_4 [i_1]) >> (((((/* implicit */int) (signed char)-102)) + (126))))))), (var_11)))) : (((/* implicit */_Bool) min((max((((/* implicit */long long int) (signed char)-31)), (((((arr_4 [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-102)) + (126))))))), (var_11))));
                            }
                        } 
                    } 
                }
                arr_23 [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (762038964546725570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47118)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-27445))))) : (((arr_13 [i_1 + 1] [i_0]) - (((/* implicit */unsigned long long int) var_6)))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */int) 11340085311524907078ULL);
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((-7LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned char)191)))) < (((/* implicit */int) ((unsigned char) arr_26 [i_9] [i_8] [i_1] [i_0])))))))))));
                            var_27 = ((/* implicit */unsigned short) ((long long int) ((arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]) > (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                            arr_30 [i_1] [i_1] [3ULL] [i_9] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65530))))) > ((~(1895365550))))) ? (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_6)))) | (((((/* implicit */_Bool) var_4)) ? (-817406249134358624LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31016))))))) : (arr_3 [(unsigned short)9] [i_9])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned char i_12 = 2; i_12 < 23; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_11])) < (var_12)))), (arr_36 [i_12 - 2] [i_12 - 2] [i_11] [i_12 - 1])))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (22ULL)))));
                }
            } 
        } 
    } 
}
