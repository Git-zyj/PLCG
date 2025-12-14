/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124571
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) 762738805);
                    var_20 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65534))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1047)) < (((/* implicit */int) (short)-448))));
                                var_22 = ((/* implicit */long long int) ((unsigned long long int) arr_13 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_0] [i_0]));
                                arr_15 [10U] [i_5] [i_4] [i_3] [10U] [10U] = ((/* implicit */signed char) (-(4226788662U)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_6] [i_3] [i_3] [i_1] [i_0])) ? (arr_10 [i_0] [i_1] [i_3] [i_6] [i_6]) : (arr_10 [i_0] [i_1] [i_3] [i_6] [i_3]))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned char) var_2)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 |= ((/* implicit */long long int) ((2145386496) <= (((((/* implicit */int) (short)442)) / (((/* implicit */int) (short)467))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-23);
                    }
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                {
                    var_26 |= ((/* implicit */int) ((unsigned int) max(((short)-10688), ((short)20257))));
                    var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)450)) : (((/* implicit */int) (signed char)-1)))) : ((+(((/* implicit */int) (signed char)-69))))))) ? (((/* implicit */unsigned long long int) (-(1010200055)))) : (((((760503072U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11764683278163543026ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = (-(((/* implicit */int) (signed char)29)));
                        var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [17U] [i_9]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) + (arr_19 [i_0] [i_1] [i_0])))));
                        var_30 = ((/* implicit */short) min((((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned char)225), (((/* implicit */unsigned char) (_Bool)0))))), (((long long int) -7941688988999676392LL)))))));
                        var_31 = ((/* implicit */signed char) (~(((arr_7 [i_0] [i_1] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                    }
                    var_32 |= ((signed char) ((3534464223U) | (((/* implicit */unsigned int) -429380955))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) (unsigned short)27722);
                        var_34 = arr_5 [i_10] [i_0] [i_8] [i_10];
                        arr_27 [i_0] [i_1] [i_8] [i_10] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 760503072U)) : (0ULL))))));
                        var_35 = ((/* implicit */short) arr_12 [i_1] [i_1] [i_1] [i_1] [i_10] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (short)442))));
                        arr_30 [i_0] [(signed char)15] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) (-(760503073U)));
                    }
                }
                arr_31 [i_0] [16] [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1380073660))))), (((((/* implicit */_Bool) 549310901)) ? (2963221888667189258LL) : (((/* implicit */long long int) 549310901))))));
                var_37 = ((/* implicit */unsigned char) arr_0 [(unsigned char)14]);
                var_38 = ((short) max((arr_11 [i_0]), (((/* implicit */unsigned int) (signed char)-29))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_36 [i_13] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (18446744073709551615ULL)))));
                            /* LoopSeq 1 */
                            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                            {
                                arr_39 [i_0] [i_14] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)70))));
                                var_39 = ((/* implicit */long long int) (_Bool)0);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_40 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) var_12)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61374)))))));
}
