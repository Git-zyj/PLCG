/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152036
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_3))) == (min((((/* implicit */unsigned long long int) var_11)), (var_6))))))) & ((~(var_4)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >= (((((/* implicit */int) arr_0 [i_0 + 3])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_2] [i_0] = ((/* implicit */int) arr_5 [i_1] [i_2 - 1] [0LL]);
                        var_17 -= ((/* implicit */short) max((20ULL), (((/* implicit */unsigned long long int) var_10))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_8 [10] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [12U] [i_2] [12] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_8 [16ULL] [i_2 - 1] [i_2] [i_2] [i_2]))))))));
                        arr_11 [i_0 - 2] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 - 3] [i_3 + 1])))))));
                        arr_12 [(unsigned short)5] [i_1] [i_2 - 1] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) ^ (-1088124857)));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned char) var_3)))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 3; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_20 &= ((/* implicit */short) var_14);
                            arr_18 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (~((~(var_7)))));
                            var_21 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_1 - 1] [i_0]))) : (var_8))));
                        }
                        for (signed char i_6 = 3; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) % (var_9)))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_2 [i_1]))));
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) arr_17 [i_6] [(short)14] [4ULL] [i_4] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : (427132994U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_0] [i_4] [i_4 + 2])))));
                            var_24 |= ((/* implicit */short) ((8188U) + (arr_7 [(unsigned char)10])));
                        }
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2087423059)) ? (((unsigned long long int) arr_3 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)0))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                            arr_26 [i_0] [i_0] [11ULL] [i_2] [7] [(short)10] = ((/* implicit */signed char) ((arr_19 [i_0 - 3] [i_1 - 2] [i_2 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_7 - 2]) == (var_7)));
                        }
                    }
                    for (int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                    {
                        var_27 -= ((/* implicit */unsigned long long int) ((unsigned int) ((short) 16605220314538672551ULL)));
                        var_28 = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */unsigned int) arr_23 [i_0] [i_0 + 2] [4U] [i_0] [i_2 - 1] [i_8] [7ULL]);
                        arr_29 [i_0] [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((arr_28 [i_0] [i_0] [i_8 - 1] [i_8]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) ? (((/* implicit */int) ((signed char) -903139159))) : (min((((/* implicit */int) min((var_13), (((/* implicit */short) arr_1 [i_0] [i_0]))))), ((~(((/* implicit */int) (short)13581))))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 4) 
                    {
                        var_30 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_2] [i_2 - 1] [i_2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31084))))))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -2554037653719010291LL)) ? (var_10) : (1170012345)))))));
                        var_31 = ((/* implicit */unsigned int) arr_8 [i_0] [i_2 + 1] [i_1] [i_0] [i_0]);
                    }
                    var_32 = arr_4 [i_0 + 3] [i_0 + 1];
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            for (long long int i_11 = 3; i_11 < 16; i_11 += 3) 
            {
                {
                    arr_40 [10LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) ((short) arr_9 [9ULL] [i_0])))))) ? (((((((/* implicit */_Bool) arr_27 [12ULL] [1U] [12ULL] [i_11 + 1] [i_10 + 1])) && (((/* implicit */_Bool) arr_28 [i_0] [(short)0] [16] [(short)0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [(unsigned short)5] [(signed char)12] [i_11])) + (((/* implicit */int) arr_22 [i_10] [i_10] [i_0] [i_10]))))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0]) > (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))))));
                    arr_41 [i_0] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_0 - 1] [i_10 + 1] [i_11 - 1])), (var_7)))) || (((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_0])) && (((/* implicit */_Bool) (signed char)-69)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53997)), (-1663960684)))) || (((/* implicit */_Bool) ((short) arr_1 [i_0] [i_10]))))))));
                    var_33 = ((/* implicit */short) ((524280) - ((-(((/* implicit */int) (signed char)-94))))));
                    var_34 = ((/* implicit */short) var_5);
                    var_35 = ((((/* implicit */_Bool) (short)32736)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)56)), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_0] [i_0] [4LL])) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) var_5)));
                }
            } 
        } 
    }
    for (unsigned int i_12 = 4; i_12 < 11; i_12 += 4) 
    {
        var_36 ^= -771096390;
        var_37 = max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-5256)), (1440957236010451812LL)))), (((((/* implicit */_Bool) ((arr_34 [i_12] [i_12] [i_12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [i_12 + 2])))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_39 [i_12] [i_12] [i_12 + 1]) : (5867283143818576027ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12] [i_12] [i_12] [i_12]))))));
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43))))) | (min(((-(((/* implicit */int) arr_16 [i_12] [6] [6] [i_12])))), (((((/* implicit */_Bool) arr_22 [i_12] [(_Bool)1] [i_12] [14U])) ? (((/* implicit */int) arr_42 [i_12] [(_Bool)1])) : (215512322)))))));
    }
}
