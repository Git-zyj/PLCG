/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144207
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (min((((/* implicit */unsigned int) (_Bool)1)), (var_12)))))) ? ((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_14))))))) : ((+((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) arr_1 [i_0])));
        arr_3 [i_0] &= ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_13 [i_1] [i_3] = (((((~(((/* implicit */int) arr_6 [i_0] [i_0])))) + (2147483647))) >> (((((((/* implicit */int) arr_6 [i_1] [i_0])) + (((/* implicit */int) var_7)))) - (135))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = (-(arr_4 [i_4 + 2] [i_4]));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [21LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_11 [i_3] [i_2] [i_2] [i_3] [i_3])))));
                            arr_18 [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_4 + 2]))));
                            arr_19 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) arr_15 [i_0] [16] [i_2] [i_0] [16] [i_0] [i_2]);
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (arr_4 [i_5] [i_5])));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) (-(arr_12 [(unsigned char)1] [i_6])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_5] [i_6] [i_5] [i_5] [(_Bool)0]))))) : (arr_0 [i_5]));
            arr_24 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_11 [i_5] [i_6] [i_5] [i_6] [i_6])))));
            var_21 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_14 [i_6])), (min((arr_12 [(unsigned short)2] [i_6]), (-16)))))));
        }
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_28 [i_5] [i_5] |= ((/* implicit */unsigned char) ((short) ((unsigned int) var_16)));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_9] = ((/* implicit */_Bool) max((arr_1 [i_5]), (((/* implicit */unsigned short) var_10))));
                        var_22 = ((/* implicit */int) var_7);
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_35 [i_9] [i_9]);
                            arr_37 [i_9] [i_9] [i_9] [i_7] [i_5] = ((/* implicit */int) ((unsigned short) max((((16225718773195058796ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_13))))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (_Bool)1);
                            var_25 = ((/* implicit */int) arr_27 [i_8]);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) >> (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_43 [i_5] [i_5] [i_12] &= ((/* implicit */int) max((arr_26 [i_5]), (((max((((/* implicit */long long int) var_16)), ((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [4LL]))) >= (var_1)))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (var_3)));
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
            {
                arr_48 [i_5] [i_5] [(unsigned char)16] = ((/* implicit */unsigned short) arr_0 [9LL]);
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12786)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3323229238859057608ULL)));
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
            {
                arr_53 [i_14] [17ULL] [i_14] = ((/* implicit */int) min(((unsigned char)149), (((/* implicit */unsigned char) (_Bool)1))));
                var_29 = ((/* implicit */int) var_17);
                var_30 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_15 [(unsigned char)18] [i_14] [(unsigned short)11] [(_Bool)1] [i_5] [i_5] [i_5])))))), (((/* implicit */int) (unsigned char)36))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 4; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        {
                            arr_61 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 4294967278U)) >= (max((max((((/* implicit */long long int) (unsigned char)98)), (4235737066153008797LL))), (min((5140982978524823373LL), (((/* implicit */long long int) (unsigned short)60877))))))));
                            arr_62 [i_16] [i_16] [17ULL] [i_14] [i_16] [(unsigned short)12] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_31 [i_14] [i_7]))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (arr_55 [i_14] [i_14] [i_14] [i_5]) : (var_9))))) : (((/* implicit */int) ((_Bool) arr_45 [(signed char)20] [(signed char)18] [i_14] [i_15 - 2])))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_15 - 3] [i_15 - 3] [i_15 - 1] [i_15 - 1])) + (((/* implicit */int) var_15))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_14] [i_14] [i_7] [i_14] [i_14])) ? (var_9) : (((/* implicit */int) (unsigned char)149))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_14] [i_14]))) : (arr_4 [i_7] [i_14])))) >= (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2538041279U)) && (((/* implicit */_Bool) 14540312291209052441ULL)))))) + (((((/* implicit */_Bool) arr_59 [i_5] [6LL])) ? (var_3) : (((/* implicit */long long int) var_9))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_18 = 2; i_18 < 19; i_18 += 4) 
                    {
                        arr_68 [i_14] [i_14] [i_14] [i_14] [19U] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_18 + 1])) ? (8229366412561912840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_18 - 1])))));
                        var_33 = ((/* implicit */unsigned long long int) var_7);
                        arr_69 [i_14] [i_7] [(signed char)8] [i_17] [6U] = ((/* implicit */unsigned int) (signed char)63);
                        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                    }
                    arr_70 [i_5] [i_14] = ((/* implicit */unsigned short) ((max((arr_9 [i_5] [i_7] [i_14] [i_17]), (((arr_4 [i_17] [i_5]) + (((/* implicit */unsigned int) var_9)))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_35 [i_14] [i_14])) > (((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_17] [i_17]))))))))));
                }
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(-1303052833))))));
                    arr_73 [i_5] [i_14] [i_14] = (i_14 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [i_19] [i_14] [i_14] [i_14] [i_14] [i_5])) >> (((((/* implicit */int) arr_42 [i_5] [i_7] [i_14] [i_5])) + (63)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_65 [i_19] [i_14] [i_14] [i_14] [i_14] [i_5])) + (2147483647))) >> (((((/* implicit */int) arr_42 [i_5] [i_7] [i_14] [i_5])) + (63))))));
                    arr_74 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 11; i_20 += 4) 
    {
        arr_78 [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_20] [i_20])) >= (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))));
        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (unsigned char)106)))));
        var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (arr_33 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
    }
    var_38 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_0))) && (max((var_15), (var_16))))))));
}
