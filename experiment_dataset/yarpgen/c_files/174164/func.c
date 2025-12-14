/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174164
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_11), (var_6)))))) : ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18053623316352414068ULL))) & (3612021215770376040ULL)))));
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)70)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (14110897088225900875ULL))))))));
        var_19 &= ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned char)231)) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_15))))) : ((~(var_10))))), (((/* implicit */long long int) var_14))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) arr_4 [i_2]);
                                arr_13 [i_0 - 2] [i_0] [(short)3] [i_0 - 2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_13);
                                arr_14 [i_1] [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (min((arr_8 [i_1]), (-242775152196666535LL))))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)189)) >> (((((/* implicit */int) var_4)) >> (((10730864388712680170ULL) - (10730864388712680169ULL)))))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((7677278493920011083LL), (((/* implicit */long long int) arr_12 [(signed char)11] [i_0] [i_0 - 1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_0 + 2] [(short)5] [i_0 + 2] [13ULL] [i_0])), (arr_9 [i_1])))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (10936001167122674437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 242775152196666529LL)), (393120757357137564ULL)))))) ? (min((min((((/* implicit */long long int) var_5)), (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_6] [3] [i_2] [i_5 + 1] [i_6])) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) arr_11 [i_0 + 2] [i_1] [i_2] [0] [i_6]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14))))));
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-28503))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_25 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2705)) + (((/* implicit */int) arr_4 [i_8]))))), (max((((/* implicit */unsigned long long int) arr_30 [i_7] [0LL] [1ULL] [i_8] [i_8] [i_10] [i_7])), (48905341674161977ULL)))))) ? (((((/* implicit */_Bool) var_2)) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2705))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                                var_25 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (signed char)9)) ? (133893781) : (((/* implicit */int) (short)-2616)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        for (short i_12 = 3; i_12 < 12; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_28 [i_12] [8U] [i_12 + 2] [i_7 - 1] [i_7] [i_7 - 1]))) / (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)50)) ? (arr_23 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_8] [i_7 + 1] [i_7 - 1] [i_7 - 1])))))));
                                arr_37 [i_0 - 1] [i_7] [i_8] [i_8] [i_12] [i_12 + 1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_12 [i_0] [i_11 + 2] [i_12] [(_Bool)1] [i_12])) && (((/* implicit */_Bool) 4611686018427387648LL)))), ((!(arr_4 [i_8])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((int) min((6LL), (((/* implicit */long long int) arr_27 [i_0 + 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]))))))));
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((14834722857939175576ULL), (((/* implicit */unsigned long long int) arr_17 [12ULL] [12ULL] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) var_7)) ? (657151041202424646ULL) : (((/* implicit */unsigned long long int) arr_23 [i_7])))) : (((/* implicit */unsigned long long int) arr_32 [i_8 - 1] [i_7 + 1] [i_0 + 1] [i_0 - 2])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))), ((+(9038460880570777260LL))))))));
                }
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                {
                    var_29 &= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) ^ (838125350U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_15])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_15])) ? (((/* implicit */int) arr_44 [i_13])) : (((/* implicit */int) (_Bool)1)))))));
                    arr_47 [i_14] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_43 [i_13] [i_14])))), (min((((/* implicit */unsigned long long int) (signed char)-27)), (14834722857939175572ULL)))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) ((-1026720989) / (((/* implicit */int) (_Bool)1))));
        var_32 = ((/* implicit */long long int) (((~((~(((/* implicit */int) (unsigned char)234)))))) >> (((((/* implicit */int) var_1)) + (19757)))));
    }
}
