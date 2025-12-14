/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112728
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_17))))) <= (17881852259315645350ULL)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) (short)-4628);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] = ((int) (~(((var_1) * (((/* implicit */unsigned long long int) 2088559509))))));
                        var_21 = ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_13))))))));
                    }
                } 
            } 
            arr_11 [i_1] [13U] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */long long int) var_15)), (max((arr_14 [i_0] [(signed char)6] [i_5]), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))))));
                arr_18 [i_4] = var_12;
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_15)))) & (((/* implicit */int) min(((unsigned char)254), (((/* implicit */unsigned char) (signed char)84)))))));
                    var_23 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19284)) ? (arr_4 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))), (min((max((var_18), (arr_21 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned short) (short)-2837))))));
                    var_24 = ((/* implicit */int) (signed char)-71);
                }
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)-4628))));
                arr_23 [i_0] [i_0] [i_0] &= ((min((((/* implicit */unsigned long long int) ((65408U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0])))))), (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) -1345915013)))))) << (((min((((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_4] [i_5]), (((/* implicit */long long int) (signed char)-39))))), ((-(arr_4 [i_4]))))) - (2476083166818678645ULL))));
            }
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_28 [5U] [i_7] [i_7] [i_7] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_0] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_8 [i_7] [i_7] [i_7] [i_7]))));
                var_27 = ((/* implicit */long long int) ((unsigned short) arr_2 [i_0] [i_0]));
                arr_29 [2U] = ((/* implicit */unsigned int) min((((unsigned short) max((((/* implicit */unsigned short) (unsigned char)224)), (arr_9 [i_0] [i_0] [i_0] [i_0])))), (max((((/* implicit */unsigned short) (short)-10773)), (arr_20 [i_7] [i_7] [i_4] [i_4] [i_0] [i_0])))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_28 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((3670016U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) && ((!(((/* implicit */_Bool) var_2)))))) ? ((-(((/* implicit */int) arr_19 [i_0] [i_4] [i_8] [i_4] [i_0])))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (max((((/* implicit */int) (short)-6857)), (2111411467)))))) % (((/* implicit */int) max(((unsigned short)4275), (((/* implicit */unsigned short) max((var_13), (((/* implicit */short) var_3))))))))));
                    var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) : (var_10)))));
                    var_31 *= ((/* implicit */signed char) (-(((long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_9])) ? (((/* implicit */int) var_17)) : (var_14))))));
                }
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    arr_37 [i_10] [i_8] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (signed char)-37));
                    arr_38 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned short) (signed char)54)), (var_9))));
                    var_32 = ((/* implicit */unsigned short) 3624038693U);
                    arr_39 [i_10] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_19)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11350)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (1591335167981355086ULL)))))))));
                }
            }
            arr_40 [14ULL] [14ULL] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned long long int) arr_14 [(short)6] [i_0] [i_4])) : (4224130454103591464ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (short)30743))))))))));
            var_33 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)34992))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)15)), (var_14)))) : (1144533608U))))));
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (signed char)12))))) ? ((-(((((/* implicit */_Bool) 15328526494003511183ULL)) ? (8308832572662656076ULL) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)-25178)))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)35604)))) + (35609))) - (4))))))));
        var_35 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)65));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_36 = arr_26 [i_12] [i_12] [i_12];
        arr_47 [i_12] = ((/* implicit */long long int) max((((/* implicit */int) var_8)), ((+(((((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_42 [(unsigned short)7] [i_12])) : (((/* implicit */int) var_3))))))));
    }
    var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) var_12)))), (var_14)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) 13813417810869775035ULL))) <= ((~(((/* implicit */int) var_9)))))))));
}
