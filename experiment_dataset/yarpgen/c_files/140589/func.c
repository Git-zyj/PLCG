/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140589
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) var_14);
                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 9223372036854775806LL)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned short)63512))))), (arr_4 [i_0 - 3] [i_0] [i_0 + 3])))) : (arr_0 [i_0])));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_1 [0U]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2072))) & (max(((~(0U))), (max((((/* implicit */unsigned int) (unsigned short)63488)), (4125556670U)))))));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (3345603607U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) > (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_3 [i_2]) : (var_14)))))))));
        var_25 &= ((/* implicit */unsigned short) (+((+(var_18)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) 3345603607U);
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5 - 2] [i_5 + 1])) ? (((/* implicit */int) ((arr_11 [i_3]) == (685813516U)))) : (((/* implicit */int) var_13))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) var_16);
        var_29 = ((/* implicit */unsigned int) min((var_29), ((~((+(var_10)))))));
        var_30 = ((/* implicit */long long int) ((arr_17 [i_3]) >> (((((/* implicit */int) var_3)) - (53353)))));
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32722)) <= (((/* implicit */int) (short)22377))));
        /* LoopSeq 4 */
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                var_31 = var_19;
                var_32 -= 949363710U;
            }
            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */short) (unsigned short)2047);
            /* LoopSeq 4 */
            for (int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                var_33 *= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_8)) ? (11LL) : (((/* implicit */long long int) var_19)))))), (((/* implicit */long long int) ((((int) var_17)) ^ (((arr_26 [i_7] [i_7]) << (((((/* implicit */int) (unsigned short)255)) - (254))))))))));
                var_34 = var_7;
                var_35 -= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (unsigned short)34785)) ? (var_18) : (var_12))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63463))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9] [i_6] [i_7] [i_6])) ? (arr_33 [i_6] [i_6] [i_6] [i_9]) : (((/* implicit */int) (unsigned short)2086)))))));
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_25 [i_6] [i_6]))));
            }
            for (long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_37 &= min(((+(((((/* implicit */_Bool) 2805011108U)) ? (arr_24 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) var_15)))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)30750))))))));
                            var_38 = ((/* implicit */short) ((3140131990U) / (var_19)));
                            arr_43 [i_6] [i_12] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) max((var_39), (var_14)));
                            var_40 = (i_6 % 2 == 0) ? (((((/* implicit */_Bool) (+(arr_26 [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((arr_26 [i_6] [i_6]) + (arr_26 [i_6] [i_6])))) : (((unsigned int) (short)13039)))) : (((((/* implicit */_Bool) (+(arr_26 [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((arr_26 [i_6] [i_6]) - (arr_26 [i_6] [i_6])))) : (((unsigned int) (short)13039))));
                            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)620))) + (arr_24 [i_6] [i_6] [i_6])))) + ((+(-9223372036854775806LL)))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) arr_23 [i_6] [i_6]);
            }
            for (long long int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
            {
                var_43 = ((long long int) min((((/* implicit */unsigned int) max((arr_28 [i_6] [i_6] [i_6]), (arr_28 [i_7] [i_7] [i_7])))), (((((/* implicit */_Bool) 889439170)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (short i_16 = 4; i_16 < 17; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        {
                            var_44 &= ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9953)))))));
                            var_45 = ((/* implicit */short) ((long long int) -889439171));
                            var_46 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22172)) | (((/* implicit */int) var_13))))) <= (((unsigned int) (unsigned short)61639)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    var_47 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (arr_45 [i_6] [i_6] [i_6]))))) : ((+(-1286696388631827909LL))));
                    var_48 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_6] [i_7] [i_18] [i_19] [i_19] [i_6] [i_7]))));
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == ((-(arr_21 [i_7]))))))));
                    var_50 = ((/* implicit */unsigned short) var_16);
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        {
                            var_51 = ((/* implicit */long long int) var_1);
                            arr_66 [i_6] [i_18] [i_18] [i_21] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_6] [i_7] [i_7] [i_20] [i_20]))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) ((((/* implicit */_Bool) (~(889439189)))) ? (9223372036854775806LL) : (((((/* implicit */_Bool) arr_20 [i_18] [i_18])) ? (-9223372036854775806LL) : (((/* implicit */long long int) 3533247429U)))))))));
                var_53 = ((/* implicit */unsigned int) var_0);
                var_54 -= arr_27 [i_18];
            }
        }
        for (short i_22 = 3; i_22 < 15; i_22 += 4) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_57 [i_22] [i_22 - 3] [i_22 + 3] [i_22 + 2] [i_22 + 3] [i_22 - 1] [i_22 + 3])) != (((/* implicit */int) arr_57 [i_6] [i_6] [i_6] [i_22 - 1] [i_6] [i_22 - 2] [i_6]))))) <= (((/* implicit */int) ((889439195) != (((/* implicit */int) (unsigned short)63463)))))));
            var_56 = ((/* implicit */unsigned short) var_1);
        }
        for (short i_23 = 3; i_23 < 15; i_23 += 4) /* same iter space */
        {
            var_57 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)2072))))), (((((/* implicit */_Bool) 8493524628222931458LL)) ? (-3933641777480758581LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) || (((/* implicit */_Bool) max((((int) var_17)), (((/* implicit */int) ((((/* implicit */_Bool) 889439170)) || (((/* implicit */_Bool) (unsigned short)45983))))))))));
            var_58 = ((/* implicit */unsigned short) (~((((-(arr_37 [i_6] [i_23 - 1] [i_6] [i_6]))) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_30 [i_6] [i_6] [i_6] [i_6]))))))));
        }
        for (short i_24 = 3; i_24 < 15; i_24 += 4) /* same iter space */
        {
            var_59 = ((/* implicit */long long int) -1616700670);
            var_60 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */long long int) 2698713340U))))) ? (((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */unsigned int) arr_59 [i_6] [i_6] [i_6] [i_6])))) : (761719867U)))) ? ((((((+(arr_40 [0] [i_6] [i_6] [i_6] [i_24 + 1] [i_24 + 1]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_2)) ? (arr_44 [i_6] [i_6] [i_24 - 1] [i_24 - 1] [i_24 - 3]) : (((/* implicit */unsigned int) arr_58 [i_6] [i_24 + 1] [i_6] [i_6])))) - (181651999U))))) : (((/* implicit */long long int) (+(arr_49 [i_24 - 1] [4U] [i_24]))))));
        }
        var_61 &= ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)19552)) ? (5486129508029258704LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3470686473U)) ? (((/* implicit */int) (short)15040)) : (((/* implicit */int) arr_52 [i_6] [i_6]))))))), (((/* implicit */long long int) (short)-20825))));
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_35 [(short)8])) ? (4125556684U) : (((/* implicit */unsigned int) var_5)))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))))));
    }
    var_63 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) var_3)), (4125556684U))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(var_18))))))));
}
