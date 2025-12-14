/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179206
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) var_2);
            arr_6 [i_0] [i_1] &= ((/* implicit */int) ((short) arr_3 [i_0]));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                arr_12 [i_0] [i_2] [6] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (arr_4 [i_3 - 1]) : (arr_4 [i_3 - 1])));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (~(((int) arr_11 [i_0] [i_2] [12LL]))));
                var_13 = var_9;
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */short) ((unsigned long long int) arr_3 [i_3 + 3]));
                arr_15 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2]);
            }
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) arr_10 [(signed char)7] [(short)0] [i_2])) + (2147483647))) << (((304810037) - (304810037))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_21 [i_0] [i_0] = ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_4])) == (((unsigned long long int) (_Bool)1)));
            arr_22 [i_0] [i_4] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
            var_14 -= ((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_0] [i_0]);
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_0] [i_4] [i_4])) : (arr_5 [i_0] [i_4])));
        }
        var_16 += ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_4 [i_5]) : (arr_4 [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) arr_9 [(unsigned short)6] [i_5] [i_5] [(unsigned short)6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1785865127))))) : (var_5))))));
        arr_26 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((int) arr_20 [i_5]))));
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_29 [i_6] = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_32 [4] [i_6] [i_7] &= ((/* implicit */unsigned long long int) -1785865127);
            arr_33 [i_7] = ((/* implicit */int) ((unsigned long long int) (+(arr_31 [i_6] [i_7]))));
            var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_27 [(unsigned short)0] [i_7])))) < (arr_31 [i_6] [20U]))) ? (arr_28 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_36 [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_35 [i_6] [i_8] [4])) > (((((/* implicit */_Bool) 3106199056896262208LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30483))) : (arr_31 [20LL] [20LL])))));
            var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (min((arr_28 [(unsigned short)2]), (((/* implicit */long long int) arr_34 [i_6] [i_8])))) : (arr_28 [i_8])))));
        }
    }
    var_20 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (min((var_10), (var_0)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3106199056896262208LL)) ? (904992206) : (-1785865137)));
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        arr_39 [i_9] = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) (~(arr_30 [(short)14] [(short)14]))))));
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((-1314303075), (1785865136)));
            arr_43 [i_10] [i_10] = max((max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32512))) == (-986185922221338943LL)))), (min((((/* implicit */int) arr_37 [i_9])), (arr_34 [(signed char)0] [i_9]))))), ((-(arr_34 [i_9] [i_10]))));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned long long int) (-(722196531)))), (((unsigned long long int) arr_27 [17] [17]))))))));
                var_24 = (~((-((+(((/* implicit */int) arr_40 [i_9] [i_10] [i_11])))))));
                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_30 [i_10] [i_10]))))));
            }
            /* LoopSeq 1 */
            for (signed char i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_35 [i_12 + 4] [i_10] [(signed char)9])) ? (((/* implicit */unsigned long long int) arr_35 [i_12 + 4] [i_12] [i_12 + 2])) : (arr_42 [i_12 + 1] [i_12 + 4]))), (arr_42 [i_12 + 3] [i_12 + 1]))))));
                arr_50 [i_10] = ((/* implicit */_Bool) min((1021029413), (((int) var_6))));
                arr_51 [i_9] [i_10] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 3318192518720114528LL)) || (((/* implicit */_Bool) (signed char)103)))));
                var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(3411557169852614235LL)))), (min((((((/* implicit */_Bool) arr_27 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) 3411557169852614235LL)) : (var_6))), (((/* implicit */unsigned long long int) arr_28 [i_9]))))));
                arr_52 [i_12] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_45 [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) arr_28 [i_9])) : (var_7)))))) ? (((/* implicit */unsigned long long int) arr_27 [i_9] [(unsigned short)14])) : (max((arr_47 [11] [i_12 + 4]), (arr_47 [i_12] [i_12 + 3])))));
            }
        }
        for (int i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
        {
            var_28 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3318192518720114528LL)) ? (arr_48 [i_9] [20] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)26123))))))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((signed char) min((arr_31 [i_9] [6ULL]), (((/* implicit */unsigned int) arr_35 [i_9] [i_13] [i_13])))))));
            var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (((arr_38 [i_9] [i_13]) | (((/* implicit */unsigned long long int) arr_35 [i_9] [i_13] [i_13]))))));
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
        {
            arr_58 [i_14] = ((/* implicit */int) (short)10108);
            var_30 = ((/* implicit */unsigned int) ((unsigned long long int) (~(arr_42 [i_9] [i_9]))));
            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9])) ? (arr_35 [i_14] [i_9] [i_9]) : (arr_35 [i_9] [i_9] [i_14]))) ^ (((/* implicit */int) ((short) arr_35 [i_9] [i_9] [(short)20])))));
            var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1311430000)), (var_3)));
            var_33 += ((/* implicit */int) ((unsigned int) ((3949133612179733070ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1064491276)))))))));
        }
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_15])) ? (((/* implicit */int) ((_Bool) var_7))) : (max((arr_34 [i_15] [i_15]), (arr_34 [i_15] [i_15]))))))));
        var_35 += ((/* implicit */short) ((int) max(((!(((/* implicit */_Bool) arr_42 [i_15] [i_15])))), ((!(var_4))))));
    }
}
