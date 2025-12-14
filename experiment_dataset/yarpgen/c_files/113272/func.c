/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113272
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (min((((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (max((var_12), (((/* implicit */int) (_Bool)0)))))) : (((int) max((((/* implicit */signed char) (_Bool)0)), (var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] &= ((/* implicit */long long int) ((_Bool) var_2));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [(signed char)5] [i_0] [(signed char)5] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((arr_0 [i_1 - 1] [i_0]) + (4378357997631422621LL)))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_1 [i_1 - 1]));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_10))));
            var_18 = ((/* implicit */int) var_2);
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (621587327) : (((/* implicit */int) var_15)))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                arr_15 [i_2] = ((/* implicit */_Bool) (signed char)84);
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32046)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7872335098755969272LL)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (8301963497797336004ULL))))))));
            }
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                arr_19 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */long long int) var_12);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-124)) || (((/* implicit */_Bool) (signed char)-1))));
                        var_22 = ((/* implicit */int) var_4);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))));
                        arr_28 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((int) var_13));
                        arr_29 [i_2] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned int) var_14));
                        var_23 = ((/* implicit */_Bool) var_3);
                    }
                    arr_30 [i_0] [i_2] [i_2] [i_5] = (!(((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_5] [i_2])));
                    arr_31 [i_2] [i_4] [i_4] [(signed char)5] [i_5] = ((/* implicit */unsigned short) (!(var_2)));
                    var_24 = ((/* implicit */unsigned short) ((long long int) -1LL));
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_34 [(signed char)1] [i_8] = ((/* implicit */_Bool) ((signed char) var_1));
            var_25 = ((((/* implicit */_Bool) var_12)) ? (2147483647) : (((/* implicit */int) (signed char)-85)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) + (2047LL)));
            arr_39 [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_1))));
            var_26 = ((/* implicit */unsigned char) 6905457382885895559LL);
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_42 [i_0] [i_9] [i_9] = ((/* implicit */long long int) (((~(((/* implicit */int) var_11)))) > (((/* implicit */int) ((signed char) arr_25 [i_10] [(signed char)5] [(signed char)5] [i_0] [(signed char)5] [i_10] [(unsigned char)2])))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (((((/* implicit */unsigned long long int) var_12)) % (var_10)))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-67))) ? ((-(((/* implicit */int) (signed char)-97)))) : ((~(var_12)))));
                arr_43 [i_9] = var_6;
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) 1432162621445710942LL))));
            }
        }
    }
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        var_30 = ((/* implicit */signed char) arr_45 [i_11] [i_11]);
        /* LoopSeq 3 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_31 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_5)) : (5645787388465267512LL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : (var_12))), (((((/* implicit */int) (signed char)11)) + (((/* implicit */int) arr_48 [i_11] [6ULL] [i_11]))))));
            var_32 &= ((/* implicit */unsigned long long int) arr_45 [i_11] [0ULL]);
            var_33 = ((/* implicit */long long int) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_44 [i_12] [i_11])))))))));
            arr_49 [i_11] [i_12] = ((int) (-(((/* implicit */int) arr_46 [i_11] [i_11]))));
        }
        for (signed char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
        {
            arr_52 [i_11] [i_13] [i_11] = ((signed char) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_2))));
            var_34 = ((/* implicit */unsigned char) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_13))));
        }
        for (signed char i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))))) ? ((+(2147483647))) : (((/* implicit */int) (_Bool)1))));
            var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_45 [i_11] [i_11]) : (((/* implicit */int) var_15)))))))), (min((((/* implicit */unsigned long long int) (signed char)-127)), (10144780575912215611ULL)))));
        }
        arr_56 [i_11] = ((/* implicit */signed char) var_10);
    }
}
