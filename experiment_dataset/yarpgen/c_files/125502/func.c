/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125502
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
    var_20 = var_10;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_17))));
            var_22 -= ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (unsigned char)255)))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_13))));
                arr_9 [i_0] [i_0] [(signed char)16] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                arr_10 [(signed char)14] [(signed char)4] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2]);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        {
                            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            var_23 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_17 [i_0] [i_1] [i_5])) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_5]))))));
                arr_20 [i_5] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */signed char) ((_Bool) var_16));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */_Bool) var_3);
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_25 = ((/* implicit */_Bool) ((unsigned char) (signed char)-121));
                var_26 ^= ((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_14)));
                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) (unsigned short)35712)) : (((/* implicit */int) arr_5 [i_0] [i_6] [i_0]))));
                var_28 = ((((/* implicit */int) ((signed char) (signed char)98))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [i_7]))))));
                var_29 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-72))))) && (((/* implicit */_Bool) (unsigned short)29823)));
            }
        }
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_11))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((unsigned int) ((var_11) && (((/* implicit */_Bool) (unsigned short)21323))))))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_8 - 1])))) < (((arr_27 [i_8 + 1] [i_8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_33 = ((/* implicit */signed char) arr_32 [i_9]);
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                {
                    var_34 = ((/* implicit */_Bool) (signed char)-1);
                    var_35 = ((/* implicit */_Bool) max((max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)71))))), (arr_37 [i_9] [i_10] [i_9]))), (((/* implicit */signed char) ((arr_39 [i_9] [i_10]) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) % (arr_33 [(_Bool)1] [i_9] [i_11])))))))));
                }
            } 
        } 
        arr_40 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (((_Bool)1) || (((/* implicit */_Bool) var_9)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-18)), (arr_32 [i_9]))))));
    }
    for (signed char i_12 = 2; i_12 < 12; i_12 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_36 += ((/* implicit */_Bool) min((((arr_14 [i_12 + 4] [(unsigned short)0] [i_12 + 3]) ? (((/* implicit */int) min(((unsigned short)45941), (((/* implicit */unsigned short) (signed char)-2))))) : (((/* implicit */int) var_0)))), (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))), (((/* implicit */int) (unsigned short)35704))))));
            arr_47 [i_12] [i_13] = ((/* implicit */signed char) arr_33 [i_12] [i_12] [i_13]);
        }
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (!(((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)89)))))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25066)) ? (((/* implicit */int) arr_46 [i_14 + 1] [i_12])) : (((/* implicit */int) arr_46 [i_14 + 1] [i_12])))))));
                            var_39 ^= ((((unsigned int) arr_6 [i_12 + 1] [i_12 + 1] [i_14 + 1])) > (((((/* implicit */_Bool) (unsigned short)29812)) ? (min((707571406U), (((/* implicit */unsigned int) (signed char)-114)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3050))))))));
                            var_40 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_18)) & (((/* implicit */int) min((var_19), (var_1)))))));
                            arr_60 [i_12] [i_12] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)35714)) ? ((+(((/* implicit */int) (signed char)125)))) : (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)116)))))), (((/* implicit */int) max((((_Bool) var_6)), (((((/* implicit */int) (unsigned short)65529)) <= (((/* implicit */int) var_18)))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_18 = 1; i_18 < 15; i_18 += 2) 
            {
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (!(((/* implicit */_Bool) arr_62 [(unsigned short)4] [i_18 + 1])))))));
                arr_63 [i_12] [i_14] [i_12] = arr_30 [i_12];
                var_42 ^= ((/* implicit */signed char) min((arr_56 [i_12] [i_14 + 1] [i_14 + 1] [(signed char)2]), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_12))) < (((/* implicit */int) (signed char)7)))))));
                arr_64 [i_18 - 1] [i_12] [i_18 - 1] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_33 [(signed char)10] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29835)) - (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) + (arr_33 [i_12] [i_12] [i_18])))));
            }
            arr_65 [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)79))));
        }
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            arr_69 [i_12] = ((/* implicit */_Bool) (signed char)-109);
            var_43 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_58 [i_12] [i_12])) : (((/* implicit */int) (signed char)123)))))))) / (((/* implicit */int) ((signed char) (_Bool)1)))));
        }
        var_44 = ((/* implicit */unsigned short) (signed char)14);
    }
}
