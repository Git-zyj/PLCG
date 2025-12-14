/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139762
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 = ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((-4436120216264762818LL) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_1))) : (arr_2 [i_0] [i_0])));
        var_12 += ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (signed char)44)))))) : (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((-6184448085091361440LL) > (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))))) | (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))) && (((/* implicit */_Bool) 7981092861461479420ULL))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)12975)), ((unsigned short)49568))))));
                    var_16 = (~(((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned char)8] [i_2] [i_3])))))) ? (max((var_9), (((/* implicit */long long int) 1271347174U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65070))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_18 [5LL] [5ULL] [2ULL] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((var_9) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_3]))))) : (((/* implicit */int) (unsigned short)42360)))))));
                                var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) != (max((arr_4 [i_3]), (((/* implicit */unsigned int) (signed char)91))))))), ((~(max((((/* implicit */long long int) arr_12 [i_1] [i_2] [i_2])), (arr_2 [i_1 - 2] [i_1 - 2])))))));
                                arr_19 [i_1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) ((short) arr_5 [i_1] [i_1]))), (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)49)))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_2 [i_1 - 2] [8LL])))))) & (((max((((/* implicit */unsigned int) arr_8 [2] [2] [i_1])), (arr_4 [(_Bool)1]))) >> (((((/* implicit */int) ((signed char) arr_14 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 2]))) - (96))))))))));
        /* LoopSeq 2 */
        for (short i_6 = 2; i_6 < 9; i_6 += 4) /* same iter space */
        {
            arr_24 [i_1 - 2] [i_6] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (18446744073709551615ULL))) << (((/* implicit */int) min(((unsigned short)16411), (((/* implicit */unsigned short) (!((_Bool)1))))))));
            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_12 [i_1 + 1] [i_6 + 2] [i_6 + 2]))))))));
            arr_25 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) min((((min((((/* implicit */long long int) var_8)), (var_3))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6 + 1] [i_6 - 1]))) | (var_7))) - (3881616155144552402ULL))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [i_6 + 1] [(signed char)9] [i_6 + 1])), (arr_4 [i_1 + 1]))))));
            arr_26 [i_1] [i_1 - 1] [i_6 - 1] = ((/* implicit */int) ((max((((/* implicit */long long int) ((int) (_Bool)1))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_23 [i_1] [i_1])), (3452094840U))))))));
        }
        for (short i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
        {
            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)30289)), (10557768144777577207ULL)))) ? (max((((/* implicit */unsigned long long int) (short)-3456)), (18446744073709551608ULL))) : (((((/* implicit */_Bool) ((var_8) >> (((/* implicit */int) (short)3))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
            var_21 = ((/* implicit */unsigned short) (short)-21165);
        }
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) var_6))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_9)) : (15209400468262766072ULL))))))));
}
