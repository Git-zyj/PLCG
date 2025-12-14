/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187849
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) (((((_Bool)1) ? (237374100744338885LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_17 = (~(17189502966440670011ULL));
            var_18 = ((((/* implicit */_Bool) (signed char)55)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (arr_1 [i_0]));
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (1257241107268881593ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
            /* LoopNest 3 */
            for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) var_4)) : (1257241107268881604ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4515507942669013977ULL)) ? (((/* implicit */int) (unsigned short)8270)) : (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */long long int) 120661399)) : ((~(-1LL)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */int) var_11)) >> (((1934353789U) - (1934353777U))))))))));
                        }
                    } 
                } 
            } 
        }
        arr_17 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))));
        arr_18 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 9U)) & (346524118249684318LL))) > (((/* implicit */long long int) -1109943953))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 4; i_7 < 15; i_7 += 2) 
        {
            arr_24 [(signed char)15] [4U] [2LL] = ((((/* implicit */_Bool) (-(var_3)))) ? (((arr_5 [i_7 - 4]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (arr_5 [i_7 - 1]));
            arr_25 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min(((~(4294967286U))), (((/* implicit */unsigned int) (unsigned short)8191))))) & (max((((/* implicit */unsigned long long int) (unsigned short)8191)), (max((var_1), (((/* implicit */unsigned long long int) 4294967287U))))))));
            arr_26 [(signed char)10] [8] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) 3763641647U)) == (-346524118249684319LL))))))) >= (((min((((/* implicit */unsigned long long int) -267665337)), (17518559103611057098ULL))) >> (((((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [8LL] [i_7] [i_6])) ? (-4147511374315920457LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) + (4147511374315920476LL)))))));
            var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)8191)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (928184970098494502ULL)))) ? (((/* implicit */unsigned long long int) 6433130026067247622LL)) : (((6682262553386149006ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6] [i_7])))))))));
        }
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1588433699))));
        var_25 = ((/* implicit */long long int) 531325648U);
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned short)65534)), (arr_15 [i_6] [i_6] [i_6] [i_6] [22LL] [i_6]))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            arr_33 [i_8] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (arr_5 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8] [i_8] [3])))))));
            var_27 = ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) ((6682262553386148986ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8])))))) : (((/* implicit */int) ((531325644U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) arr_31 [i_9] [i_8])) - (80))))))));
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_5))));
    }
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                {
                    arr_41 [i_10] [i_10] [(signed char)1] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_10])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned char)23)))) - (((/* implicit */int) ((8761486827180326900ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))))))));
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_30 = (+(((((((/* implicit */_Bool) (short)-18215)) ? (10459311744486333232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11] [(short)4]))))) + (((/* implicit */unsigned long long int) 1588433682)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_14 = 1; i_14 < 7; i_14 += 1) 
                        {
                            var_31 |= ((/* implicit */short) 210112080);
                            arr_46 [i_13] [1U] [i_13] [9LL] [i_13] [i_13] = ((((((/* implicit */int) (unsigned short)155)) >= (var_0))) || (((/* implicit */_Bool) (~(var_13)))));
                            var_32 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-15044)) + (2147483647))) << (((((((/* implicit */int) (signed char)-30)) + (55))) - (25)))));
                        }
                    }
                    for (signed char i_15 = 3; i_15 < 9; i_15 += 2) 
                    {
                        arr_51 [i_10] [i_15] [i_15] [i_11] = ((/* implicit */long long int) -1793445203);
                        arr_52 [i_15] [i_15] = arr_19 [(_Bool)1];
                    }
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_11)))), (((1793445207) + (arr_11 [i_16] [i_12] [i_11] [i_11] [(short)11] [i_16]))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)40)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2103891767))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
                        arr_56 [i_10] [(signed char)10] [0] [i_16] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (12845627844935648369ULL)));
                        var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) | (129380427U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_12] [i_12] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_12 - 1] [14U] [i_12] [i_12 + 2] [i_12]))))) : (((((/* implicit */_Bool) 210112084)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18446744073709551615ULL)))));
                        arr_57 [8ULL] [i_11] [i_11] [(unsigned char)0] |= ((/* implicit */int) var_13);
                        arr_58 [8U] [(_Bool)0] [i_12 + 2] [i_10] [i_12 + 1] [i_10] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [5] [i_10]))) + (11807510197993708449ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9185793953821027576ULL)) || (((/* implicit */_Bool) -1)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-66)) : (-462873744)))) / ((-(-4501398961729844677LL)))))));
                    }
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
                    {
                        arr_61 [i_10] [i_11] [i_10] [i_17] = ((/* implicit */unsigned short) var_2);
                        arr_62 [i_10] [i_17] [i_10] = ((/* implicit */short) (~(max((((var_1) | (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_35 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) 7891380124396800983ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (6639233875715843166ULL))))), (((/* implicit */unsigned long long int) 255LL))));
                    }
                    var_36 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)23746))))), ((-(13338316224170065671ULL)))))));
                    arr_63 [i_11] |= ((/* implicit */_Bool) (~(((((9260950119888524039ULL) - (((/* implicit */unsigned long long int) -255LL)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_10] [(unsigned short)8] [i_11] [i_12 - 1])) ? (845981235) : (1123175085))))))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_37 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (_Bool)1))))), ((~(var_9))))))));
                                var_38 = ((/* implicit */short) min((var_38), ((short)-2376)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_12);
}
