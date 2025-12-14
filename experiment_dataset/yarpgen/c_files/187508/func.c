/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187508
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_10 &= ((/* implicit */_Bool) ((unsigned char) ((var_9) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))))));
        var_11 &= ((/* implicit */signed char) 17151982294772460015ULL);
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 4; i_2 < 17; i_2 += 1) 
        {
            var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2 - 1]))));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1294761778937091601ULL)))))))));
            var_14 ^= ((/* implicit */signed char) (!(arr_2 [i_2 + 4])));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [i_2 - 1]))));
        }
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))) : (((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_5 [i_1]))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-57)) <= (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) * (((/* implicit */int) (unsigned char)47)))))));
        var_17 = ((/* implicit */_Bool) (signed char)10);
    }
    for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_3])), ((-(((/* implicit */int) arr_9 [i_3 + 3] [i_3]))))));
        var_19 = ((/* implicit */unsigned long long int) (signed char)0);
        var_20 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3 + 2] [i_3]);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (max((var_4), (0ULL))))))));
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)123))))) : ((-(arr_1 [i_4])))));
        var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (2312540614835291240ULL)))));
        var_24 = arr_11 [i_4] [i_4];
    }
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_25 = ((/* implicit */_Bool) 1294761778937091600ULL);
            arr_19 [i_6] = ((/* implicit */_Bool) var_0);
            var_26 = ((_Bool) max((((/* implicit */int) ((_Bool) arr_13 [i_5] [i_6]))), (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_6]))))));
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) arr_23 [i_8] [i_7] [i_5]);
                arr_24 [i_7] [i_7] [i_8] = ((/* implicit */signed char) arr_2 [i_8]);
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_7] [i_7 + 1] [i_7])) ? (arr_16 [i_7] [i_7 + 1] [i_7]) : (arr_16 [i_7] [i_7 + 1] [i_7])));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (arr_16 [i_5] [i_7 + 1] [i_8]))))));
                var_30 = ((_Bool) arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
            }
            for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_0))));
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) arr_28 [i_10] [i_9] [i_7] [i_5] [i_5]))));
                    var_33 = ((/* implicit */_Bool) 1294761778937091607ULL);
                    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_9])))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) arr_21 [i_7]))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_7] [i_9] [i_11]))));
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_5] [i_7] [i_7] [i_7])) % (((/* implicit */int) arr_15 [i_11] [i_5]))));
                    var_37 = arr_22 [i_11] [i_9] [i_7] [i_5];
                    var_38 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_6))))));
                }
                for (signed char i_12 = 3; i_12 < 17; i_12 += 4) 
                {
                    arr_37 [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_7 + 1] [i_9]);
                    var_39 = ((/* implicit */unsigned char) ((((arr_22 [i_5] [i_7] [i_9] [i_12]) && (((/* implicit */_Bool) arr_33 [i_7] [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5] [i_7] [i_12] [i_12] [i_5]))) : (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17151982294772460006ULL)))));
                }
            }
            var_40 |= ((/* implicit */signed char) ((((/* implicit */int) var_6)) * (((arr_13 [i_5] [i_7]) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_21 [i_5]))))));
        }
        arr_38 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (signed char)60)))))), (min((min((((/* implicit */unsigned long long int) var_8)), (17151982294772460006ULL))), (min((var_9), (((/* implicit */unsigned long long int) var_0))))))));
        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_5])) >> ((((-(var_4))) - (2499896851689078626ULL)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_3 [i_5]))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) (signed char)-5)), (arr_26 [i_5] [i_5] [i_5])))))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
    {
        arr_43 [i_13] = ((/* implicit */signed char) ((_Bool) arr_27 [i_13] [i_13] [i_13] [i_13]));
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_29 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
    for (signed char i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_26 [i_14] [i_14] [i_14])))) ? (((((/* implicit */int) (signed char)42)) + (((/* implicit */int) (signed char)118)))) : (((/* implicit */int) ((signed char) (unsigned char)10)))))))))));
        var_44 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) arr_4 [i_14] [i_14] [i_14])) : (((/* implicit */int) (signed char)-122))))))) ? ((((+(((/* implicit */int) arr_42 [i_14])))) * (((/* implicit */int) arr_23 [i_14] [i_14] [i_14])))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min(((unsigned char)42), (((/* implicit */unsigned char) (signed char)-25))))))))));
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            for (signed char i_16 = 2; i_16 < 17; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
                {
                    {
                        var_45 = ((/* implicit */signed char) (-((~(((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_14] [i_15] [i_16] [i_17]))))))))));
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) arr_18 [i_16] [i_16] [i_16]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned long long int) arr_31 [i_14] [i_15] [i_16 + 1]);
                            arr_58 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_16 - 1] [i_16] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_16 + 1] [i_16 + 1] [i_16 - 1]))) : (arr_25 [i_17] [i_17] [i_16 + 1] [i_16 - 2])));
                            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13432333848778182482ULL)) && (((/* implicit */_Bool) arr_16 [i_14] [i_16] [i_16 + 1])))))));
                            var_49 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)213)) > (((/* implicit */int) arr_17 [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_16 - 2]))) : (arr_41 [i_16 + 1] [i_16 - 2])));
                            var_50 = ((/* implicit */unsigned char) ((signed char) ((1294761778937091601ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))))));
                        }
                        for (signed char i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
                        {
                            arr_62 [i_14] = ((/* implicit */unsigned long long int) var_5);
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)66)) ^ (((/* implicit */int) arr_34 [i_19] [i_17] [i_16] [i_14])))))))) > (((arr_46 [i_14]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_14] [i_15] [i_17] [i_19]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1294761778937091603ULL)) && (((/* implicit */_Bool) var_6)))))))));
                        }
                        var_52 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_18 [i_16 - 2] [i_16 - 1] [i_16 - 2])) ? (((/* implicit */int) arr_57 [i_16 - 2] [i_16 - 1] [i_16 - 2])) : (((/* implicit */int) arr_55 [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16 + 1] [i_16 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_53 = ((/* implicit */unsigned long long int) var_5);
    var_54 = ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)-65))))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (var_7)))));
}
