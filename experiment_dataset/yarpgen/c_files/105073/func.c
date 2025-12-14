/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105073
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
    var_13 = ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))))) || (((/* implicit */_Bool) var_9)));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17838)) || (((/* implicit */_Bool) ((unsigned int) var_12)))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_16 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2 - 2] [i_3] [i_2 + 1]))))) > (((/* implicit */int) max(((short)-15045), ((short)-15045))))));
                        var_17 = ((/* implicit */short) min(((!((!(((/* implicit */_Bool) (short)17845)))))), ((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)2] [i_3]))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (arr_4 [(signed char)24] [i_1] [(unsigned char)16]) : (((/* implicit */unsigned long long int) arr_5 [0U] [i_0] [i_2]))))))));
                        var_18 -= ((/* implicit */int) arr_0 [i_0]);
                    }
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_2 - 1] [i_2 + 1] [i_2 - 1]), (arr_6 [i_0] [i_2 - 2] [i_0] [i_2])))) ? ((+(((/* implicit */int) ((short) (short)15045))))) : ((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [(unsigned short)16])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_20 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15044)))))), (((15002209735113505142ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17838)))))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)32963), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -9223372036854775805LL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17840))) * (1343942185U)))) : (max((((((/* implicit */_Bool) 9223372036854775805LL)) ? (7508223070499450347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 - 2]))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)511)))))))) > (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(unsigned char)14] [i_2])) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4])))))) : (((long long int) var_12))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 8728785799937109887LL)) ? (arr_6 [i_0] [i_0] [i_2] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_2])))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2] [i_2 + 1])))))));
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((7208260129355537454ULL) & (var_12)))) ? ((~(arr_4 [i_2 - 1] [i_2 - 1] [i_1]))) : (((/* implicit */unsigned long long int) -4147980420676175556LL))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_10);
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */short) ((_Bool) (unsigned short)3726));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [(_Bool)1] [(unsigned char)9])), ((-(arr_1 [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) arr_25 [22ULL] [i_7] [i_2 - 1] [i_2] [6] [i_0] [i_7]));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(4988298520311585233LL)));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) 6792742843483515168LL);
                            var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((int) 12470633968235182156ULL)), (((/* implicit */int) arr_15 [i_0]))))), (max((((/* implicit */unsigned long long int) (unsigned char)152)), (max((((/* implicit */unsigned long long int) var_6)), (var_12)))))));
                            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12470633968235182156ULL)) ? (((/* implicit */long long int) 127)) : (-3875036577696660956LL)));
                            var_32 = ((/* implicit */long long int) (-(arr_30 [8] [i_2 - 2] [i_2 - 2] [i_2 - 2] [(unsigned char)23])));
                        }
                        var_33 ^= ((/* implicit */unsigned char) (+((+(arr_1 [i_2])))));
                        var_34 = ((/* implicit */unsigned long long int) arr_22 [(short)23] [i_0] [i_1] [i_1] [i_1] [i_2] [i_7]);
                        var_35 = 7208260129355537460ULL;
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_22 [i_0] [i_11] [9] [(short)2] [i_1] [9] [i_2]))));
                        var_37 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_0] [i_2 - 1] [i_1] [i_1] [i_0])))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0])))))), (((int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1909172331U))))));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15002209735113505159ULL)) ? (3875036577696660956LL) : (8220398574235373654LL))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1221443787U))));
                            var_39 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)192)) & (((/* implicit */int) (_Bool)1))));
                            var_40 *= ((/* implicit */_Bool) arr_31 [i_0]);
                            var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)172))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_27 [i_0] [i_2 + 1] [(_Bool)1] [i_11] [i_13]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_2])))))))) || ((!(((/* implicit */_Bool) arr_27 [i_2 + 1] [i_11 + 1] [i_11 + 1] [i_11] [(short)22]))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min(((unsigned char)125), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13213951090132048100ULL)))))));
                            var_43 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 17337492049182366284ULL)))))))));
                        }
                    }
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_36 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0])))) ? (max((((/* implicit */long long int) var_6)), (((arr_6 [(unsigned char)11] [i_1] [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)-9884))))))) : (((/* implicit */long long int) (-((-(arr_1 [i_0]))))))));
                }
                for (short i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    arr_43 [i_0] [i_0] [(short)9] [i_14] = ((/* implicit */unsigned short) (_Bool)1);
                    var_45 = ((/* implicit */unsigned short) min((min(((short)-15044), (((/* implicit */short) (unsigned char)18)))), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [10ULL] [14] [i_14] [i_14 - 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                    arr_44 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_37 [i_14 + 1] [i_14] [i_14] [i_0] [i_14 + 1])), (-1554368778)))));
                    var_46 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [5U] [5U] [5U] [i_0]))))));
                }
                var_47 = ((/* implicit */int) (!((_Bool)0)));
                arr_45 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((var_7) && (((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) arr_42 [i_0] [i_1])) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (short)15056))))))), (max((((/* implicit */long long int) (_Bool)1)), (max((var_9), (((/* implicit */long long int) var_8))))))));
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((7017583101673504698ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58428)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_7))))))));
}
