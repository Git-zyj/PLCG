/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130706
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
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */int) max((((/* implicit */short) (unsigned char)153)), ((short)13167)))) - (((/* implicit */int) (unsigned char)103))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)103))));
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1] [(signed char)8]) ? (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned char)6])) : (((/* implicit */int) (signed char)104))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)13167)), ((unsigned short)3363))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((var_4) < (((((/* implicit */int) (short)10920)) * (((/* implicit */int) (short)10920))))));
        }
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            var_21 = arr_2 [i_0];
            var_22 = ((/* implicit */short) var_6);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)99))));
                        var_24 = ((/* implicit */short) (+(var_17)));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)194))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2268259710U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_0]))))));
            var_25 = ((/* implicit */long long int) var_4);
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                arr_20 [i_0] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_6] [i_6 + 2] [i_6 + 3] [i_6] [i_6] [i_6]))));
                arr_21 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)3335))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_26 = ((/* implicit */int) 18446744073709551615ULL);
                var_27 = ((/* implicit */short) (-(3876138929U)));
                var_28 = ((/* implicit */short) ((arr_2 [i_0]) / (arr_14 [i_0 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_29 += ((/* implicit */signed char) var_14);
                    arr_27 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)62157)) : (((/* implicit */int) (unsigned short)32015)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8])))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) > (arr_4 [i_0 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_31 |= ((/* implicit */unsigned char) ((long long int) arr_15 [i_0] [i_3] [i_0 + 1] [i_8]));
                        arr_30 [i_0] [i_3] [i_3] [i_8] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)230))));
                    }
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) & (368279091353708075LL)))) ? (2147483647) : (arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])));
                }
                for (signed char i_10 = 1; i_10 < 19; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) (signed char)90)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (var_12)));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_3] [i_3] [i_7] [5ULL] [(short)17] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_0] [i_10] [i_7] [(short)18] [i_3] [i_0])) < ((-(((/* implicit */int) var_0))))));
                        var_34 = (+(((/* implicit */int) arr_16 [i_0 + 1] [i_3] [i_7] [i_7] [i_10 + 1] [i_11])));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_22 [i_0])) : (arr_2 [i_0])));
                        arr_38 [i_0 - 1] [i_3] [i_0] [8LL] [(unsigned short)2] = ((/* implicit */long long int) (~(14653314567490096658ULL)));
                    }
                    var_36 = ((/* implicit */short) (((~(var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7])))));
                    arr_39 [i_0] [i_3] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) (+(1132209817)));
                }
            }
        }
        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    {
                        var_37 = (+((-(((/* implicit */int) (unsigned short)51164)))));
                        /* LoopSeq 4 */
                        for (int i_15 = 1; i_15 < 16; i_15 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (unsigned short)62161))));
                            var_39 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)202))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
                        {
                            arr_55 [i_0] [i_13] [i_13] [i_13 - 1] [i_13] = ((/* implicit */unsigned char) ((arr_31 [i_13 + 1] [i_13 + 1]) != (((/* implicit */int) var_2))));
                            var_40 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)231)) ? (var_17) : (((/* implicit */unsigned long long int) var_11)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)115)) | (((/* implicit */int) (short)2047)))))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_13] [i_14] [i_17] [i_17] = ((/* implicit */int) ((((var_5) - (min((((/* implicit */unsigned int) (unsigned char)39)), (arr_57 [i_14] [i_0]))))) - (((/* implicit */unsigned int) ((((/* implicit */int) max((var_6), (var_6)))) - (((/* implicit */int) ((unsigned char) 2147483647))))))));
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (short)32761))) / ((+(var_12))))))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                        {
                            arr_62 [(short)19] [i_12] [i_0] = ((/* implicit */short) (-(((min((255), (((/* implicit */int) arr_26 [i_12] [i_12] [i_12] [i_12] [i_12] [i_0])))) / (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) arr_12 [i_14] [(signed char)4] [i_0]))))))));
                            var_42 = ((/* implicit */unsigned short) ((short) -8222004233563544713LL));
                            arr_63 [i_0] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) || (((/* implicit */_Bool) 12738975201377104590ULL))))), (-368279091353708093LL))));
                            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)119))))) | (min((576460751229681664LL), (((/* implicit */long long int) var_16))))))) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned short)62159))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */int) (short)-13949)) == (((/* implicit */int) (signed char)-102))));
                        }
                        arr_64 [i_0 + 1] [i_12] [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1500811131)) && (((/* implicit */_Bool) (~(((((/* implicit */int) (short)10627)) << (((((/* implicit */int) (short)10909)) - (10909))))))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (unsigned short)62171)), (max((((/* implicit */int) (_Bool)1)), (-2143375614)))))));
            arr_65 [i_0] [i_0] [i_12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_12] [i_0] [4ULL] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)128)))))))));
            var_46 += ((/* implicit */signed char) var_11);
        }
        arr_66 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) arr_33 [i_0 + 1] [i_0 - 2] [i_0] [i_0])), ((short)-10888))))));
    }
    for (short i_19 = 1; i_19 < 13; i_19 += 4) 
    {
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)28219)) : (2143375613)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-3588598868413522803LL) : (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20088))) : (var_5))))))) : (min(((-(((/* implicit */int) (short)-10910)))), (arr_40 [i_19 + 1] [i_19] [i_19 - 1])))));
        arr_71 [i_19] = ((/* implicit */signed char) ((2800902763U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62148)))));
    }
}
