/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131875
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */short) var_0);
            var_19 = ((/* implicit */long long int) ((unsigned int) (-(var_11))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) <= (2011862721U))))));
        }
        for (int i_2 = 3; i_2 < 7; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_15 [i_3] [i_2 - 3] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3] [i_2 - 2])) && (((/* implicit */_Bool) arr_9 [i_3] [i_2 - 3]))));
                            arr_16 [i_0] [i_2 - 3] [i_0] [i_0] [i_3] = ((/* implicit */int) var_12);
                            var_21 -= ((/* implicit */unsigned char) (~(1795270197)));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) (+(2283104574U)));
            var_23 = ((/* implicit */int) min((var_23), ((-(0)))));
        }
        var_24 = ((/* implicit */long long int) (~(268435454)));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_11 [0] [0] [i_0] [i_0])) < (-1741820642)))))));
        arr_17 [i_0] &= ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) ((unsigned char) 0))) : (0));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (short i_9 = 2; i_9 < 6; i_9 += 3) 
                {
                    {
                        var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [4U] [i_6] [4U]))));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_30 [i_6] [i_6] [i_8] [i_6] [i_8] = ((((/* implicit */_Bool) 420529287)) ? (((8372224) / (var_8))) : (((((/* implicit */int) (_Bool)1)) / (arr_22 [i_7] [i_7] [i_9]))));
                            var_27 *= ((/* implicit */short) 1733262245);
                            arr_31 [i_6] [i_6] [i_6] [8] [i_6] [i_6] [i_6] |= ((/* implicit */short) ((unsigned char) 1879375509));
                            var_28 = ((/* implicit */int) (unsigned char)17);
                        }
                        for (int i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            arr_34 [i_11] [i_6] [i_11] [i_11] [i_11] = ((/* implicit */int) ((unsigned short) ((unsigned int) 1242181744)));
                            arr_35 [i_6] [i_6] [i_7] [i_6] [i_9 + 4] [i_11 - 1] = ((int) 1345951571);
                            arr_36 [i_6] [i_9 - 1] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) ((var_8) >> (((-268435456) + (268435459)))));
                        }
                        arr_37 [i_6] [i_7] = ((/* implicit */unsigned int) ((int) -571322755));
                        var_29 += ((/* implicit */int) ((unsigned char) ((-1370299485684650062LL) ^ (var_11))));
                        arr_38 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~(var_8)));
                    }
                } 
            } 
            var_30 = ((/* implicit */int) max((var_30), ((-(arr_7 [i_6] [i_7])))));
            arr_39 [i_6] = ((/* implicit */long long int) 2147483647);
        }
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (short i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 3163278262U)) != (var_11)))))));
                            var_32 |= ((int) (-(-5692307248317430671LL)));
                            arr_50 [i_6] [i_12] [i_6] [i_6] [i_15] = ((/* implicit */long long int) var_12);
                            arr_51 [i_15] [i_14 + 1] [i_6] [i_12] [i_6] = (~(1879375509));
                        }
                    } 
                } 
            } 
            var_33 += ((/* implicit */_Bool) (unsigned char)96);
        }
        arr_52 [i_6] = ((/* implicit */short) ((unsigned char) ((((-968564856) + (2147483647))) >> (((1473466436) - (1473466424))))));
        arr_53 [i_6] = -1741820642;
    }
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [(_Bool)1] [(_Bool)1]) | (((/* implicit */unsigned long long int) var_3))))) || (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) var_17)) ? (10012813900978361831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))))));
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 8; i_17 += 3) 
        {
            for (int i_18 = 2; i_18 < 8; i_18 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-547416609)))) ? ((~(((/* implicit */int) arr_62 [i_18 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1])))) : (((((((/* implicit */_Bool) 895973040)) ? (((/* implicit */int) var_5)) : (arr_12 [i_16] [8] [i_16] [8] [i_16] [8] [i_16]))) | (((var_13) | (((/* implicit */int) arr_11 [8] [i_18 + 1] [8] [8]))))))));
                        var_36 = ((((((int) (-(340592351)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)35)) - (9))));
                        arr_64 [i_16] [i_17 + 1] [i_16] [i_16] = ((/* implicit */int) (((!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_10 [i_16] [i_16] [i_16] [i_19])))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2074431355469917977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))))))))))));
                        arr_65 [i_16] [i_18 - 1] [i_16] = ((int) (unsigned char)24);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        arr_70 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((arr_19 [i_16]) + (((/* implicit */int) var_7)))))) : (((((arr_13 [i_17 + 2] [i_17 + 2] [i_20]) / (-1593070906))) ^ (((/* implicit */int) var_10))))));
                        var_37 = ((/* implicit */unsigned char) (unsigned short)18601);
                    }
                    var_38 = ((((((((/* implicit */_Bool) arr_27 [i_18 + 2] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1])) ? (-1) : (((/* implicit */int) var_5)))) + (2147483647))) << ((((((~(arr_27 [i_18 - 2] [i_18 + 2] [i_18 - 2] [i_18 + 2] [i_18 - 2] [i_18 - 2]))) + (1379281453))) - (19))));
                }
            } 
        } 
        arr_71 [i_16] [i_16] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1242730941)) ? (((/* implicit */unsigned int) 10)) : (4294967295U)))) ? ((~(((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) (!((_Bool)1)))))), ((~(((((/* implicit */int) var_5)) & (((/* implicit */int) var_7))))))));
    }
    /* LoopSeq 1 */
    for (int i_21 = 2; i_21 < 8; i_21 += 3) 
    {
        arr_75 [i_21] = ((/* implicit */unsigned char) 249182922U);
        /* LoopNest 2 */
        for (int i_22 = 2; i_22 < 9; i_22 += 3) 
        {
            for (int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                {
                    arr_81 [i_21] [i_23] [i_23] [i_23] |= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 402653184)) ? (((/* implicit */long long int) -1726747942)) : (-2061045709996567797LL)))))))));
                    arr_82 [i_21] [i_21] [i_23] [i_22 - 2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((arr_29 [i_21]), (((/* implicit */unsigned int) -1))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) min(((unsigned char)60), ((unsigned char)232))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */int) ((((var_3) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((-1726747942) + (1726747956)))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_21] [i_21 + 1] [i_21]) < (arr_4 [i_21] [i_21 - 2] [i_21])))))));
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) 879558656))));
    }
}
