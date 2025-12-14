/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171863
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1 - 1] = ((/* implicit */signed char) var_3);
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)124)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)124)) ? (var_1) : (((/* implicit */int) (_Bool)0)))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (var_2)));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_7 [i_0 + 3] [i_0] [i_0] [i_0 + 2])) & (((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (4612138083207141046ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0] [i_2] [i_3]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_4 = 4; i_4 < 19; i_4 += 4) 
            {
                arr_12 [19] [19] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)124)))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_16 [i_0] [i_1 + 1] [i_4 - 2] [i_5] [i_6]);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 4] [i_0 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_0 + 2]))) : (arr_16 [i_0] [i_0 + 4] [i_0] [i_0] [i_0])));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_14 [(unsigned short)2] [i_6] [i_5] [i_6]))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (int i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            arr_22 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)12239)) == (((/* implicit */int) (unsigned short)65535))))) >> (((/* implicit */int) min((arr_8 [i_0 - 1] [i_0] [i_0]), (arr_8 [i_0 + 4] [i_7] [i_0])))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((min((163019891), (arr_1 [i_0 + 4] [i_0]))), ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_0] [8ULL] [8ULL] [i_7 - 1])))))))))));
        }
        /* LoopSeq 1 */
        for (int i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [13U] [(signed char)18])) : (((/* implicit */int) var_10)))) : (arr_13 [i_0] [i_8 - 1] [i_9] [i_9])));
                var_23 &= var_0;
            }
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                arr_31 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(min((var_5), (((/* implicit */int) (_Bool)1))))))), (((arr_25 [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) (~(arr_0 [(signed char)10])))) : (var_3)))));
                arr_32 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_30 [(unsigned short)5] [(unsigned short)5] [i_10]);
                var_24 += ((/* implicit */signed char) arr_18 [i_10] [i_8] [16]);
            }
            for (int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) 13834605990502410569ULL)) ? (min((163019891), (var_5))) : (((/* implicit */int) (signed char)-74)))) : (max((((/* implicit */int) arr_3 [i_0])), (arr_9 [i_0 + 2] [9] [6U] [i_0 + 2])))))));
                    var_26 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_8 + 3] [i_8 + 2])) && ((_Bool)1))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_2 [10] [i_8]) || (((/* implicit */_Bool) var_9))))), (max((((/* implicit */unsigned int) (signed char)86)), (15U))))))));
                    arr_38 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_11] [i_0]))))) == (arr_10 [i_0 + 4] [i_0]))), (min(((!(((/* implicit */_Bool) var_1)))), (arr_8 [i_8] [i_8] [i_0])))));
                }
                for (signed char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    arr_43 [i_0] [i_8] [i_8 + 1] [i_8] = ((/* implicit */unsigned int) (((_Bool)1) ? (((4777325430751961519ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53296))))) : (max((((/* implicit */unsigned long long int) arr_24 [i_13] [i_13])), (((arr_8 [i_0] [i_8 - 1] [i_0]) ? (var_11) : (((/* implicit */unsigned long long int) arr_37 [i_13] [i_8] [i_8] [i_0]))))))));
                    var_27 = ((/* implicit */int) min((var_27), (arr_13 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1])));
                    arr_44 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_13]), ((-2147483647 - 1))))) ? ((~(((((/* implicit */_Bool) -463881013)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (signed char)52)))))) : ((~(((/* implicit */int) (unsigned short)17808))))));
                }
                for (signed char i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12239))));
                    arr_47 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_8 + 3])) ? (((/* implicit */int) var_0)) : (arr_1 [i_0 + 1] [i_8 + 3])))) <= (min((((/* implicit */unsigned int) var_10)), (max((((/* implicit */unsigned int) (signed char)-46)), (var_6)))))));
                }
                var_29 ^= ((/* implicit */_Bool) ((min((arr_17 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 1] [i_0 - 1] [i_0]), (arr_17 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0] [i_0 + 3] [i_0 - 1] [i_8]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_46 [i_0 - 1] [i_0 + 4] [i_0 + 2] [i_8 + 3] [i_11] [i_11])) : (((/* implicit */int) arr_46 [i_0] [i_0 + 3] [i_0 + 1] [i_8 + 2] [i_11] [i_8 + 2])))))));
                arr_48 [i_8] [i_0] = ((((arr_36 [i_8] [i_8]) + (2147483647))) >> (((min((((((/* implicit */_Bool) arr_0 [i_11])) ? (arr_9 [i_11] [i_11] [i_8 + 2] [i_0]) : (var_8))), (max((var_1), (((/* implicit */int) arr_42 [i_0 + 2] [9] [i_11] [i_11])))))) - (874566537))));
                arr_49 [i_8] [i_0] = ((/* implicit */unsigned int) -2147483645);
            }
            arr_50 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (max((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])), (var_11))), (((/* implicit */unsigned long long int) arr_27 [i_0 + 3] [i_0 + 3] [i_8 + 1]))))));
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            arr_53 [i_0] [i_15] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)712))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 1507682785))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (_Bool)1))));
            var_32 = ((/* implicit */unsigned short) arr_52 [i_0] [0] [i_0]);
        }
    }
    /* vectorizable */
    for (signed char i_16 = 4; i_16 < 17; i_16 += 2) 
    {
        arr_58 [i_16] [i_16] = ((/* implicit */int) (_Bool)1);
        var_33 = ((/* implicit */int) ((826788945167962054ULL) - (((/* implicit */unsigned long long int) arr_41 [i_16 + 1] [i_16 + 1] [i_16] [i_16 - 1] [i_16 - 4] [i_16]))));
        arr_59 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_17 [i_16 - 4] [i_16 - 1] [i_16] [(_Bool)1] [i_16 - 4] [i_16] [i_16]))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_16 - 4] [i_16 - 3] [i_16 - 3])) - (((/* implicit */int) arr_35 [i_16 - 1] [17] [i_16 - 4]))));
        /* LoopSeq 1 */
        for (int i_17 = 1; i_17 < 15; i_17 += 4) 
        {
            arr_63 [i_16 - 3] = ((/* implicit */unsigned short) ((arr_25 [i_17 + 3] [i_16 - 4] [i_16]) ? (((/* implicit */int) arr_25 [i_17 + 3] [i_16 - 4] [(signed char)8])) : (((/* implicit */int) arr_25 [i_17 + 3] [i_16 - 4] [i_17 + 2]))));
            arr_64 [(unsigned short)2] [i_17 + 3] = (-(((/* implicit */int) (unsigned short)8191)));
        }
    }
    var_35 = ((/* implicit */_Bool) (~(var_5)));
    var_36 ^= ((/* implicit */_Bool) (~(463881015)));
}
