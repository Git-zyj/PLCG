/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138924
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
    var_16 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_1), (var_9))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)75)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) ((signed char) (~(((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((unsigned char) min((max((((/* implicit */unsigned short) arr_1 [i_2])), ((unsigned short)33474))), (((/* implicit */unsigned short) arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
                    var_20 ^= ((/* implicit */long long int) ((unsigned long long int) ((long long int) var_15)));
                }
            } 
        } 
    }
    for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
    {
        arr_9 [6ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((4652340856318498108ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44573)))))))));
        arr_10 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3 - 4] [i_3 - 1])) * (((/* implicit */int) arr_0 [i_3 - 4] [i_3 - 1])))))));
    }
    for (short i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        arr_13 [0LL] = max((((long long int) arr_5 [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)114))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))) : (arr_3 [i_4 + 2] [(short)5] [i_4 + 2]))));
        var_21 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_4])))))), (((/* implicit */int) (unsigned char)0))));
        arr_14 [i_4] = ((/* implicit */unsigned short) (-((+((-(((/* implicit */int) arr_1 [12LL]))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_17 [11U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_15 [i_5 + 2])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (10408828147335273641ULL)))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5 + 2])) ? (arr_15 [i_5 + 2]) : (((/* implicit */unsigned int) var_6)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((arr_16 [i_5]) != (65535LL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (arr_15 [i_5 + 1]))))));
        arr_18 [12LL] = ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (arr_15 [i_5 - 1]));
    }
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned short) ((long long int) var_4))))));
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned short)4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1471794615803234474ULL)) ? (2181359964597545866LL) : (arr_16 [16LL])))) ? (((/* implicit */int) arr_27 [(short)5] [i_6] [(short)5] [i_8] [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) -905272034886581699LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)0)))))))));
                                arr_32 [16ULL] [16ULL] [16ULL] [i_6] [(unsigned short)6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [(unsigned char)10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (3563515432554008283LL)))) ? (max((arr_25 [6LL] [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1199876104))))))))));
                                var_25 = ((/* implicit */short) ((signed char) arr_28 [(unsigned char)7] [i_9 + 1] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7]));
                                arr_33 [i_6] [(unsigned short)13] [i_6] [i_6] [10LL] [(_Bool)1] [10] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(5958011034515923572ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3964630901U))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (unsigned char)0))))))));
                                var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_24 [i_6] [i_6])), (arr_27 [i_6] [i_8] [i_7] [i_7] [i_8] [i_8] [i_6])))) ? (((((/* implicit */_Bool) (+(10356090185740998434ULL)))) ? (min((((/* implicit */long long int) arr_23 [7LL] [7LL] [7LL])), (arr_16 [i_7]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_6] [i_8] [i_6] [(signed char)14] [i_8] [22ULL] [i_6]))))))) : (((/* implicit */long long int) (+(max((arr_15 [i_6]), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
                            }
                        } 
                    } 
                } 
                arr_34 [i_6] = ((/* implicit */signed char) arr_16 [(short)9]);
                var_27 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned long long int) arr_16 [i_6])) : (arr_21 [i_7]))));
                var_28 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (signed char)56)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6] [(short)22] [i_6] [i_6]))))) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
