/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131124
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_12 [i_1] [i_0] = ((/* implicit */short) 9394024387385376267ULL);
                    var_12 ^= ((/* implicit */int) arr_7 [(unsigned char)0] [i_0 - 1] [(unsigned char)0]);
                }
                for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_13 &= ((/* implicit */signed char) max((max((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0] [i_0 - 2]))), (((/* implicit */unsigned long long int) max((min((var_2), (((/* implicit */unsigned int) (short)-10543)))), (max((arr_2 [(unsigned short)4]), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_3 - 1])))))))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (unsigned char)161);
                }
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) /* same iter space */
                {
                    var_14 -= (~((~(min((2373994989786297230ULL), (((/* implicit */unsigned long long int) var_8)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)132)), (4207296678U)))))) ? (((unsigned long long int) max((arr_3 [i_5]), (13804429994696495325ULL)))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                                var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17870283321406128128ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0]))) : (13804429994696495343ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55659))) : (((((/* implicit */_Bool) 4642314079013056290ULL)) ? (4642314079013056281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))))));
                                arr_25 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */short) (+(max((4642314079013056290ULL), (13804429994696495325ULL)))));
                                arr_26 [i_0] [i_1] [i_4 - 1] [i_0] [i_6] [i_1] = (~(((unsigned int) var_5)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_4 - 2] [i_7] [i_4] [i_1] = ((/* implicit */unsigned long long int) var_10);
                        var_17 = ((/* implicit */unsigned short) var_11);
                        var_18 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_4] [i_1]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_34 [i_0] = ((/* implicit */short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 3191851170U)))))))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_4 - 2] [i_1] [i_0])), (((((/* implicit */_Bool) min((arr_19 [i_4] [i_0] [i_4 + 1] [i_8] [i_9]), (((/* implicit */unsigned short) (short)25561))))) ? (((unsigned long long int) var_7)) : ((~(arr_3 [i_4])))))));
                            arr_39 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 13804429994696495334ULL)) ? (((/* implicit */int) (short)20158)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_20 [i_0] [i_4])))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            var_20 ^= ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10272807337498631573ULL)) ? (((/* implicit */int) (unsigned short)31802)) : (((/* implicit */int) (unsigned char)103))))), (6494271576091805331ULL))));
                            arr_43 [i_0] [i_1] [i_1] [i_8] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) min((max(((unsigned short)19822), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4642314079013056281ULL)))))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_8)))), (((((/* implicit */_Bool) (short)24694)) ? (arr_5 [i_0] [i_4 - 2] [i_0]) : (((/* implicit */int) (signed char)96))))))));
                            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_4 - 2] [i_8] [i_0]), (var_3)))) ? (max((arr_7 [i_0] [i_1] [i_0]), (var_1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2)))))), (max((max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_0] [i_0] [i_10 - 2])), (13804429994696495321ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_10)))))));
                        }
                        arr_44 [i_8] [i_0] [i_8] [(signed char)7] [(unsigned char)14] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_4 - 2]))))), (min((min((13804429994696495335ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)31681)))))))));
                        var_22 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_40 [i_0 + 3] [i_4] [i_4] [i_4 + 1] [i_8])) : (arr_21 [i_0] [i_1] [8] [i_4] [i_4 - 1] [i_8]))))), (min((var_4), (((/* implicit */int) (short)26814))))));
                        arr_45 [i_0] [i_8] [i_8] &= ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned int) (short)9754)), (var_2))), (((/* implicit */unsigned int) var_4)))), (((unsigned int) ((arr_18 [i_0] [i_1] [i_1]) ? (var_6) : (((/* implicit */int) var_10)))))));
                    }
                }
                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)26814))))), ((~(((/* implicit */int) (signed char)96))))))), (max(((~(14685552187084675713ULL))), (((/* implicit */unsigned long long int) var_6))))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        arr_52 [i_11] [i_0] [i_11] = ((/* implicit */short) (~(((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (max((var_3), (((/* implicit */unsigned short) (unsigned char)91)))))))));
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-97))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            arr_55 [i_0] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_13] [i_12 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_11] [i_12])) : (arr_3 [i_0 + 3])));
                            arr_56 [i_0] [i_1] [i_0] [i_12] [i_13 + 1] = ((((/* implicit */_Bool) ((int) -1092609294))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) var_5)) ? (-1092609294) : (((/* implicit */int) (unsigned short)29334)))));
                        }
                    }
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((max(((unsigned short)52168), (((/* implicit */unsigned short) (unsigned char)165)))), (((/* implicit */unsigned short) min(((signed char)-4), (var_9))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-4))))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_22 [i_0 - 2] [i_1] [i_1] [i_1] [i_1] [i_11] [i_11]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-55)), (var_2)))))))))));
                    arr_57 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) min((arr_40 [i_0 + 3] [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 3]), (arr_40 [i_0] [i_1] [i_11] [i_0 - 2] [i_0]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned int) var_8)), (var_11))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned short) (_Bool)0))))))), (max((max((var_1), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)22))))))));
    var_27 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? ((+(var_4))) : (((/* implicit */int) ((signed char) var_0)))))), (((((/* implicit */_Bool) (~(4642314079013056279ULL)))) ? (max((var_11), (((/* implicit */unsigned int) 962539292)))) : (min((((/* implicit */unsigned int) var_0)), (var_1)))))));
}
