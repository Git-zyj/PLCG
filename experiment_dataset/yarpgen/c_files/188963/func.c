/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188963
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
    var_15 = ((/* implicit */_Bool) (~(var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_16 += ((/* implicit */_Bool) var_10);
        arr_2 [i_0] = ((/* implicit */short) var_7);
        var_17 ^= ((/* implicit */_Bool) var_12);
    }
    for (short i_1 = 4; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_18 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((16283528197224493279ULL), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_4))))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576)))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50681))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), (arr_3 [i_1 - 2])))))));
        arr_5 [i_1] [1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1263))) : (var_4)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [(unsigned short)9])) : (((/* implicit */int) arr_3 [i_1 - 3]))))), ((+(var_10))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)1249)))), (((/* implicit */int) arr_4 [i_1 + 1])))))));
    }
    for (short i_2 = 4; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_12)) + (arr_7 [i_2]))), (((((/* implicit */_Bool) -1639936984035150307LL)) ? (((/* implicit */int) (unsigned short)14827)) : (((/* implicit */int) var_12))))))) ? ((+(((((/* implicit */int) (unsigned short)33133)) >> (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 18446744073709551608ULL)))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) var_8)) ? (var_14) : (var_7))), (max((((/* implicit */unsigned long long int) var_13)), (var_7)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_15 [i_4] [i_3] = ((/* implicit */short) (!(var_5)));
                        arr_16 [i_2 - 4] [(_Bool)1] [(short)4] [(_Bool)1] [(short)4] [i_4] = ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) 1015808U)), (var_10))), (((/* implicit */unsigned long long int) (short)8145)))) != (((/* implicit */unsigned long long int) (~(((unsigned int) var_8)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), ((+(min((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_6))))))))));
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_10))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_24 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31468260U)) ? (((/* implicit */int) (short)27150)) : (((/* implicit */int) (short)-8655))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_9))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (short)8961)))))));
                            var_27 = 31468260U;
                        }
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_30 [0] [i_2] [i_4] [i_3] [i_4] [22LL] [i_4] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))));
                            var_28 = ((/* implicit */short) (+((-(((/* implicit */int) arr_24 [i_6] [21ULL] [i_2 - 3] [i_6] [20U]))))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)24604))))), (((var_6) + (((/* implicit */unsigned long long int) -666217883)))))) << ((((-(((/* implicit */int) (short)-1263)))) - (1258)))));
                        var_30 = ((/* implicit */int) (-(((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))))));
                    }
                    var_31 = ((/* implicit */unsigned int) 455185186415407201ULL);
                    arr_34 [i_2] [i_4] [(short)20] = ((/* implicit */unsigned int) var_10);
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0ULL)))) ? (((/* implicit */int) arr_6 [i_2 + 1])) : ((-(((/* implicit */int) (signed char)109))))))) ? (var_7) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_4))), ((-(var_4))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        arr_38 [9ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 12011114482475651427ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_14)));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            arr_41 [i_11] = (~(((/* implicit */int) arr_28 [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 1])));
            var_33 *= ((/* implicit */unsigned int) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_11] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_11])))));
        }
    }
}
