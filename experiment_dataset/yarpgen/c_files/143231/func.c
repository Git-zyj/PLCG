/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143231
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) min((((/* implicit */signed char) arr_1 [i_0] [i_0])), (arr_0 [i_0]))));
        var_10 = ((/* implicit */int) var_0);
        var_11 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [(short)1]), (((/* implicit */signed char) arr_2 [16])))))) != (var_1));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((signed char) (unsigned short)62634)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) (-(5310319656219260100LL)));
                        arr_14 [i_0] [i_2] [i_2] = ((/* implicit */int) var_0);
                        var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_2 + 1]))))), (var_8)));
                        var_14 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_9 [i_1 + 1])) % (((/* implicit */int) (_Bool)1)))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [16LL] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) & (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)83)))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 - 1])) <= (max((var_1), (((/* implicit */unsigned long long int) var_4)))))))) < (var_8)));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_1 + 1])) | (((/* implicit */int) arr_0 [i_1 + 1])))))))));
                        arr_22 [i_0] [i_1 - 1] [i_0] = ((signed char) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_2))));
                        arr_23 [i_0] [8] [i_2] = ((/* implicit */short) var_7);
                        var_17 = ((/* implicit */int) var_9);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] = ((/* implicit */unsigned short) arr_15 [(short)2] [(short)2]);
                        arr_27 [i_0] [i_2 - 1] [i_6] = ((/* implicit */signed char) (~(arr_8 [i_1 + 1] [i_1 + 1] [i_2])));
                    }
                    var_18 = ((/* implicit */unsigned short) 3410433359210414253LL);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] = ((/* implicit */signed char) min((((arr_31 [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2909))))), (((/* implicit */long long int) min((arr_30 [i_7]), (arr_30 [i_7]))))));
        arr_33 [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_5))))) || (((((/* implicit */int) var_6)) < (arr_29 [i_7] [i_7]))))) ? (((/* implicit */int) ((unsigned short) arr_31 [i_7]))) : (((/* implicit */int) var_7))));
        arr_34 [i_7] = ((/* implicit */_Bool) (+(((arr_29 [i_7] [i_7]) ^ (((/* implicit */int) var_3))))));
        /* LoopSeq 4 */
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) (signed char)-87)) == (((/* implicit */int) (short)24578))))) / (((((/* implicit */int) (unsigned short)62627)) | (1223679766))))), (((/* implicit */int) var_3)))))));
            var_20 = ((/* implicit */short) arr_36 [i_7] [i_8] [i_8]);
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            var_21 -= ((/* implicit */int) var_9);
            arr_39 [i_7] [(unsigned short)0] = ((/* implicit */unsigned short) var_0);
            arr_40 [i_7] [i_9] = var_4;
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_10] [i_7])) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))) : (arr_29 [i_7] [i_10]))))));
            /* LoopSeq 4 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                arr_47 [i_7] [i_7] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_11] [i_11] [i_10] [i_7]))))) ? (((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_1)))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((short) ((_Bool) var_4)));
                            var_24 *= ((/* implicit */unsigned long long int) ((short) var_2));
                            arr_56 [i_7] [i_10] [i_10] [i_7] [i_13] = ((/* implicit */int) ((arr_38 [i_10]) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)48))))));
                            var_25 = ((/* implicit */long long int) ((arr_42 [i_12 - 1]) * (arr_42 [i_12 + 1])));
                            arr_57 [i_7] [i_7] [i_7] [i_11] [i_12 + 2] [i_13] [i_7] = ((/* implicit */int) ((((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned short)24678)))) && (arr_44 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12 + 2])));
                        }
                    } 
                } 
                var_26 = arr_49 [i_11] [i_11] [13U] [(unsigned char)13];
                /* LoopSeq 3 */
                for (unsigned short i_14 = 2; i_14 < 20; i_14 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), ((_Bool)1)));
                    var_28 = ((/* implicit */short) (signed char)82);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_29 [i_11] [i_15]))) * ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_30 = ((long long int) arr_31 [i_11]);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    arr_65 [i_7] = (+(18014261070528512LL));
                    var_31 = ((long long int) arr_37 [i_7] [i_7] [i_7]);
                    var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_2)))));
                }
            }
            for (unsigned short i_17 = 1; i_17 < 21; i_17 += 4) 
            {
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_7] [(short)3] [i_17 + 1] [i_17 + 1] [i_7])) ? (((/* implicit */int) arr_60 [i_7] [(_Bool)1] [i_17 + 1] [i_17 + 1] [i_7])) : (((/* implicit */int) var_3))));
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)68)))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_72 [i_7] = ((/* implicit */long long int) var_5);
                arr_73 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(var_2)));
            }
            for (short i_19 = 3; i_19 < 20; i_19 += 4) 
            {
                var_35 = ((((/* implicit */int) arr_60 [i_19 - 3] [i_10] [i_19] [i_7] [i_7])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                arr_76 [i_19] [i_19 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2909)) || (((/* implicit */_Bool) (unsigned short)4561))));
                var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_53 [i_7] [i_19 + 2] [9LL] [i_19] [i_7] [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_53 [i_7] [i_19 + 1] [i_7] [i_10] [(_Bool)1] [i_19])) + (62)))));
                var_37 ^= ((/* implicit */signed char) var_8);
                var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
            }
        }
        for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (((((/* implicit */_Bool) (short)-13530)) ? (((var_9) ? (arr_43 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
            var_40 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)80))) / (arr_64 [i_7] [i_7] [i_20] [i_7] [(unsigned char)2]))));
        }
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)86)) * (((/* implicit */int) (short)-4096))));
        /* LoopSeq 1 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) arr_70 [(_Bool)1] [(_Bool)1] [i_21] [i_22]))));
            var_43 = ((/* implicit */_Bool) min((var_43), ((_Bool)1)));
            arr_83 [i_22] = ((/* implicit */int) (+(arr_62 [i_22 - 1] [(signed char)9] [i_22] [11ULL])));
            arr_84 [i_22] [i_22 - 1] [i_22 - 1] = ((/* implicit */signed char) arr_66 [i_22 - 1] [i_22] [i_22 - 1] [12]);
            arr_85 [i_21] [i_22] = ((/* implicit */signed char) ((((_Bool) arr_37 [i_21] [i_22] [i_21])) || (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_35 [(_Bool)1]))))));
        }
    }
    var_44 ^= ((/* implicit */signed char) ((max((var_3), (min(((_Bool)1), ((_Bool)1))))) || (var_6)));
    var_45 *= ((/* implicit */_Bool) (short)-32);
}
