/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118461
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 1])) && (((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 3]))))));
                var_14 = ((/* implicit */unsigned int) ((((_Bool) ((unsigned int) 31))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 48))))), (var_13)))) : (((/* implicit */int) min((arr_3 [i_1 - 3] [i_1 + 1]), (var_8))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)75)) + (((/* implicit */int) (!(((/* implicit */_Bool) min((1141672170U), (((/* implicit */unsigned int) 48))))))))));
                /* LoopSeq 4 */
                for (signed char i_4 = 4; i_4 < 22; i_4 += 3) 
                {
                    arr_12 [i_2 - 1] [i_4] [i_4] = max((((((/* implicit */_Bool) min((6), (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)66)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (short)-25580)))))), (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)176)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1381625911))))))));
                    var_16 = ((/* implicit */_Bool) (unsigned char)203);
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (9025132630686525281ULL) : (((((/* implicit */_Bool) -1536097994)) ? (((((/* implicit */_Bool) (short)25579)) ? (9421611443023026312ULL) : (((/* implicit */unsigned long long int) 1904532277U)))) : (((unsigned long long int) arr_10 [i_2] [i_2] [i_3])))))))));
                }
                for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    arr_15 [i_2 + 1] [i_3] [i_5 + 1] = ((/* implicit */short) min((1639654415U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)103))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (short)-26749)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_5])) || (((/* implicit */_Bool) 2131256734U))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (signed char)1)), (var_2))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (1904532283U))))) : (((/* implicit */unsigned int) min(((-2147483647 - 1)), (6)))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 1])) ? (809693698U) : (max((((/* implicit */unsigned int) var_8)), (168170315U)))))) ? (((((/* implicit */int) (_Bool)1)) >> (((18446744073709551615ULL) - (18446744073709551608ULL))))) : (min(((~(((/* implicit */int) arr_16 [i_6] [i_5] [i_2])))), (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_16 [i_2] [i_5 - 1] [i_7])))))))));
                                arr_20 [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)62), ((unsigned char)121))))) < (((((/* implicit */_Bool) arr_11 [i_7] [(signed char)6] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))) : (8549928714494069444ULL)))))), (((((_Bool) 4126796985U)) ? (((/* implicit */int) (signed char)-84)) : (((((/* implicit */_Bool) (short)-18309)) ? (((/* implicit */int) (short)-29726)) : (((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_1))));
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_21 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) 180837675U)) : (arr_8 [i_3])))));
                        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 180837661U)) && (((/* implicit */_Bool) 180837661U))));
                        arr_27 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (447943470) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1168551200))))) : (((((/* implicit */_Bool) 21757833U)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_9] [i_2])) : (((/* implicit */int) (signed char)-101))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 1; i_10 < 23; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned char)176)))));
                            var_24 = (~(((/* implicit */int) ((short) 3091762403U))));
                            arr_30 [i_2 + 1] [i_3] [i_8] [i_8] [i_10] &= (~(((/* implicit */int) arr_28 [i_2] [i_2 - 2] [i_9] [i_9] [i_9] [i_10 + 1])));
                            var_25 = ((/* implicit */signed char) ((_Bool) -122798928));
                            var_26 = ((/* implicit */int) ((unsigned short) (~(arr_19 [i_9] [i_10]))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 2) 
                        {
                            arr_33 [i_11] [i_9] [i_8] [i_9] [i_2 - 1] = ((/* implicit */unsigned long long int) ((3814232948U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))));
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)218)))) == (((/* implicit */int) var_6))));
                            var_28 = ((/* implicit */unsigned short) ((arr_7 [i_2 - 1]) % (((/* implicit */int) (short)8333))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (short)-23753)) : (((/* implicit */int) var_6)))))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */int) max((45477250U), ((-(((unsigned int) 605565630))))));
                        var_31 = ((((/* implicit */int) (short)12506)) / ((~(min((267542095), (((/* implicit */int) (short)-30627)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                        {
                            {
                                arr_41 [21U] [i_3] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) var_9));
                                var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)203)), ((~(((((/* implicit */_Bool) 3760774752355233086LL)) ? (3343844625U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))))));
                                var_33 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2]))) * (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-58))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_13]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_14] [(signed char)16] [i_8] [i_3] [i_2])) ? (((/* implicit */int) (unsigned short)39798)) : (((/* implicit */int) (unsigned char)24)))))))));
                                var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-113)), (var_13)))) ? (((/* implicit */int) ((((/* implicit */int) (short)15958)) <= (((/* implicit */int) arr_17 [i_2 - 3] [i_3] [i_8] [i_13] [i_14]))))) : (((((((/* implicit */int) arr_26 [i_2 - 3] [i_3] [i_13] [i_13])) + (2147483647))) << (((4249490057U) - (4249490057U))))))), (((/* implicit */int) ((((/* implicit */int) (short)-10070)) != (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)51)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            {
                                arr_49 [i_2] [i_3] [i_15] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_2 - 1]));
                                var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_34 [i_2] [i_2 - 1] [i_2 - 3] [i_2])) ? (2147483647) : (((/* implicit */int) var_1)))) > ((~(((/* implicit */int) (signed char)-106))))));
                            }
                        } 
                    } 
                    var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) ((((/* implicit */int) arr_35 [i_2] [i_3] [i_3] [i_15] [i_2] [4])) == (((/* implicit */int) var_9))))) : (((/* implicit */int) var_13))));
                }
                arr_50 [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1070960038U)) ? (((/* implicit */int) (short)10059)) : (((/* implicit */int) (unsigned char)38))))) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (7113903236499683817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30627))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((1574271350U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) && ((!(((/* implicit */_Bool) max((var_4), (((/* implicit */short) (unsigned char)225)))))))));
    var_38 = (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)107)) ^ (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)0))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17799)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) var_11)), (344962038U))))));
    var_39 = ((/* implicit */unsigned int) (short)10070);
}
