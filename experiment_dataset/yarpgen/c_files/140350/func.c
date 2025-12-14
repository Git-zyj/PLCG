/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140350
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
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-11479))))), ((-(var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_18 -= ((/* implicit */short) ((-774097143) + (((/* implicit */int) (short)-11479))));
        var_19 = ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11471)))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_21 *= (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))) ? (((((/* implicit */int) ((var_0) <= (((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)11479)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-11479)) | (((/* implicit */int) (short)11478))))) ? (((((/* implicit */_Bool) (short)31781)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : ((-(var_5))))));
            var_22 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((short) var_7)))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_12 [i_1] [i_3] [i_1] = ((/* implicit */signed char) var_14);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-11489)) ? (((/* implicit */int) (short)-11479)) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_1] [i_1])))) == (var_0)))) < (min((((/* implicit */int) (unsigned char)15)), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)-11479))))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_15 [i_1] [(unsigned char)3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_4]))));
            var_24 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_4])))))));
        }
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) arr_4 [(_Bool)1] [i_5])))) : (((((/* implicit */_Bool) 8943108030969600639LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3))))));
            arr_18 [i_1] = var_8;
            arr_19 [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) -8943108030969600630LL);
            var_26 = ((((((/* implicit */_Bool) -8943108030969600630LL)) ? (270988711U) : (270988711U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))));
        }
        for (int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4023978584U)) || (((((/* implicit */int) var_11)) == (var_0)))));
                    var_28 = ((/* implicit */unsigned long long int) -5270135422528576700LL);
                    var_29 *= ((/* implicit */signed char) ((unsigned char) -8943108030969600639LL));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_1] [i_6] [(signed char)11])) | (((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) (short)16948)) : (((/* implicit */int) (unsigned char)99))));
                    var_31 = ((/* implicit */short) ((unsigned short) arr_13 [i_8]));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 2) 
                    {
                        var_32 -= ((/* implicit */int) ((short) arr_25 [i_1] [i_1] [i_10] [i_9] [i_10 + 1]));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((unsigned long long int) var_9))));
                        arr_33 [i_1] [i_1] [i_6] [i_7] [i_7] [i_9] [i_10] = ((/* implicit */signed char) (((+(((/* implicit */int) var_6)))) + (((/* implicit */int) var_14))));
                        arr_34 [i_10] [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) arr_6 [i_9])) : (((/* implicit */int) var_14))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_11] [i_9] [i_7] [i_1] [i_6] [i_6] [i_1] = arr_36 [i_1] [i_1] [i_1];
                        var_34 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-5270135422528576700LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) & (((unsigned long long int) 4433230883192832ULL))));
                        var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_1] [i_1] [i_7] [i_9] [i_11]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        arr_40 [15LL] [15LL] [i_6] [15LL] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_15))));
                        var_36 = ((/* implicit */short) (signed char)-10);
                    }
                    var_37 = ((/* implicit */unsigned char) ((unsigned short) var_13));
                }
                arr_41 [(_Bool)1] = ((/* implicit */long long int) var_12);
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    arr_45 [i_7] |= ((/* implicit */short) (~((-(-8943108030969600639LL)))));
                    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_42 [i_1] [(signed char)1] [i_7] [i_13] [i_7] [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_42 [(_Bool)1] [i_13] [i_13] [(_Bool)1] [i_1] [i_7]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
            }
            var_39 = ((/* implicit */short) 270988712U);
            var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(var_14))) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_1] [i_1])) : (((((/* implicit */_Bool) (short)29163)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))))));
        }
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_24 [i_1]), (arr_24 [i_1])))) ? (max((min((((/* implicit */unsigned long long int) 270988702U)), (var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)16948))))) - (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1]))))))))));
        var_42 = ((/* implicit */unsigned char) 3117697270535445762LL);
    }
    var_43 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */long long int) var_0)) == (6067172949171200286LL)))), (var_3))))) - (8943108030969600629LL)));
}
