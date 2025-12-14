/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159778
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
    var_16 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (short)-1)) ? (var_7) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))) ^ (((/* implicit */long long int) var_13))));
    var_17 += ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_8))))), ((unsigned char)255)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (max((2995438737059683755ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32767)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned int) ((unsigned short) var_5));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_8))), (((/* implicit */unsigned int) ((unsigned short) var_14)))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : ((-2147483647 - 1))));
        var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)150))))), (min((((/* implicit */unsigned int) (signed char)-126)), (var_8))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (1555250127U)))) ? (arr_2 [i_0 - 2]) : ((+(var_13)))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_10);
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10197282005118744519ULL))))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1]))));
        var_21 = ((/* implicit */short) max((var_21), ((short)32767)));
        arr_7 [i_1] = ((/* implicit */_Bool) var_8);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) var_14);
            var_23 = ((/* implicit */unsigned int) max((max(((+(9223372036854775807LL))), (((/* implicit */long long int) ((int) (short)32767))))), (((/* implicit */long long int) (+(((var_10) | (((/* implicit */int) var_11)))))))));
            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))))), ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_2]))))))));
            var_25 = ((((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) arr_5 [i_1])) + (60)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1 - 1]), (arr_5 [3LL]))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7))));
        }
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */short) min((min((((long long int) var_8)), (((/* implicit */long long int) (-(1486695881U)))))), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)25474)) >> (((var_7) + (4275870304083986668LL))))) / (((/* implicit */int) min((((/* implicit */short) (signed char)50)), ((short)124)))))))));
            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_11 [(unsigned char)10] [i_1 - 2] [i_1]))))));
            var_28 = ((/* implicit */unsigned short) arr_12 [i_1 + 1] [i_1 + 1] [i_3]);
            var_29 = ((/* implicit */unsigned int) arr_10 [i_1 - 1] [i_1 - 1] [i_3 + 1]);
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (int i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_6 = 4; i_6 < 7; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_29 [i_4] [i_6] [i_4] = ((/* implicit */int) (unsigned short)54702);
                                var_30 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)-89))))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1956346259)))))));
                                arr_30 [i_5] [i_5] [(_Bool)1] [(short)2] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_9)));
                            }
                        } 
                    } 
                } 
                arr_31 [i_4] [i_4] = ((/* implicit */signed char) max((max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) | (arr_20 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-115)), ((short)-20566)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) min((var_2), (var_2)))))))));
                var_31 = ((/* implicit */short) var_14);
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) 6577302243369874456LL))));
                arr_32 [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */unsigned long long int) ((arr_9 [i_4] [i_4] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))), (max((((((/* implicit */_Bool) (short)20565)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_11)))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22107)) == (((/* implicit */int) (short)-20566))))), (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) var_10))))))));
}
