/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160741
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_4), (((/* implicit */short) (_Bool)0))))))) : (((/* implicit */int) (unsigned char)157))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) | (2123300852)));
                var_18 += ((/* implicit */unsigned short) (-(-2123300825)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)28)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) % (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (16227141174019824896ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)255))) : (var_14))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((max((arr_6 [4]), (((/* implicit */long long int) (short)28)))), (((((/* implicit */_Bool) var_4)) ? (arr_6 [(short)14]) : (var_5))))))));
        var_22 = ((/* implicit */unsigned long long int) min((arr_6 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 1276246731U))) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_8)))))));
        arr_7 [i_2] = (unsigned char)164;
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_10 [i_2] [i_3 + 1] = ((/* implicit */_Bool) -2123300825);
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_23 = ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_2])) : (1356618097))) & (((/* implicit */int) (_Bool)1)))) & (max((arr_8 [i_3 + 1] [i_4]), (((((/* implicit */_Bool) 3018720583U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0)))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_2] [i_3 + 1]))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) >= (3018720550U)))))))));
                    arr_17 [i_2] [i_2] [i_4] [i_5] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))))), (((unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)34))))) ? (min((((/* implicit */int) var_16)), (arr_8 [i_2] [i_3]))) : (arr_13 [i_3 + 1] [i_4 + 1] [i_4] [i_4])))) : (((max((72057594037927936ULL), (((/* implicit */unsigned long long int) (unsigned short)14504)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((6173095082866808240LL) < (((/* implicit */long long int) ((/* implicit */int) var_16)))))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((1007549875520740493LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (arr_11 [i_2] [i_2])));
                    var_26 = ((/* implicit */int) ((max((((((/* implicit */_Bool) 2123300829)) ? (1007549875520740493LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((arr_13 [i_4] [i_4] [i_4 + 1] [i_4 + 1]), (((/* implicit */int) var_0))))))) - (min((min((((/* implicit */long long int) var_8)), (arr_6 [i_2]))), (((/* implicit */long long int) ((int) var_15)))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_3)))), (((((/* implicit */_Bool) arr_19 [i_3 + 1] [i_4 + 2])) ? (arr_9 [(_Bool)1] [i_3 + 1]) : (arr_9 [(signed char)6] [i_3 + 1]))))))));
                }
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (517670786)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)21507)) : (-2123300829))) : (((((/* implicit */_Bool) -2123300827)) ? (((/* implicit */int) (_Bool)1)) : (-517670799)))))) ? (((/* implicit */int) (unsigned short)17)) : ((-2147483647 - 1))));
                var_29 *= (-(((((/* implicit */int) (unsigned char)244)) << (((((((arr_15 [(_Bool)0] [(_Bool)0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)127)))) + (16669))) - (25))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (short)32767)), (arr_11 [i_2] [i_3])))))) ? (var_5) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_2] [i_3 + 1])) : (((/* implicit */int) arr_18 [i_2] [i_3 + 1] [i_4 - 1] [i_4 - 1])))))));
            }
            for (short i_7 = 4; i_7 < 16; i_7 += 3) 
            {
                arr_24 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_23 [i_3] [i_3] [i_2] [i_2]) % (((/* implicit */int) var_11))))) ? (max((((((/* implicit */int) var_7)) ^ (7))), (((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 1] [i_2])))) : (((/* implicit */int) max((max((var_11), ((unsigned char)111))), (max((var_7), (((/* implicit */unsigned char) (signed char)108)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    arr_27 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] &= ((max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4686068634382700588LL))), (((/* implicit */long long int) -782533905)))) >= (((/* implicit */long long int) max((((/* implicit */int) min((var_8), ((_Bool)0)))), (arr_23 [i_3 + 1] [i_3 + 1] [2U] [i_7 + 1])))));
                }
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_3))), (((((/* implicit */_Bool) arr_11 [i_9] [i_7 - 2])) ? (-950815066) : (((/* implicit */int) (_Bool)1))))));
                    var_33 = ((/* implicit */unsigned char) 3581063978U);
                    var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_7 + 1] [i_9])) : (((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_7 - 1] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    arr_32 [i_2] [i_3 + 1] = ((/* implicit */unsigned int) var_5);
                }
                var_35 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) arr_8 [i_3 + 1] [i_2])), (4095U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_3 + 1] [i_7 + 1])) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_3 + 1] [i_2]))))));
                var_36 = arr_8 [i_2] [i_2];
            }
            arr_33 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) ((((arr_11 [i_2] [i_3 + 1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_15)) - (23331)))))) : (var_1)));
        }
        arr_34 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((unsigned int) arr_26 [i_2] [i_2] [i_2]))) : (arr_9 [i_2] [i_2])))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -599677789)) / (var_14)))) ? (((/* implicit */unsigned long long int) -8313292325578581196LL)) : (var_1)))));
    }
}
