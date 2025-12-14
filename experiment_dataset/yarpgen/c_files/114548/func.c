/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114548
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
    var_13 = ((/* implicit */int) var_11);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_3 [9U] = ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [13U] [i_0]));
        var_14 = ((/* implicit */signed char) var_9);
        var_15 -= arr_0 [i_0 - 1];
        var_16 = ((/* implicit */int) arr_1 [i_0 + 1] [i_0]);
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1])))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 158439317)) ? (((((/* implicit */int) var_11)) >> (((7562209241625920465LL) - (7562209241625920461LL))))) : ((-(((/* implicit */int) var_8)))))), (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [i_1]))))))))))));
    }
    for (int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((var_11) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_8 [i_2] [(signed char)6]))))) : (((((/* implicit */int) arr_12 [i_2 + 1])) / (-1533402780)))));
            var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -7562209241625920466LL)) ? (158439317) : (((/* implicit */int) (signed char)17))))));
            arr_13 [i_3] = ((/* implicit */unsigned long long int) var_5);
        }
        arr_14 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(8811320665110904326LL)))), (max((max((var_2), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_12 [i_2 - 1]))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -158439317)) > (18446744073709551615ULL)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) 11381282920442308399ULL)) ? (((/* implicit */unsigned long long int) -1211074278)) : (10199078006299839080ULL)))))));
        var_22 = 768587564;
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_23 = ((/* implicit */int) max((var_23), (min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_4] [i_4])))) | (((/* implicit */int) var_0)))), (((/* implicit */int) ((((var_0) ? (var_9) : (((/* implicit */unsigned long long int) 158439317)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
            var_24 += ((/* implicit */unsigned long long int) 8811320665110904326LL);
        }
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 2) 
        {
            arr_22 [i_4] [i_6] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */unsigned char) arr_0 [i_6])), (min((var_7), (((/* implicit */unsigned char) (_Bool)1))))));
            arr_23 [i_4] [i_6] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_4] [i_4])), (max((max((((/* implicit */unsigned long long int) -8811320665110904326LL)), (10199078006299839080ULL))), (((/* implicit */unsigned long long int) 768587564))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    arr_30 [i_4] [i_4] [(_Bool)1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6 - 2] [i_6])) ? (((/* implicit */unsigned long long int) -7562209241625920465LL)) : (arr_1 [i_4] [i_6 - 4])));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_33 [i_7] = ((/* implicit */int) ((unsigned int) arr_20 [i_8 + 2] [i_6 - 3] [i_7]));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_6 [i_8 - 2])) : (arr_16 [i_4]))))));
                        arr_34 [i_9] [i_8] [i_4] [i_4] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_26 [i_4] [5] [4ULL] [5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) + (2147483647))) << (((arr_32 [i_7] [i_6] [1ULL] [i_6 + 1] [i_8 - 1]) - (18264184876017992945ULL)))));
                    }
                }
                var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2499059120693679160LL)) ? (arr_15 [i_4]) : (((((/* implicit */_Bool) 8083875852742951484LL)) ? (812105744U) : (4294967295U)))));
            }
        }
        var_27 = ((/* implicit */int) min((var_27), (max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_11 [(_Bool)1] [i_4]))))))), (((((/* implicit */_Bool) var_6)) ? (((int) var_10)) : (((/* implicit */int) (unsigned char)90))))))));
        arr_35 [i_4] [i_4] = ((/* implicit */signed char) arr_0 [i_4]);
    }
    var_28 = ((/* implicit */unsigned long long int) var_7);
    var_29 ^= (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) -1)) ? (var_2) : (((/* implicit */unsigned long long int) 1606449170)))))));
}
