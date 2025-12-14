/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174358
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_17 *= ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 - 1] [i_1 - 1] [i_1]))) || (((/* implicit */_Bool) (+(-715333230733592940LL)))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_1 [i_3]))))))) ? (min((arr_10 [i_3 + 2] [i_3 + 2] [i_0] [i_3 + 2] [i_3 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31929)) != (((/* implicit */int) (unsigned short)48646))))))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (10056318037436541493ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_0] [i_2])))))));
                            arr_15 [i_0] [i_1 + 2] [i_0] [i_2] [i_3 + 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_3 - 1])) : (((((/* implicit */_Bool) 2047U)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)31))))))) ? (((/* implicit */long long int) (-((~(arr_9 [i_1] [i_2] [i_0] [i_4])))))) : (arr_6 [i_1 + 1] [i_2] [i_4])));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1]))) : (arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1])))) || (((/* implicit */_Bool) max((10056318037436541486ULL), (((/* implicit */unsigned long long int) 65535))))))))) != (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1LL)) < (var_10)))), (((((/* implicit */_Bool) (signed char)-113)) ? (arr_10 [i_1] [i_1] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 715333230733592954LL))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) 4740945925320796171ULL);
            /* LoopSeq 2 */
            for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                arr_21 [i_0] [i_5] [i_0] [i_5] = ((/* implicit */signed char) arr_20 [i_0] [i_5] [i_5] [i_6]);
                var_19 = ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -715333230733592940LL)) ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))));
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 1372767)) ? (((/* implicit */unsigned int) -2147314801)) : (989842840U))));
                var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) (unsigned char)26)) ? (679671323876672534LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4096)))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_5] [i_7] [i_8 + 3] [i_9] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_8] [i_0]))))));
                            var_22 = arr_23 [i_0] [i_5] [i_7] [i_8 + 3];
                            var_23 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_7] [i_7] [i_9] [i_5] [i_8]);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -932395027)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_10 [i_8] [i_8] [i_0] [i_8] [i_8 + 2])));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (-1LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)30)))))));
                        }
                    } 
                } 
            }
            arr_31 [i_0] [i_0] = ((/* implicit */signed char) 5616093034300442039ULL);
            arr_32 [i_0] [i_5] = ((/* implicit */int) ((signed char) (unsigned char)225));
        }
        for (int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                for (signed char i_12 = 3; i_12 < 15; i_12 += 3) 
                {
                    {
                        arr_42 [i_0] [i_0] [14U] [i_12] [i_11 + 1] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 252LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_27 [i_10]))))))) > (((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)104)))), ((!(((/* implicit */_Bool) -8617539828864722448LL)))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((long long int) (~(arr_17 [i_0] [i_10] [i_12]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 2; i_15 < 14; i_15 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)25370)), (arr_37 [i_15] [i_15] [i_13] [i_13 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_37 [i_15 + 2] [i_15] [i_13] [i_13 - 1])))) : (((long long int) arr_37 [i_15 + 1] [i_14] [i_14] [i_13 - 1]))));
                            var_28 += ((/* implicit */signed char) (((_Bool)1) || ((_Bool)1)));
                            arr_52 [i_0] [i_10] [i_13 - 1] [i_14] [i_15 - 2] [i_0] = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_13 - 1])), (arr_9 [i_13 - 1] [i_13] [i_0] [i_13]))))));
                        }
                        var_29 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_13 - 1] [i_0] [i_13 - 1])) ? (((unsigned long long int) var_10)) : (arr_16 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 131064U)) ? (arr_43 [i_0] [i_10] [i_10]) : (((/* implicit */int) (_Bool)0))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_27 [i_0])) : (5616093034300442023ULL))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                            arr_56 [i_0] [i_0] [i_13 - 1] [i_14] [i_16] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0));
                        }
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            arr_59 [i_0] [i_10] [i_10] [i_10] [i_10] = max((max((arr_53 [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1] [i_17]), (((long long int) arr_54 [i_10] [i_13] [i_14])))), (((/* implicit */long long int) arr_17 [i_13 - 1] [i_13 - 1] [i_13])));
                            arr_60 [i_0] [i_0] [i_13] [i_10] [i_17] = max((((unsigned long long int) arr_43 [i_0] [i_13 - 1] [i_13 - 1])), (((/* implicit */unsigned long long int) ((arr_4 [i_13 - 1] [i_13] [i_13 - 1]) ? (((/* implicit */int) arr_4 [i_13 - 1] [i_13] [i_13 - 1])) : (arr_43 [i_0] [i_13 - 1] [i_17])))));
                        }
                        for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)162))))));
                            var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_57 [i_13] [i_13] [i_13] [i_13 - 1] [i_14]), (arr_57 [i_0] [i_13] [i_13 - 1] [i_13 - 1] [i_18])))), (arr_37 [i_0] [i_0] [i_0] [i_0])));
                            var_33 = ((/* implicit */signed char) ((unsigned int) 2147483647));
                            arr_63 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 12704843924590457521ULL)))) != (min((((/* implicit */long long int) ((int) var_4))), (((((/* implicit */_Bool) arr_2 [i_14] [i_18])) ? (-715333230733592940LL) : (arr_5 [i_0] [i_0])))))));
                            var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_13] [i_18] [i_14])) ? (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_18] [i_0])) : (((/* implicit */int) (unsigned short)57337))))) : (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)95)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((arr_29 [i_0] [i_10] [i_13] [i_14] [i_13] [i_18]) >> (((((/* implicit */int) (short)7777)) - (7769))))))) : ((~(((6ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned char) 8388592U);
            var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0] [i_0] [i_10] [i_10] [(signed char)14] [i_10]))) + (var_11)));
            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2147483620)) < (36028797018963967ULL))))));
        }
        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned short) arr_33 [i_0])), ((unsigned short)57340)))))) ? (max((min((arr_22 [i_0] [i_0] [i_0]), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-82)))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967289U)), (arr_23 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 4286578698U)))))))));
        arr_64 [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_19 = 3; i_19 < 14; i_19 += 1) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 1; i_21 < 13; i_21 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned long long int) arr_67 [i_19 - 2])), (14485683727818782892ULL))));
                    arr_73 [i_19] [i_20] [i_21] = ((/* implicit */_Bool) (+(min((((arr_23 [i_19] [i_20] [i_20] [i_21]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57337))))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned short) (unsigned char)132)))))))));
                }
            } 
        } 
    } 
}
