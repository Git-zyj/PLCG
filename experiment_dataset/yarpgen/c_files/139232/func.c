/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139232
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
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_4)))) ? ((-(arr_0 [i_0]))) : (((unsigned int) var_2))))) ? (((arr_2 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_0 [i_0]))) + (2147483647))) >> ((((-(arr_0 [i_0]))) - (527330501U))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_16 |= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((arr_4 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))), (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_2 [15U]))))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
            var_17 = ((/* implicit */short) max(((-(arr_5 [16U] [i_1 - 1]))), (arr_5 [i_1 + 1] [i_0])));
            var_18 = ((/* implicit */int) (((!(((((/* implicit */_Bool) arr_2 [i_1])) && (arr_1 [i_0]))))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min((arr_0 [i_0]), (arr_5 [i_0] [i_1]))))))));
            arr_7 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) min((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 + 1] [i_1 + 3])))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) + (max((arr_4 [i_0]), (arr_4 [i_1])))))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_19 &= ((((/* implicit */_Bool) ((arr_0 [i_0]) << (((arr_0 [i_0]) - (3767636764U)))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_2] [i_0]))));
            var_20 = min((((max((arr_4 [i_2]), (((/* implicit */long long int) arr_0 [i_2])))) << (((((/* implicit */int) arr_6 [i_0])) - (9988))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0])), (var_4)))) && (((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_2])))))))));
            var_21 = ((/* implicit */int) (-(min((min((((/* implicit */unsigned int) (short)11189)), (24460280U))), (((/* implicit */unsigned int) arr_8 [i_0]))))));
        }
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            var_22 &= ((/* implicit */short) arr_9 [i_0] [i_0] [i_3 + 2]);
            var_23 = ((/* implicit */unsigned int) ((long long int) max((arr_11 [i_0] [i_0] [i_3 + 1]), (arr_11 [i_0] [i_0] [i_3 + 2]))));
            arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0]))))), (min((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_3])))))))));
            arr_14 [i_3] [(_Bool)1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_2 [i_3 + 2])) && (((/* implicit */_Bool) arr_2 [i_3 + 1]))))));
        }
        arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_13)))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))), (min((arr_2 [(short)9]), (((/* implicit */unsigned long long int) var_12))))))));
        arr_16 [17] = ((/* implicit */int) (-(((arr_12 [i_0]) << (((arr_12 [i_0]) - (1587376663U)))))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_4]);
        var_24 = arr_9 [i_4] [i_4] [i_4];
    }
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_21 [i_5]), (((/* implicit */short) var_2))))) ? (arr_22 [i_5 + 1] [i_5 + 2]) : (min((arr_22 [i_5 + 2] [i_5 + 2]), (((/* implicit */unsigned int) arr_21 [i_5 + 1]))))))) ? (min((((/* implicit */unsigned int) arr_20 [(signed char)1] [i_5 - 1])), (((unsigned int) arr_21 [i_5])))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) ((short) arr_20 [i_5] [i_5 - 1]))))))));
        arr_23 [i_5] [i_5] = ((/* implicit */long long int) arr_21 [i_5]);
        arr_24 [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_22 [i_5] [i_5]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_20 [i_5] [17LL])) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_22 [i_5 - 1] [(_Bool)1])))))) : (((((/* implicit */_Bool) ((arr_22 [i_5 - 1] [(short)14]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 2]))) : (var_14)))));
        arr_25 [i_5] [21U] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_5 - 1]))));
        arr_26 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_5 + 2] [i_5 - 1]), (arr_20 [i_5 + 1] [i_5]))))) <= (((arr_22 [i_5 + 1] [i_5 + 1]) * (arr_22 [i_5 + 2] [i_5 - 1])))));
    }
    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        var_26 = ((/* implicit */_Bool) max((((arr_22 [i_6] [i_6 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))))), (((/* implicit */unsigned int) arr_27 [i_6 - 1] [i_6 + 3]))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((8207423623500288098ULL), (((/* implicit */unsigned long long int) 3571370415U))))) ? (((((arr_27 [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6]))) : (var_6))) ^ (max((arr_4 [i_6 - 1]), (((/* implicit */long long int) arr_21 [i_6])))))) : (((/* implicit */long long int) min((arr_17 [i_6]), (((/* implicit */unsigned int) ((short) 938575559U))))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    {
                        var_28 = arr_28 [i_8];
                        var_29 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) var_14)), (arr_18 [i_6]))) >> ((((~(var_0))) - (1159860970))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_6])) + (((/* implicit */int) var_8))))) ^ (max((arr_35 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_20 [i_7 + 1] [i_6]))))))));
                        arr_37 [i_6] [i_6] [i_6] [i_8] [i_9 + 1] |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_27 [i_7 - 1] [i_7 - 1])), (((((/* implicit */_Bool) arr_35 [i_6] [i_7] [i_7] [i_7])) ? (arr_12 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6]))))))), (((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) arr_21 [i_7])), (var_14)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((min((((/* implicit */int) arr_21 [i_7])), (var_10))), (((/* implicit */int) ((arr_5 [i_8] [i_6 + 2]) <= (arr_12 [i_6]))))))) * (((var_1) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))))))));
                    }
                } 
            } 
        } 
        var_31 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_6 - 2])) && (((/* implicit */_Bool) ((arr_5 [i_6] [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6])))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1)))))) : (max((((/* implicit */unsigned long long int) min(((signed char)77), ((signed char)127)))), (arr_35 [i_6] [i_6 + 2] [i_6 + 2] [i_6])))));
    }
    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((-117132359), (((/* implicit */int) (short)-15631)))))));
    var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_11)), (var_5)))))));
    var_34 = ((var_0) % (((((var_0) + (2147483647))) >> (((((var_6) / (((/* implicit */long long int) var_13)))) + (6754930268LL))))));
}
