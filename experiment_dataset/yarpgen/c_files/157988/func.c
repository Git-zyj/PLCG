/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157988
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
    var_15 = (~(((((/* implicit */_Bool) 4294967295U)) ? (var_1) : (var_2))));
    var_16 = ((/* implicit */unsigned char) (((-(min((((/* implicit */long long int) var_5)), (var_7))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (4044218915U)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) * (4044218915U))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned char) arr_0 [8U]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(1836067537536203321LL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) 0);
        var_19 = ((/* implicit */long long int) 4044218915U);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) * (17064490004999269109ULL)))) ? (((/* implicit */int) arr_3 [i_2])) : ((-2147483647 - 1))));
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(2929308083U))))));
            arr_15 [i_2] [i_3] [i_3] = var_2;
            arr_16 [i_2] [i_3] &= ((/* implicit */signed char) 0U);
            var_21 = (_Bool)0;
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_22 *= ((/* implicit */unsigned char) min((14724147556785531ULL), (((/* implicit */unsigned long long int) var_14))));
                var_23 = ((/* implicit */_Bool) 2237979645U);
            }
            for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) 0ULL)) ? (max((((unsigned int) arr_25 [i_6] [i_4])), (((/* implicit */unsigned int) ((4492968380701582039LL) <= (((/* implicit */long long int) 250748361U))))))) : (((/* implicit */unsigned int) min((var_3), (arr_10 [i_4]))))))));
                        var_25 = ((/* implicit */unsigned char) arr_28 [(signed char)14] [(signed char)14] [15LL] [i_6] [4U]);
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 4; i_9 < 16; i_9 += 1) 
                    {
                        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)195))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (arr_27 [i_2] [i_4] [i_6] [i_4] [i_7] [i_9]))))));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50744))))) ? (((1745462456) | (((/* implicit */int) arr_21 [(unsigned char)9] [i_6] [i_4])))) : (arr_10 [i_9 + 3])));
                        var_28 = ((/* implicit */int) max((var_28), (((arr_24 [i_9 - 3] [i_9 + 3]) ? (((/* implicit */int) arr_3 [i_4])) : ((+(((/* implicit */int) (unsigned short)62519))))))));
                    }
                    var_29 -= ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) ((unsigned short) 0ULL)))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) == (arr_34 [i_2] [i_2]))) ? ((-(((/* implicit */int) arr_0 [1])))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)54385))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (_Bool)0))));
                    var_31 = ((/* implicit */unsigned short) (_Bool)0);
                    var_32 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)72)) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11126))))), (((/* implicit */long long int) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4044218935U)))))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */_Bool) (unsigned short)61905)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))))) : (((/* implicit */long long int) 250748361U))))));
                }
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_33 ^= ((/* implicit */short) var_7);
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_2))));
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_2] [i_4] [i_12] [i_12] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)195))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */long long int) 4294967295U)), (-9223372036854775796LL))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    var_35 *= ((/* implicit */_Bool) var_4);
                    var_36 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)205))))) + ((-(2147483647)))))), (var_2)));
                }
                arr_45 [i_2] [i_2] [i_12] [i_2] = ((/* implicit */int) arr_9 [2ULL]);
                var_37 = ((/* implicit */long long int) var_5);
                var_38 = ((/* implicit */long long int) arr_21 [i_2] [i_4] [i_12]);
            }
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1470767496)) ? (((/* implicit */int) (unsigned short)49099)) : (((/* implicit */int) ((((/* implicit */_Bool) 4044218934U)) && (arr_24 [i_2] [i_2])))))))));
            arr_46 [7] [7] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_1)))));
            var_40 = ((/* implicit */unsigned int) (!(var_13)));
            var_41 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max((arr_30 [i_4]), (((/* implicit */short) arr_23 [i_2] [i_4] [i_4]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)60)) : (1745462460)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) * (626766791U)))));
        }
        for (int i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
        {
            arr_51 [i_2] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)(-32767 - 1))), (var_0)))) && (((/* implicit */_Bool) (((_Bool)0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)255)))))))))));
            arr_52 [i_14] = ((/* implicit */int) arr_1 [i_14]);
            var_42 = ((/* implicit */short) 4488375144403039097LL);
        }
        for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            arr_55 [i_2] [i_15] [i_2] = ((/* implicit */unsigned long long int) 4488375144403039088LL);
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (_Bool)1))));
            arr_56 [i_2] |= ((/* implicit */unsigned int) (~((-(((arr_23 [i_15] [i_15] [(unsigned short)7]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_33 [i_2] [i_15]))))))));
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) 626766809U))));
        }
        arr_57 [i_2] = ((((/* implicit */_Bool) min((1745462450), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (-2936990210181046704LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32741))))) : (((/* implicit */long long int) arr_2 [i_2])));
    }
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        arr_61 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [(unsigned char)18] [i_16])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) : (var_8))) : (((/* implicit */long long int) min((arr_59 [i_16] [i_16]), (((/* implicit */int) var_13)))))));
        var_45 &= ((/* implicit */short) ((min((0U), (((/* implicit */unsigned int) (short)32741)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) 626766809U))))));
        var_46 = ((/* implicit */int) arr_60 [i_16]);
        arr_62 [i_16] [i_16] &= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (short)-4527)))))) / (((((/* implicit */_Bool) arr_2 [i_16])) ? (arr_60 [i_16]) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (signed char)105)))))));
    }
}
