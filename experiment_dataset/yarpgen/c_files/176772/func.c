/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176772
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
    var_19 = ((/* implicit */short) max((min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_17)))))), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))));
    var_20 = ((/* implicit */unsigned char) min(((unsigned short)4422), ((unsigned short)14015)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (signed char)-10)))));
        var_21 = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0 + 1] [i_0] [i_0] = var_5;
            var_22 = ((/* implicit */unsigned int) var_6);
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((max((var_14), (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) arr_9 [(unsigned char)5] [i_1] [i_2 + 1])))), (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
                var_23 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [0U])) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) (unsigned char)49))))))), (((max((((/* implicit */unsigned int) (short)10111)), (2341384728U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)8)) ^ (((/* implicit */int) (short)-20089)))));
            }
            for (short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                var_24 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 2341384727U)) : (0ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((max((var_15), (arr_0 [i_3 + 1]))) >= (((/* implicit */unsigned long long int) min((arr_13 [i_0] [(signed char)13] [i_3]), (((/* implicit */int) (_Bool)1))))))))));
                var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((arr_8 [i_0 - 1] [(short)13]), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_3]) | (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((arr_10 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0])))))))));
                arr_15 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_4]))));
                            arr_22 [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)53313)) + (((/* implicit */int) (unsigned char)22)))) - (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0]))))) == (arr_14 [i_0] [i_0] [i_4] [i_5])));
                            var_27 = ((/* implicit */long long int) ((unsigned char) arr_9 [i_4] [i_4] [i_4]));
                        }
                    } 
                } 
            }
            arr_23 [i_0] = ((/* implicit */signed char) (unsigned char)74);
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((var_1), (((/* implicit */int) (unsigned char)182)))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) arr_26 [i_0] [i_0]);
            var_30 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), ((short)255))))) + (-947511782783140528LL)))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    {
                        arr_33 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0] [i_6] [i_7] [i_0] [i_8]))))) ? (((int) arr_26 [i_0] [i_0])) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)112))))))) != (min((((/* implicit */unsigned int) var_13)), (max((((/* implicit */unsigned int) arr_26 [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_0])))))));
                        arr_34 [i_8] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0 - 1]);
                        arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_11))))) - ((-(arr_32 [i_0 - 1] [i_7] [i_0 - 1] [i_7] [i_7 - 2] [i_7 + 1])))));
                    }
                } 
            } 
            arr_36 [i_0] = ((/* implicit */short) var_16);
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            var_31 += ((/* implicit */short) var_5);
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0])) | ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((((/* implicit */_Bool) 1644780418U)) ? (arr_29 [i_0] [i_0] [i_0] [i_0]) : (arr_29 [i_0] [(unsigned char)5] [i_9 + 3] [(unsigned char)5]))) - (1760564099)))));
            arr_40 [i_0] = ((/* implicit */short) ((int) var_0));
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((unsigned long long int) arr_31 [i_9] [i_9 - 1] [i_0 + 1] [i_0 + 1])))));
        }
    }
    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            for (signed char i_12 = 3; i_12 < 16; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        arr_52 [i_13] [i_11] [i_11] [i_10] = ((/* implicit */short) arr_14 [i_10] [i_10] [i_11] [i_13]);
                        arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_11])) ? (((/* implicit */int) (unsigned short)35748)) : (((/* implicit */int) (_Bool)1))))))), ((_Bool)1)));
                        arr_54 [i_10] [i_11] [i_10 + 1] [i_10] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) min(((short)21309), (((/* implicit */short) var_5))))))));
                    }
                } 
            } 
        } 
        arr_55 [i_10] [i_10 - 1] = ((/* implicit */unsigned short) min(((~((+(((/* implicit */int) var_10)))))), (((/* implicit */int) ((unsigned char) ((int) var_13))))));
    }
}
