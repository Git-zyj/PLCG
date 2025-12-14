/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188400
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)40526)));
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((((arr_2 [(short)6]) ? (((/* implicit */int) ((_Bool) arr_0 [18LL]))) : (((arr_2 [(_Bool)1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) + ((+((~(((/* implicit */int) (_Bool)0))))))))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(17592186044415LL))))));
        var_19 += ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_2 [12])) >= ((-(((/* implicit */int) var_10))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (unsigned short)65518)), (var_7)))))) ? (((unsigned long long int) 67108863LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) + (((arr_2 [(signed char)6]) ? ((-9223372036854775807LL - 1LL)) : (var_13))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [20] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [12U] [(_Bool)1])))))))));
                    arr_11 [i_0] = (-(((((/* implicit */_Bool) (short)32763)) ? (var_12) : (((/* implicit */unsigned int) var_9)))));
                }
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) (+((-2147483647 - 1))))) - (var_6))))));
                    var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)0])) ? (-340981260) : (((/* implicit */int) ((_Bool) -1LL)))));
                    var_24 = ((/* implicit */short) ((_Bool) -7181578181201210191LL));
                }
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!((_Bool)1))))));
            }
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                arr_18 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_5] [i_1 + 1] [i_0] [i_1])) ? ((+((+(var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_5 + 3] [i_0 + 2])) ^ (((/* implicit */int) arr_1 [i_5 + 1] [i_0 + 2])))))));
                var_26 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)40520)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [18U] [(_Bool)1] [i_0 + 1] [(_Bool)1] [i_0 + 1]))) : (9223372036854775790LL))) < (((/* implicit */long long int) ((/* implicit */int) ((short) var_14)))))) ? ((+(((/* implicit */int) var_0)))) : ((((!(var_8))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) ((unsigned char) var_3)))))));
                var_27 = min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (max(((-(9223372036854775802LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))));
                arr_19 [i_0] [i_0 - 2] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_8) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [i_0])), (-17592186044417LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)15866)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (short)-29324))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), ((-(var_5)))))));
            }
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2)))))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1871274425U)))) ^ (((long long int) (unsigned short)24993))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_6 [i_0] [i_0]))))))) : (((((524287U) * (2552416578U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
            var_29 = ((/* implicit */int) ((min((9076872691566130723LL), (((/* implicit */long long int) (unsigned char)92)))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
        }
        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)32764), (((/* implicit */short) var_3))))) ? (((/* implicit */unsigned int) (+(var_9)))) : (arr_22 [i_0 + 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))) : (max((((/* implicit */long long int) arr_2 [i_0])), (-4422328302737414874LL)))));
                arr_25 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */long long int) 2552416576U))))) / (max((((/* implicit */unsigned long long int) var_6)), (var_5))))))));
            }
            /* vectorizable */
            for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [(short)2] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_6 - 1] [i_0])) : (((/* implicit */int) var_3))));
                var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (short)32759))));
                arr_29 [i_0] [i_0] [i_6] [i_8] = ((_Bool) arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]);
            }
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_9 [i_0 + 2] [i_0 - 2]) % (arr_9 [i_0 + 2] [i_0 - 2])))), (min((2432583345137017105ULL), (((/* implicit */unsigned long long int) arr_9 [i_0 + 2] [i_0 - 2]))))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_34 = ((/* implicit */short) ((long long int) arr_0 [i_0]));
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_0))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (unsigned char)78)) : ((+(((/* implicit */int) (short)32759)))))));
                        arr_39 [i_11] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_0 [i_0])), (max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (var_6)))))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 17; i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_10] [i_12] = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_13)) ? (arr_32 [i_0] [(unsigned char)8] [i_9] [i_12 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ^ (((/* implicit */long long int) min((arr_26 [i_9] [i_9] [i_0]), (arr_26 [i_6] [i_6] [i_0]))))));
                        arr_43 [i_0] [i_10] [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_31 [i_0]) ? (((/* implicit */int) arr_31 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0]))))) : (((unsigned int) (unsigned char)90))));
                    }
                }
                for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                {
                    arr_46 [i_0] [i_6] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((short)255), (((/* implicit */short) var_2))))) + ((~(((/* implicit */int) (unsigned char)150)))))))));
                    var_36 += ((/* implicit */unsigned int) max(((unsigned char)241), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_23 [(_Bool)1]))))))))));
                    arr_47 [18] [i_6] [i_0] [i_13 - 2] [i_13] [i_13] = ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_6 [i_6] [i_0])), ((signed char)-8)))) || (((((/* implicit */_Bool) ((short) (short)13348))) || ((!(((/* implicit */_Bool) 6608754338300747891ULL)))))));
                }
            }
            for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
            {
                arr_51 [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((long long int) (unsigned char)0)) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 2]))))));
                var_37 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [14ULL]))) ^ (-8786309830843430352LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_44 [i_0 + 2] [i_0 + 2] [i_0 - 3])) - (8395)))))) || ((_Bool)1)));
            }
            arr_52 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_0]), (arr_36 [i_0] [i_0] [i_0 + 1] [i_0] [i_6 - 1]))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_38 = ((/* implicit */short) ((unsigned short) (-(((((/* implicit */unsigned long long int) -1LL)) * (6608754338300747887ULL))))));
            var_39 -= ((/* implicit */_Bool) (~(((((/* implicit */long long int) (-2147483647 - 1))) / (var_13)))));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) min(((~((~(var_6))))), ((-(var_14))))))));
        }
    }
}
