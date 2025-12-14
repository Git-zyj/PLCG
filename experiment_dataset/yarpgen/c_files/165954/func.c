/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165954
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)47);
    var_19 *= ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_1 - 2] [i_0]))))))), (var_7));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_15) << (((/* implicit */int) (_Bool)1))))) ? (var_8) : (((unsigned int) arr_4 [i_0] [i_1 - 2]))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [4ULL] [4ULL] [i_3])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (((((_Bool)0) && (((/* implicit */_Bool) 1015868360701676118LL)))) || (((((/* implicit */_Bool) 9007035092816436793LL)) || (arr_10 [i_3] [(_Bool)1] [i_1 - 1] [(unsigned char)1] [i_0] [(unsigned char)1])))));
                        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_0) >= (var_4)))) & (((/* implicit */int) ((var_5) != (var_14))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)18)))) ? ((-(((/* implicit */int) (signed char)70)))) : (arr_14 [i_4 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1])));
                            var_22 += ((/* implicit */long long int) ((arr_10 [3] [i_4 - 1] [i_4 + 2] [i_3] [i_1 - 3] [i_0]) ? (((/* implicit */int) arr_10 [i_1] [i_4] [i_4 + 2] [i_1] [i_1 - 3] [i_1])) : (((/* implicit */int) arr_10 [i_1 - 3] [(_Bool)1] [i_4 + 2] [i_1 - 3] [i_1 - 3] [i_1]))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_8) >> (((arr_8 [i_0] [4ULL] [i_1 - 2] [i_5] [i_5]) - (8151406492655454282LL))))))));
                        var_24 = ((/* implicit */unsigned int) var_17);
                        var_25 = ((_Bool) (signed char)-47);
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_1 + 3] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_13) : (var_11)));
                        var_26 ^= ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_4)))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_1 + 3] [i_1 + 3] [i_1 - 2]))) : (var_15)));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) (+(var_14)));
                            var_29 = ((/* implicit */signed char) (_Bool)1);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) ^ (776268628U)));
                            var_31 *= arr_2 [i_6] [i_6];
                        }
                        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 33554431ULL)) ? (-1015868360701676118LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_20 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 3]))));
                            arr_29 [i_0] [i_0] [i_0] [i_1] [i_8] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_6] [i_1] [i_2] [i_0])) : (((/* implicit */int) var_2))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) & (var_8)))) & (((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0]))))));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_0] [13ULL] = ((/* implicit */unsigned char) ((arr_9 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (8867163547957637ULL)));
                }
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    arr_33 [i_1] [10LL] [i_1] = var_0;
                    arr_34 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)195)), (min((-586675853), (((/* implicit */int) ((8867163547957651ULL) >= (((/* implicit */unsigned long long int) 3781802821615581616LL)))))))));
                }
                for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    arr_37 [i_1] = ((((/* implicit */_Bool) max((arr_0 [i_1] [i_1 + 3]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1 + 2])) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) arr_0 [i_1 + 3] [i_1 - 3])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_40 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_7));
                        arr_41 [i_1] [i_10] [i_1] [i_1] = ((/* implicit */signed char) var_8);
                        var_34 = ((/* implicit */int) arr_24 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 3]);
                    }
                    var_35 = ((/* implicit */_Bool) var_1);
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (1048572U)));
                    var_37 = arr_8 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1];
                }
            }
        } 
    } 
}
