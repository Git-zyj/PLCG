/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187429
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 *= ((unsigned char) max((((/* implicit */unsigned short) var_2)), (arr_4 [(_Bool)1] [i_1] [i_1])));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5613180740807978115ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (var_11)))) ? ((-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (-720678933) : (((/* implicit */int) var_13)))))) : ((-(((/* implicit */int) (unsigned char)245))))));
                    var_15 = ((/* implicit */unsigned char) ((max((arr_8 [i_0] [i_1] [i_2 + 1] [i_2]), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)16])))));
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)24)), (((((/* implicit */int) arr_2 [i_2 - 2] [i_2 + 1])) / (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))))));
                }
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_17 ^= ((/* implicit */short) var_4);
                        arr_17 [i_3] [(signed char)14] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))))) / (((((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)-1))))) - ((+(((/* implicit */int) (unsigned char)50))))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)5131))))) <= (((/* implicit */int) ((signed char) arr_10 [i_3])))));
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 67108863))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)52344)))))));
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)-73))) ? (((var_8) << (((/* implicit */int) arr_5 [i_3] [1LL])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                    }
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        arr_24 [i_0] = ((/* implicit */int) min(((+(max((((/* implicit */long long int) (unsigned short)18320)), (arr_8 [(short)9] [i_1] [i_3] [i_6]))))), (((((arr_16 [i_6 - 1] [i_1] [i_3] [20]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)9814)) - (9814)))))));
                        arr_25 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((arr_5 [i_0] [i_0]) ? (((((((/* implicit */_Bool) arr_12 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551605ULL))) >> (((((/* implicit */int) (signed char)54)) / (((/* implicit */int) (short)18886)))))) : (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 9478902984989672171ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                        var_23 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_4 [i_0] [i_0] [i_0])))) / (((((/* implicit */_Bool) arr_2 [22ULL] [(short)3])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52342))) : (4294967295U)))))));
                        arr_28 [23LL] [i_7] [i_0] [(_Bool)1] [13LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_26 [i_1] [i_1] [i_3] [(_Bool)1] [i_7 + 1] [i_7 + 1])), (-1251370010797367157LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)23021)), ((unsigned short)22674))))) : ((+(16955597806464128370ULL)))));
                        var_25 = ((/* implicit */long long int) arr_2 [7ULL] [i_7]);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26037)) & (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_21 [i_0]))))));
                    }
                    var_27 = ((/* implicit */signed char) var_4);
                }
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_28 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_10 [i_0]) : (arr_10 [i_8]))));
                    var_29 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) max((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (243301287)))), (max((((/* implicit */long long int) (short)-23599)), (arr_30 [(unsigned short)8] [i_8] [i_1] [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        var_30 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-20))))) ? (((/* implicit */int) arr_13 [i_9] [i_8] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_12)));
                        arr_34 [(_Bool)1] [i_8] [i_8] [(short)18] [i_1] = ((/* implicit */long long int) (signed char)-14);
                    }
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_8])) && (((/* implicit */_Bool) (short)32753))))) << (((((1458128264U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) - (1458141003U))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 8967841088719879431ULL)) ? (2024117984U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))))));
                                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_11])) >> (((((unsigned long long int) min((var_9), (((/* implicit */int) (short)23020))))) - (18446744073090443335ULL)))));
                                arr_40 [6] [i_10] [(short)19] [i_10] [i_0] = (unsigned char)245;
                                arr_41 [i_10 + 1] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [3ULL] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_34 = ((/* implicit */_Bool) ((max((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [(short)10] [i_0]))), (235335443))) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0]))) : (-2656549458294298308LL))) : (arr_16 [2] [i_1] [i_12] [2]))) - (25LL)))));
                    var_35 = ((/* implicit */unsigned short) var_5);
                }
                arr_44 [18] = 723521615;
                arr_45 [(signed char)12] [i_0] = ((/* implicit */_Bool) 1547816983);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_36 = ((/* implicit */long long int) var_7);
        var_37 = ((/* implicit */short) arr_38 [(unsigned char)20] [i_13] [i_13] [i_13] [10ULL] [i_13] [i_13]);
    }
    for (long long int i_14 = 2; i_14 < 9; i_14 += 4) /* same iter space */
    {
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_14])) ? (var_11) : (arr_32 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [i_14 + 1]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(signed char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)5] [i_14]))) : (1500603852U))))))))))));
        var_39 = ((/* implicit */unsigned long long int) (+(((int) min((((/* implicit */unsigned long long int) 1661529251)), (arr_42 [17ULL]))))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (short i_16 = 1; i_16 < 7; i_16 += 4) 
            {
                {
                    var_40 = ((/* implicit */unsigned char) ((2794363457U) <= (((unsigned int) arr_48 [i_16] [(_Bool)1]))));
                    arr_57 [i_16] [i_14] [i_15] [i_16] = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) arr_38 [6] [i_15] [i_15] [14LL] [12U] [(_Bool)1] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))) * (((/* implicit */long long int) ((/* implicit */int) (short)-23043)))));
                }
            } 
        } 
    }
    for (long long int i_17 = 2; i_17 < 9; i_17 += 4) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned int) var_11);
        /* LoopNest 2 */
        for (long long int i_18 = 3; i_18 < 8; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                {
                    arr_67 [i_19] [i_18 - 2] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_17 - 1]), (arr_6 [i_17 - 1]))))) % (arr_30 [(unsigned short)16] [i_17] [i_18 + 1] [i_19])));
                    arr_68 [i_17] [(_Bool)1] = ((/* implicit */int) arr_53 [i_17] [i_18 - 1] [6ULL] [8]);
                    var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_55 [(unsigned char)2] [(_Bool)1] [i_18 - 2] [i_18 + 2]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((-761411525) % (((/* implicit */int) (_Bool)1))))))) : (1500603836U)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (short i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (short)2016))) > (3114725564689983408ULL)))), (((((arr_71 [i_20]) / (var_6))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_20] [i_20] [i_20] [i_20] [i_20])))))));
        arr_72 [i_20] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) max(((short)23665), (arr_46 [i_20])))))));
        var_44 += ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (arr_26 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) : (arr_23 [i_20] [i_20] [i_20] [i_20] [i_20] [(signed char)21]))), (min((var_5), (((/* implicit */int) (unsigned char)12))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_20] [17LL] [i_20] [i_20]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11060406669133660623ULL)) ? (2794363473U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (723163546814074362ULL)))));
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_20] [i_20] [15LL] [11U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((max((2024117987U), (((/* implicit */unsigned int) (short)480)))) * (((/* implicit */unsigned int) max((1439131246), (arr_26 [i_20] [20LL] [i_20] [19LL] [23U] [i_20]))))))));
    }
}
