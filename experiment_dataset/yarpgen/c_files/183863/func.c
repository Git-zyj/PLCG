/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183863
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
    var_19 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 3521854456U)) ? (var_13) : (var_2))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12007))) : (var_13))))), (var_10)));
    var_20 = ((/* implicit */int) 14070288904527567480ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)53507))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)51847))));
        arr_4 [i_0] = ((/* implicit */int) (unsigned short)12253);
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_23 = min(((_Bool)1), ((_Bool)1));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned char) arr_13 [(_Bool)1] [7] [(_Bool)1] [i_3] [(_Bool)1] [7]);
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) -1LL))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_3])) + (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [10LL] [(_Bool)1] [10LL] [i_3])) + (((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_2]))))) : (min((((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_3])), (((2534257336U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3] [i_3]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)53507)))), (((/* implicit */int) ((unsigned char) ((2054395698U) * (((/* implicit */unsigned int) -18))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3953)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (min((3348327836714704840ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))), (arr_6 [(unsigned short)5] [24LL])))));
                            arr_22 [i_1] [i_2] [i_3] [11] [i_6 + 1] [(unsigned char)19] [7ULL] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 17659467624339853017ULL)) ? (252U) : (892898060U))));
                            var_30 = ((/* implicit */int) min((arr_21 [15]), (((/* implicit */unsigned int) (signed char)45))));
                        }
                        var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 458752U)) || (((/* implicit */_Bool) 787276449369698598ULL))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_21 [i_3]) != (arr_21 [i_8])))) < (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)1)), (18446744073709551612ULL)))))));
                        arr_25 [i_1] = ((unsigned long long int) ((_Bool) (-(274877874176ULL))));
                        var_33 ^= ((/* implicit */int) (unsigned short)0);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_28 [i_1] &= ((/* implicit */unsigned short) ((int) ((min((((/* implicit */int) arr_19 [i_1] [i_9])), (36))) >> ((((-(var_10))) - (16630708994627374563ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    {
                        arr_35 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((short) var_18)))) ? ((+(arr_29 [0] [i_10]))) : (((/* implicit */long long int) 1961294803U))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_38 [8ULL] [(unsigned short)9] [i_10] [i_11] [i_10] [22U] |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 3402069211U)) ? (arr_23 [i_1] [i_9] [i_10] [i_11] [(signed char)24]) : (((/* implicit */int) (unsigned short)4577)))));
                            arr_39 [(unsigned short)6] [1] [i_10] [1] [i_10] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_1]))) & (max((((/* implicit */unsigned int) (signed char)117)), (3402069211U))))), (3402069209U)));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_9))));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned short) arr_19 [i_9] [i_1])), ((unsigned short)8191))));
        }
        arr_40 [i_1] [i_1] = ((/* implicit */unsigned int) ((6054635788746670714ULL) != (((/* implicit */unsigned long long int) min((((((var_6) + (2147483647))) >> (((((/* implicit */int) arr_12 [(_Bool)1] [i_1] [(_Bool)1])) + (84))))), (((/* implicit */int) (unsigned char)120)))))));
    }
}
