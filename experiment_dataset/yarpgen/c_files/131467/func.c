/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131467
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
    var_13 *= ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1720855559786210238ULL)) ? (((/* implicit */unsigned long long int) max((478970711), (((/* implicit */int) var_9))))) : (16725888513923341371ULL))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_0] [13] [i_1 - 1] [16] [i_2])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_8)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-20))))) ? (((/* implicit */long long int) ((arr_3 [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) : (arr_8 [i_2] [i_2] [(_Bool)1]))) : (arr_8 [i_2] [i_2] [i_2])));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) 9458608555634801233ULL);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    arr_15 [(unsigned short)11] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (2147483647) : (((/* implicit */int) (unsigned short)65535))))) * (arr_9 [i_1])))) ? (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0] [(signed char)11] [i_1] [i_1 - 1] [i_5])) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (3553616415245850877ULL)))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_5])))) : (arr_9 [(signed char)18])))));
                    var_16 = ((unsigned short) arr_5 [i_5] [i_5]);
                    var_17 |= ((/* implicit */unsigned char) var_12);
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) min((((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (var_0))), ((~(((((/* implicit */_Bool) (signed char)90)) ? (281474976702464ULL) : (arr_9 [i_1])))))));
                        arr_19 [12ULL] [i_1 + 1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) -5771773348184594947LL)) ? ((~(arr_2 [i_0]))) : (((/* implicit */int) arr_14 [i_1 + 1])))));
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    arr_23 [i_0] [i_1 + 1] [i_1 + 1] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [20] [i_1 + 1])) : (var_0)))));
                    arr_24 [i_0] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (5971648455560285689LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) && (((/* implicit */_Bool) (signed char)75))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_18 -= ((/* implicit */unsigned int) (unsigned char)101);
                    arr_28 [(unsigned short)16] [i_8] = ((/* implicit */long long int) arr_3 [i_1]);
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    arr_33 [i_9] [i_1 + 1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2838))))) ^ (((var_0) & (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)112))))))));
                    arr_34 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) arr_30 [i_0] [i_1])))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (_Bool)0)))))), (((int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_7)))))));
                }
                var_19 ^= ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) + (max((((-1202391565) + (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned short)5894))))))));
}
