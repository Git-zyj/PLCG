/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176422
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) 2685062008273314632LL);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22436)) ? (8749469421271874089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3724))) : (9035276156045063728LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44451)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)30)))))));
        arr_5 [i_0 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)3720)), (max((((/* implicit */unsigned int) (unsigned short)61815)), (1582833310U)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_13 [10ULL] [i_1] [i_2 - 2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) min((min((-1907406578), (((/* implicit */int) (unsigned short)59445)))), (-1507122436)))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11880))) : (-8270281281741067497LL)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)13642)), (((((/* implicit */_Bool) 15092525589023014969ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))));
                        arr_19 [i_3] [i_2] [i_3] = ((/* implicit */short) (_Bool)1);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_4] [(signed char)0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (short)-28868)) : (((/* implicit */int) (unsigned short)63))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)16785)) : (1583373328))) : (((/* implicit */int) (signed char)-1))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-46)) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)46))));
                            arr_26 [i_0] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29846)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)54122))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) (unsigned short)51996);
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9035276156045063728LL)) ? (((/* implicit */int) (unsigned short)17396)) : (((/* implicit */int) (signed char)40))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (7133774061054620619LL))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_32 [i_7] [i_7] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) 511);
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (max((((/* implicit */unsigned long long int) (unsigned short)8425)), (10626409947123199885ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_26 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_33 [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)12512)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)15)))))), (((/* implicit */int) max(((unsigned short)12512), (max((((/* implicit */unsigned short) (signed char)-94)), ((unsigned short)42894))))))));
                }
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
    {
        arr_38 [i_8] = ((/* implicit */int) min((((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-25552)), (-832666982)))) : (((((/* implicit */_Bool) (signed char)15)) ? (2150879727U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))))))), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) (signed char)101)), ((unsigned short)15))), ((unsigned short)65535))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((min((832666981), (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 832666982)) ? (((((/* implicit */_Bool) 9035276156045063728LL)) ? (((/* implicit */int) (unsigned short)63933)) : (-1093491403))) : (((/* implicit */int) min(((unsigned short)15), (((/* implicit */unsigned short) (signed char)-1))))))))))));
    }
    for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_42 [i_9] [i_9] = ((/* implicit */short) max(((unsigned short)511), (((/* implicit */unsigned short) (_Bool)1))));
        var_28 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63933)) ? (1) : (((/* implicit */int) (unsigned short)65535))))) : (min((2741150715096110751ULL), (12925278087699083647ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41533))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)74)), (3601783227U)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3351463573543688795ULL)))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)34970))))) ? (min((((/* implicit */unsigned long long int) 3)), (13990918888335297734ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-15)), ((unsigned char)47))))))))));
        var_30 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (511)))), (((((/* implicit */_Bool) (signed char)-63)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1603))))));
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)1845))))) ? (((((/* implicit */_Bool) 507508302)) ? (-226242971647011413LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))))) : (((/* implicit */long long int) min((3), (941166750))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((unsigned char)244), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) max(((unsigned char)120), (((/* implicit */unsigned char) (signed char)-29)))))))) : (var_3)));
    var_32 = ((/* implicit */int) (signed char)107);
}
