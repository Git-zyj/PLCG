/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186062
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) (signed char)26)));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)42))) ? (((arr_0 [i_1 + 3]) / (((/* implicit */int) arr_1 [3ULL] [i_1 + 2])))) : (min((((/* implicit */int) arr_1 [i_0] [i_1 - 3])), (arr_0 [i_1 + 3])))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ ((~(((/* implicit */int) (signed char)-25))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)10904), (((/* implicit */unsigned short) (signed char)-44)))))));
                            var_19 -= ((16260715237891973181ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46316))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3] [i_4])))))))) * (((/* implicit */int) arr_8 [i_0]))));
                        }
                        var_21 ^= ((/* implicit */long long int) (-(((unsigned int) arr_1 [i_0] [i_3 + 1]))));
                        var_22 -= (~(((/* implicit */int) ((unsigned char) -239480943))));
                        var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_3 + 1]))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) * (((/* implicit */int) arr_15 [i_5]))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_14 [i_5] [(signed char)12] [i_6] [i_6 - 1] [i_7 + 1])) : (((/* implicit */int) arr_14 [i_6] [5] [i_6] [i_6 - 1] [i_7 + 3]))));
                    var_25 -= ((signed char) (signed char)-43);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 4; i_10 < 16; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5] [i_8 + 3] [i_5] [i_8 + 3] [i_10])) / (((/* implicit */int) (unsigned char)201))))) ? (793810746U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_8 + 3] [i_8] [i_10])) / (((/* implicit */int) (signed char)44))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)41)) << (((16934850467676422114ULL) - (16934850467676422095ULL)))));
                            var_29 -= ((/* implicit */unsigned long long int) ((((2088919323U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 + 3])))));
                            arr_36 [i_5] [8LL] [i_9] [7] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)12014)) ? (((/* implicit */int) arr_34 [i_8 - 1] [i_8 - 2] [i_8 + 2] [i_8 + 2] [i_8 - 1])) : (((/* implicit */int) arr_31 [(_Bool)1] [i_5] [i_8 - 2] [i_8 + 3] [i_8 - 2]))));
                            var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_8 + 2] [i_8 + 2]))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            arr_40 [i_5] [i_8] [i_9] [i_13] [i_13] = ((/* implicit */int) ((-385893525081822232LL) - (((/* implicit */long long int) 2501835132U))));
                            var_31 = ((/* implicit */unsigned short) arr_7 [i_5] [i_8] [i_8]);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_26 [i_5] [i_8 - 2]))));
                        }
                        for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 4) 
                        {
                            arr_45 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_9])) << (((arr_33 [i_5]) - (8762688438551854239ULL))))))));
                            var_33 = ((/* implicit */int) ((signed char) (signed char)76));
                            var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_5] [i_8] [i_9] [(unsigned char)8] [i_9])) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) arr_15 [i_14]))))) ^ (arr_27 [i_14] [i_11] [i_9] [i_5])));
                            var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8 - 2] [i_14 + 1])) ? (arr_21 [i_8 + 2] [i_14 + 1]) : (arr_21 [i_8 + 3] [i_14 + 3])));
                            arr_46 [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 576653791U)) && (((/* implicit */_Bool) arr_34 [i_8 - 1] [i_8 - 1] [i_9] [i_14 - 1] [i_14 + 1]))));
                        }
                        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19191))));
                    }
                    arr_47 [i_9] [15LL] [i_5] = ((/* implicit */unsigned int) arr_20 [i_8 + 3] [i_8 + 3] [(signed char)13] [i_8 + 2]);
                    var_37 = ((/* implicit */unsigned int) ((signed char) arr_14 [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8]));
                    arr_48 [15U] = ((/* implicit */unsigned char) ((unsigned short) arr_22 [i_8 + 1]));
                }
            } 
        } 
    }
    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_38 = ((/* implicit */_Bool) max((var_38), ((!(((arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) && (arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_15])) + (arr_4 [12] [12]))))));
        arr_51 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_15] [i_15] [i_15] [i_15])) - (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4181845517U)), (arr_33 [i_15])))) ? (((/* implicit */int) arr_39 [i_15])) : (((/* implicit */int) (unsigned char)127))))));
        var_40 = ((/* implicit */signed char) ((long long int) ((long long int) 1500935761)));
    }
    var_41 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))));
}
