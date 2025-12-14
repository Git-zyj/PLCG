/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186122
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned char)231))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 - 1] [i_1]))))))));
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6937)) ? (((/* implicit */int) (unsigned short)1)) : (-483266100)))))) || (((/* implicit */_Bool) ((short) (short)-15692))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(9223372036854775807LL))))))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_13 [i_0] [i_4] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */short) max(((~(arr_11 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_4] [i_1 + 2] [i_0 + 1]))), (((/* implicit */int) ((4U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned int) arr_1 [i_2])), (4U))))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(127ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_2]), (arr_5 [i_0 + 1] [i_1] [i_2] [i_5])))))))) ? (max((((/* implicit */long long int) arr_5 [i_0 - 1] [i_1 - 2] [i_1 - 2] [(short)7])), (((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [(short)14] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5]))) : (2199023253504LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4249023085816349672ULL)) ? (((/* implicit */int) (unsigned short)34619)) : (((/* implicit */int) (unsigned short)16384))))))))));
                    arr_16 [i_2] [i_5] [i_2] [i_1] = ((/* implicit */long long int) 4294967291U);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_1 - 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-45)), (861732744916564050LL)))) : ((+(arr_12 [i_0] [i_0 + 1] [i_0 - 1] [i_1 + 2])))));
                }
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((int) (-(-762421103)))) >= (((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 2])) ? (((/* implicit */int) ((unsigned short) (short)32767))) : (((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */unsigned short) (short)22510))))))))))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_10 [(short)5] [i_1] [7] [i_6])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0])), (arr_12 [i_0] [(short)2] [i_2] [i_6])))))) && (((((/* implicit */int) ((short) arr_10 [i_0] [i_1] [i_2] [i_6]))) >= (arr_11 [i_0] [i_0] [i_2] [i_6] [i_0] [i_0]))))))));
                }
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((-1880900603) != (762421103))))) != (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_2])) ? (arr_17 [i_0 - 1] [i_0] [i_0 + 1] [i_1] [i_1]) : (arr_17 [i_0] [i_0] [i_0 + 1] [i_1] [i_1]))))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)3)), (4513027162864501492LL)))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1 + 2] [i_0 - 1]))))))));
            }
            arr_19 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59256)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10912)) ? (((/* implicit */int) (unsigned short)12)) : (-1880900612))))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_23 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)253)) >= (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_7] [i_1])))))), (arr_3 [i_0])));
                arr_24 [13LL] [i_0 + 1] = ((/* implicit */long long int) min((((/* implicit */int) arr_20 [i_0] [i_1] [i_7])), ((+(((/* implicit */int) ((unsigned short) (unsigned short)65535)))))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((-30) >= (-762421130)))) >= (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_7] [i_1] [i_1] [i_1] [7U]))))) : ((+(((/* implicit */int) (short)8191)))))))))));
            }
            for (short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) != (-861732744916564050LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 2] [i_8])) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_0] [i_1 - 1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_8] [i_0]))) / (arr_0 [i_0]))))))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_8]))));
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)1)) * (((/* implicit */int) arr_15 [1LL] [i_0 - 1] [i_1 - 2] [i_8])))) >= (((/* implicit */int) arr_26 [i_1])))))));
            }
            for (short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) 1880900602)))))));
                arr_31 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_29 [i_1] [i_1] [i_1 - 2] [i_9]), (((/* implicit */unsigned long long int) 1048575)))))));
            }
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((-1880900601) >= (-762421127)))) >= (((/* implicit */int) arr_1 [i_1])))))));
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (((+(((((/* implicit */_Bool) -1965371844)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) : (536870848ULL))))) * (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)177)))))))));
        }
        for (unsigned int i_10 = 4; i_10 < 15; i_10 += 4) 
        {
            arr_35 [(unsigned short)15] [i_10] [i_10 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((short) 2147483647)));
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((2147483647) >= (((/* implicit */int) (unsigned short)55682))))), ((-(((/* implicit */int) arr_33 [i_0] [i_10 - 3]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1398920289)) ? (((/* implicit */int) (short)22510)) : (((/* implicit */int) (unsigned short)64657)))) / (max((1880900589), (((/* implicit */int) (short)-3929))))))) : (((min((16777215ULL), (((/* implicit */unsigned long long int) arr_18 [10] [10] [3LL] [i_10] [i_10] [i_10])))) / (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))))));
        }
        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -1880900590)) ? (((/* implicit */long long int) 1368567896)) : (72057594037927935LL))))))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_34 [i_0 - 1]) >= (((/* implicit */int) min((((/* implicit */short) arr_20 [i_0] [i_0 + 1] [i_0])), (arr_33 [i_0] [i_0])))))))) : (min((arr_29 [i_0 + 1] [i_0 - 1] [i_0 + 1] [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_26 [12LL])))))))));
        var_38 = ((/* implicit */signed char) ((short) ((int) arr_9 [i_0 - 1])));
    }
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 3) /* same iter space */
    {
        arr_38 [(signed char)9] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)78)) : ((-2147483647 - 1))))));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-45)) != (((/* implicit */int) (unsigned short)32768)))))));
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_36 [i_11 + 1])))), (((/* implicit */int) ((signed char) ((-762421117) / (arr_37 [(unsigned short)1] [i_11]))))))))));
    }
    for (unsigned int i_12 = 1; i_12 < 15; i_12 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((long long int) arr_15 [i_12] [i_12] [i_12] [i_12])))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_41 [i_12 - 1])) ? (arr_12 [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (((/* implicit */int) (unsigned short)65535)))))))))));
        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12 - 1]))) : (((unsigned long long int) ((unsigned short) arr_36 [i_12]))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 3) /* same iter space */
    {
        arr_44 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1880900602)) ? (arr_29 [i_13 - 1] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) arr_11 [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_13 - 1]))));
        var_44 = ((/* implicit */int) arr_33 [i_13] [i_13]);
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_13]))))) ? ((~(-1))) : ((~(arr_27 [i_13 - 1] [i_13])))));
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3))));
    var_47 = ((/* implicit */signed char) max((var_47), (var_11)));
    var_48 = ((/* implicit */unsigned int) var_15);
}
