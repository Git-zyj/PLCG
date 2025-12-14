/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101915
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (short)13552)) : (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) (unsigned short)65513)));
        var_14 = ((/* implicit */long long int) ((arr_2 [i_0]) - (arr_2 [i_0])));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(short)7])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [(signed char)5])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) && (((/* implicit */_Bool) ((3439006323U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (signed char)-1);
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (17546407847891810979ULL)))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_1)), (arr_5 [i_1] [i_1])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3345691753459124040ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)94))))), (var_3)))));
        var_18 = ((/* implicit */unsigned short) var_7);
    }
    var_19 = ((/* implicit */signed char) ((unsigned long long int) var_10));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_7 [i_2])))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((unsigned char) arr_7 [i_2])))))) ? ((+(((/* implicit */int) (unsigned short)15883)))) : (((/* implicit */int) (_Bool)1))));
        var_21 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2]))))), (((((/* implicit */_Bool) ((var_9) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)37)), (arr_0 [i_2] [i_2])))))));
        arr_10 [11U] = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) ^ (arr_5 [i_2] [i_2]))));
    }
    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-19928)) ? ((+(-3345591489559712713LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) (_Bool)1))))))));
            var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_11 [i_4]));
            arr_15 [i_3 + 1] [i_4] = ((/* implicit */int) arr_13 [i_4]);
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_3 + 1])));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_5])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-13)))))))));
            var_26 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_3 - 1]))));
        }
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_3] [i_3 + 1]))))), (((unsigned long long int) arr_17 [i_3 + 1] [i_6] [(unsigned short)4]))));
            arr_20 [i_3] [i_6] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) ((unsigned short) arr_13 [i_3]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) : (2080374784U)))) : (max((((/* implicit */long long int) arr_18 [i_3])), (arr_11 [i_3])))))));
            var_28 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1797454340U)))))) < (var_5)));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 22; i_8 += 4) 
                {
                    for (short i_9 = 3; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) (~(min((min((var_10), (((/* implicit */unsigned long long int) arr_26 [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_13 [i_3])))))))));
                            var_30 *= ((/* implicit */int) arr_25 [i_3] [i_3] [i_7] [i_6] [i_9 - 2]);
                            var_31 = 855960998U;
                        }
                    } 
                } 
                arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((short) min(((unsigned char)119), ((unsigned char)48))));
                var_32 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 1) 
            {
                var_33 = ((((((/* implicit */unsigned long long int) arr_17 [i_6] [i_6] [i_3])) >= (4621582334153561421ULL))) ? (((int) 16544246708124863681ULL)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6])) && (((/* implicit */_Bool) (signed char)-4))))));
                arr_32 [i_10] [10] [i_10 + 3] [i_10] = ((/* implicit */unsigned long long int) ((signed char) arr_28 [i_10 - 2] [i_3 + 1]));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 22; i_11 += 1) 
            {
                var_34 ^= ((/* implicit */short) arr_18 [i_11 - 3]);
                var_35 = (~(((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */int) arr_21 [i_3 + 1] [i_6] [i_11] [i_11])) : (((/* implicit */int) arr_26 [i_3 + 1])))));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (arr_24 [i_11 - 2] [i_6] [i_3 - 1] [i_6] [i_3])));
            }
        }
        var_37 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 24)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_22 [i_3] [i_3 - 1] [i_3] [i_3 + 1])))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_33 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))))))) : (((/* implicit */int) ((short) var_11)))));
        arr_36 [i_3] [i_3] = ((/* implicit */long long int) arr_13 [i_3]);
    }
    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_12))));
    var_40 = ((/* implicit */signed char) ((short) var_11));
}
