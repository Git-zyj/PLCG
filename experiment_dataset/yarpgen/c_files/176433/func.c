/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176433
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (var_0))))));
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (var_9) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) var_1))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (((+(max((arr_0 [9ULL]), (((/* implicit */long long int) arr_2 [i_0])))))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)7910)) : (((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) (_Bool)1)))))));
        var_18 = ((unsigned int) 4074241794041067115LL);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (-4074241794041067123LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) (signed char)-29);
        /* LoopSeq 4 */
        for (long long int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            arr_13 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_11 [i_2 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (arr_6 [i_1]))))))) ? (max((arr_12 [i_2 - 2] [i_2]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1]))) : (arr_11 [i_1])))))));
            arr_14 [i_1] = ((/* implicit */unsigned int) min((arr_6 [i_1]), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1])) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (arr_11 [i_1])))))))));
            var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 3610564174U)), (4074241794041067130LL)));
            arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (max((arr_12 [i_2 + 2] [i_2]), (((/* implicit */unsigned long long int) -314652576))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((long long int) (unsigned short)19)), (((/* implicit */long long int) 507696785U)))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4]))) / (arr_11 [i_4])));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) (short)10999)) : (((/* implicit */int) arr_22 [i_1] [i_3] [i_4] [i_1]))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_1])))))));
                            arr_27 [i_6] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_3] [i_3]);
                            arr_28 [i_1] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (short)-16616))));
                        }
                        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1201)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16614)))));
                            var_25 = ((/* implicit */short) ((long long int) ((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 + 1]) / (arr_29 [i_5] [i_5] [i_5] [i_5] [i_7] [i_1] [i_7 + 1]))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((4179558880940659492ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (4074241794041067127LL) : (((/* implicit */long long int) (((_Bool)1) ? (507696786U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)63)) / (((/* implicit */int) (_Bool)1))))))))));
                        }
                        arr_31 [i_1] [i_1] [i_1] [i_4] [(signed char)4] = var_10;
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_3] [i_1] [i_3])))))));
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_34 [i_1] [i_1] = ((/* implicit */unsigned int) min(((unsigned short)65526), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3560688826635644424LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-31875))) > (-4074241794041067118LL))))) : (max((arr_12 [i_1] [i_8]), (((/* implicit */unsigned long long int) 492525714)))))))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_18 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]))));
            var_29 = ((/* implicit */unsigned long long int) arr_3 [i_9 - 1] [i_1]);
        }
        arr_38 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3091771885199806656ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16625))) : (-4074241794041067123LL))), (((((((/* implicit */long long int) ((/* implicit */int) (short)-1))) != (-4074241794041067119LL))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_6) : (4074241794041067139LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        var_30 = ((/* implicit */long long int) 3091771885199806682ULL);
    }
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
    {
        arr_42 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10]))) & (var_10))))) ? (((/* implicit */int) arr_35 [i_10] [i_10] [i_10])) : (((/* implicit */int) (short)-28))));
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) (signed char)24))))))));
        var_31 ^= ((/* implicit */unsigned char) ((arr_6 [8U]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [(unsigned char)0] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_22 [(signed char)2] [i_10] [i_10] [(signed char)2])) : (((/* implicit */int) ((_Bool) arr_6 [(signed char)8])))))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    arr_49 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [(unsigned short)10] [i_11] [i_11] [i_12] [(unsigned short)10] [i_12])) ? (((/* implicit */int) arr_35 [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_35 [i_12] [i_10] [i_10])))) & (((/* implicit */int) ((((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) > (((/* implicit */int) arr_35 [i_10] [i_11] [i_11])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((((var_11) ? (((/* implicit */long long int) arr_6 [i_12])) : (var_6))), (((/* implicit */long long int) max((min(((short)16615), (((/* implicit */short) var_1)))), (((/* implicit */short) max((((/* implicit */unsigned char) var_4)), (arr_7 [i_12] [i_10])))))))));
                        var_33 = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_12]));
                        var_34 = ((/* implicit */signed char) ((arr_39 [i_12]) / (arr_39 [i_11])));
                        arr_53 [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) max((arr_19 [i_12] [i_11] [i_12] [i_12]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_24 [i_10] [i_12] [i_12] [i_13] [(unsigned short)7] [i_13])))))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        arr_57 [i_12] [i_12] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_12] [i_11] [i_12] [i_12] [i_14])))))));
                        var_35 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_10] [i_11] [i_12] [i_14])) ? (((/* implicit */int) arr_44 [i_14] [i_12] [i_11])) : (((/* implicit */int) arr_3 [i_10] [i_10])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_26 [i_12] [i_12] [i_11] [i_12] [i_14])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_10] [i_14])) | (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_41 [i_10] [i_10])) ? (arr_39 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12] [i_11] [i_11] [i_12] [i_14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))))));
                        arr_58 [8ULL] [i_12] [i_11] = ((/* implicit */long long int) ((unsigned int) min(((short)16608), ((short)-21))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                    {
                        var_36 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_10] [i_10] [8ULL])) & (((/* implicit */int) arr_1 [i_10]))))), (var_13)));
                        var_37 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_10] [i_11] [i_11] [i_12] [(unsigned char)2]))));
                    }
                }
            } 
        } 
        arr_61 [9LL] [i_10] = ((/* implicit */unsigned long long int) arr_23 [(unsigned char)4] [6]);
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        arr_64 [i_16] [i_16] = ((/* implicit */long long int) (~(max(((~(((/* implicit */int) arr_10 [i_16])))), (((((/* implicit */_Bool) arr_17 [i_16])) ? (var_3) : (((/* implicit */int) var_12))))))));
        var_38 = ((/* implicit */int) 4074241794041067132LL);
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_16] [i_16])) & (((/* implicit */int) arr_44 [i_16] [i_16] [i_16]))))) ? (((unsigned int) 1875452462U)) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43829), (((/* implicit */unsigned short) (_Bool)1))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_16] [i_16])))) : (arr_33 [i_16] [i_16] [i_16])));
    }
}
