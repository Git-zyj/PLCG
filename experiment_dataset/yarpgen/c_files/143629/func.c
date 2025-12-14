/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143629
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
    var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) ((478279316U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), ((-(((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((long long int) (unsigned char)0);
        var_15 ^= ((/* implicit */short) (unsigned char)1);
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) / (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) (~(arr_1 [i_0] [i_0])))) : (9223372036854775807LL)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) (unsigned char)166);
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(478279316U)))) / (((((/* implicit */_Bool) ((unsigned char) (signed char)-20))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (max((var_9), (((/* implicit */long long int) 478279316U))))))));
                        var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((long long int) (unsigned char)0))) ? (((/* implicit */int) max(((unsigned char)255), ((unsigned char)1)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [2LL] [i_3]))))));
                    }
                    arr_9 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) min((arr_0 [i_2] [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)250))))) == (1098437885952ULL))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        var_20 = ((/* implicit */long long int) var_4);
        var_21 = ((((/* implicit */_Bool) 3833044556U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 281474972516352LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-73592347005488279LL))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned char) max((arr_11 [i_4 + 2]), (((/* implicit */unsigned int) arr_0 [(_Bool)1] [(unsigned char)5]))))))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((((/* implicit */unsigned int) arr_10 [i_4])) * (2437964912U))) << (((/* implicit */int) (!(var_11)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned char)0), (arr_7 [(unsigned char)7]))))))))))));
    }
    for (signed char i_5 = 4; i_5 < 8; i_5 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 + 1])) * (((/* implicit */int) arr_14 [i_5 - 1] [8LL] [i_5 - 4]))))))));
            arr_16 [i_5] [i_5] [i_6] = ((/* implicit */int) 68719476672ULL);
            var_25 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_5] [i_6] [i_6])), (2437964912U)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_5]))))))), (((/* implicit */long long int) ((_Bool) 18446744004990074944ULL)))));
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((((max(((_Bool)1), ((_Bool)0))) ? (((((/* implicit */_Bool) arr_12 [i_5 + 3])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (short)-12465)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0)))))) * (((((/* implicit */_Bool) var_10)) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)18))))))));
            arr_19 [i_5 - 3] [10] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5 - 4] [i_5 - 3] [i_5 - 3]))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_1 [i_5 + 2] [i_5 - 3]))));
            arr_20 [i_7] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 3])) : (((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 3])))));
        }
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_28 [i_10] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_12 [i_5 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_5 - 1])))) : (((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (((/* implicit */long long int) arr_12 [i_5 + 1])) : (9223372036854775807LL)))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_13 [(_Bool)1] [i_5]))));
                        var_29 ^= ((/* implicit */unsigned int) var_11);
                    }
                } 
            } 
            var_30 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_12 [i_5 - 2])), (arr_21 [i_5 + 2] [i_5 + 1] [i_5 - 2]))), (((/* implicit */unsigned long long int) (~(4584604976438274884LL))))));
            var_31 = ((/* implicit */unsigned char) -1442376345);
            var_32 ^= ((/* implicit */unsigned char) (+(((int) ((((/* implicit */_Bool) arr_3 [i_5] [15] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_5]))))));
        }
        for (long long int i_11 = 3; i_11 < 9; i_11 += 4) 
        {
            var_33 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_0)))) ? (((long long int) -73592347005488279LL)) : (((/* implicit */long long int) ((/* implicit */int) ((short) 2792993103U))))))), ((((!(((/* implicit */_Bool) 0LL)))) ? (((/* implicit */unsigned long long int) arr_17 [i_5] [i_5 + 1])) : ((+(var_8)))))));
            arr_32 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_5 - 1] [i_11 - 2])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_5] [i_11 + 2])) < (var_8)))))) << (((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_11] [i_5])) << (((((/* implicit */int) arr_3 [i_5] [i_11] [i_11])) - (174)))))) * (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) 2992152903U)) : (0LL)))))));
        }
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_27 [i_5 - 2] [i_5]))));
        var_35 = ((/* implicit */int) ((((unsigned int) (_Bool)1)) >> (((arr_1 [i_5 + 1] [(signed char)15]) - (170839446U)))));
    }
}
