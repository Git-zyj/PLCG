/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163904
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
    var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_9))))))));
    var_18 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))) ^ (17629097565701044862ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0]))))) + (((/* implicit */unsigned long long int) ((1059863458656855407LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (var_12)));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (arr_9 [i_0] [i_2]))))));
                            var_22 ^= ((/* implicit */_Bool) arr_13 [i_0] [(unsigned short)15] [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned short)33106))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            arr_16 [i_0] [(unsigned short)18] [i_2] [i_3] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_14 [(unsigned char)18] [0LL] [i_5 - 1] [i_5] [i_5] [i_5]))))));
                            arr_17 [i_5] [i_0] [14LL] [i_2] [i_1] [i_0] [(short)6] |= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)1))));
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_9 [i_0] [i_0]))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_2] [13ULL] &= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_11 [i_6]))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_1 - 1] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_13))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 19; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 965070807427063600LL)) ? (((/* implicit */int) (unsigned short)32429)) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) (short)-7192)) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_7] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))));
                            arr_28 [(_Bool)1] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_14 [i_8 + 3] [i_2] [i_1 + 1] [(short)2] [i_1 + 1] [i_1 + 1])));
                        }
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1])) ? (((long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (8561966575546934844LL)));
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (arr_22 [i_7] [i_2] [i_0] [i_0])))) & (((/* implicit */int) arr_6 [(signed char)1] [i_1 - 1] [i_1 - 1]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_29 &= ((/* implicit */short) (((!(((/* implicit */_Bool) 613162905)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) (short)-11616))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_9 - 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_22 [i_1 - 1] [(_Bool)1] [i_2] [i_9 + 1])) : (arr_9 [i_9 + 1] [i_1 + 1]))))));
                    }
                    for (long long int i_10 = 2; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) var_14);
                        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((3505740565U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83)))))) ? ((~(((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_10] [i_10] [i_10] [(short)12])) : (((/* implicit */int) var_9)))))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_19 [i_10])) <= (arr_11 [i_0]))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                    {
                        arr_38 [i_11] [i_1] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */signed char) var_15);
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_1 + 1] [i_11]), (arr_0 [i_0] [i_11]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)86))) & (6070465129107872087LL))))))));
                        var_34 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_31 [i_0] [i_1 + 1])) & (((/* implicit */int) arr_31 [i_1 - 1] [i_11])))) + (((/* implicit */int) (!(arr_31 [i_0] [i_1 - 1]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        var_35 += ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2]);
                        var_36 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)21608)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (short)22316))))));
                        var_37 = ((/* implicit */_Bool) var_8);
                        arr_41 [i_0] [i_0] = ((/* implicit */unsigned int) (short)-32761);
                    }
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        arr_44 [i_13] [i_13] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (12991084228348837506ULL)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1 + 1] [(unsigned char)11] [i_2] [i_13]))));
                        var_38 = 297890499U;
                        arr_45 [i_0] [i_1] [i_2] [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32436)))))));
                    }
                    arr_46 [(signed char)1] [i_0] = ((/* implicit */unsigned int) ((4234430629766380693LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_37 [i_14 + 2] [i_14] [(unsigned short)20] [i_14 + 1] [21LL] [(unsigned char)3])) : (var_12))) ^ (((/* implicit */long long int) (-(arr_37 [i_14] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 2] [i_14 - 1]))))));
        arr_51 [i_14] = ((/* implicit */unsigned int) (((-(-4448625894921419238LL))) - (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_14 + 1])) + (((/* implicit */int) arr_14 [(unsigned short)11] [i_14] [(unsigned short)7] [i_14] [(unsigned short)7] [i_14])))))));
        arr_52 [(unsigned char)3] = ((/* implicit */signed char) (((-(arr_9 [i_14 + 1] [i_14]))) - (min((arr_9 [i_14 - 1] [i_14]), (((/* implicit */unsigned long long int) arr_25 [i_14 + 2] [i_14] [i_14 - 1] [i_14] [i_14] [i_14 - 1]))))));
    }
}
