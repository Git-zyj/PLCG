/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112343
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = arr_1 [i_0];
        arr_2 [i_0] = ((((/* implicit */_Bool) var_8)) ? (var_3) : (arr_0 [i_0] [i_0]));
    }
    var_20 = ((/* implicit */int) min((var_20), (var_11)));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(arr_9 [i_1] [i_3] [i_3]))) : ((~(var_3)))));
                arr_10 [i_3] [3] = ((/* implicit */unsigned long long int) 1099511365632LL);
                var_22 = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                arr_11 [i_3] [i_2] = ((/* implicit */long long int) ((109965528) << (((11ULL) - (11ULL)))));
                arr_12 [i_3] [i_3] = arr_6 [i_1];
            }
            var_23 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) max((arr_7 [i_2 + 2] [i_1] [i_1]), (((/* implicit */long long int) var_18))))) * (((((/* implicit */unsigned long long int) var_13)) + (var_8)))))));
            var_24 = ((/* implicit */int) 7695182749696847570LL);
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_1] [i_1] = ((/* implicit */long long int) var_3);
            var_25 = ((/* implicit */long long int) arr_6 [i_4]);
            arr_16 [i_4] = ((/* implicit */unsigned long long int) (~(arr_14 [i_1])));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? ((~(var_16))) : (((/* implicit */int) ((var_5) >= (((/* implicit */long long int) arr_6 [i_4])))))))) ? (min((min((((/* implicit */unsigned long long int) var_9)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [7ULL])) ? (arr_13 [i_1] [i_1] [i_1]) : (var_18)))))) : (((/* implicit */unsigned long long int) arr_4 [3ULL]))));
        }
        for (int i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((7695182749696847570LL) >= (((/* implicit */long long int) 953821616))))), (var_2)))) ? (var_18) : (((/* implicit */int) (!(((((/* implicit */_Bool) 1125899906842620LL)) && (((/* implicit */_Bool) arr_6 [i_1])))))))));
            arr_19 [3LL] [4] [i_5] = ((/* implicit */unsigned long long int) arr_0 [8ULL] [i_5 + 1]);
        }
        arr_20 [i_1] [i_1] = arr_3 [i_1];
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) var_15)) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_22 [i_6] [i_6]) : (arr_21 [i_6]))))))) ? (((/* implicit */unsigned long long int) ((((((-1125899906842616LL) + (((/* implicit */long long int) arr_21 [i_6])))) + (9223372036854775807LL))) << (((((var_2) + (5872923296562168601LL))) - (33LL)))))) : (var_6));
        arr_23 [15LL] = var_10;
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_28 [i_6] [i_6] = ((((/* implicit */_Bool) ((arr_24 [i_6]) >> (((var_15) - (120285085)))))) ? (var_13) : (arr_25 [i_6] [i_6]));
            var_29 = ((/* implicit */int) max((var_29), (var_18)));
            arr_29 [8ULL] = ((/* implicit */unsigned long long int) arr_22 [8] [i_7]);
        }
        arr_30 [i_6] = ((/* implicit */unsigned long long int) var_15);
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-6855660441630292663LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (var_11))))));
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_31 = (~(((((/* implicit */_Bool) ((var_12) % (arr_33 [i_8])))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8])))))))));
        var_32 = ((int) ((((/* implicit */_Bool) max((arr_33 [i_8]), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) arr_33 [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) <= (var_13)))))));
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 3; i_10 < 19; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_44 [i_10] [17] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_10])) ? (((/* implicit */long long int) var_10)) : (var_13))))))), ((~((~(var_4)))))));
                    arr_45 [i_10 - 2] [i_10 - 2] [7ULL] [16LL] = var_16;
                    var_33 += ((/* implicit */int) ((((/* implicit */_Bool) -7695182749696847570LL)) || (((/* implicit */_Bool) -1125899906842637LL))));
                }
                arr_46 [i_9] [i_8] = ((/* implicit */unsigned long long int) arr_43 [i_10] [i_9] [i_9] [i_8]);
                var_34 = ((/* implicit */unsigned long long int) min((max((var_5), (arr_32 [i_9]))), (((var_13) / (arr_32 [i_8])))));
                arr_47 [3] [i_9] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8])) ? (((5548329149545738722LL) / (var_7))) : (((((/* implicit */long long int) -953821602)) / (var_2)))))) ? (((/* implicit */unsigned long long int) var_3)) : (arr_31 [i_10 + 1])));
            }
            arr_48 [i_9] [5ULL] = ((/* implicit */int) arr_32 [i_8]);
            var_35 = ((/* implicit */int) (~(8065489520567408595LL)));
        }
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_36 = arr_49 [i_12] [i_8] [14LL];
            arr_52 [i_8] [i_8] [i_8] = ((/* implicit */int) max(((-((~(1125899906842637LL))))), (((/* implicit */long long int) (+(arr_38 [7ULL] [i_8]))))));
            var_37 = ((/* implicit */unsigned long long int) (~((+(arr_35 [i_8] [i_12])))));
        }
        for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 3) 
        {
            /* LoopSeq 4 */
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_31 [4ULL]) : (((/* implicit */unsigned long long int) var_7))))) ? (arr_54 [i_8] [i_13] [i_14]) : (((/* implicit */unsigned long long int) var_15)))) >= (((/* implicit */unsigned long long int) (~(var_10))))));
                var_39 = ((/* implicit */long long int) var_14);
                var_40 = ((/* implicit */long long int) ((arr_33 [i_8]) >> (((((((/* implicit */_Bool) (+(arr_31 [i_8])))) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))) - (18446744072004410044ULL)))));
            }
            for (long long int i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) (+(var_14)));
                arr_60 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 956040441))))) ? ((~(min((((/* implicit */unsigned long long int) 953821602)), (3ULL))))) : (arr_31 [i_15])));
                var_42 = (-((~(arr_40 [i_13 + 1] [i_13 - 1]))));
            }
            for (long long int i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
            {
                var_43 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(arr_31 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (((/* implicit */long long int) arr_56 [i_8] [i_13 - 1] [i_13])))))) : (((((/* implicit */_Bool) 818014412)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 9195304869292937703LL)))))), (((/* implicit */unsigned long long int) var_18))));
                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 4054291244718110066ULL))))), (arr_33 [i_16])))) ? (arr_64 [16ULL] [i_13] [i_13] [i_8]) : (((/* implicit */unsigned long long int) var_15))));
            }
            for (long long int i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
            {
                arr_68 [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_5)))) <= (min((((/* implicit */unsigned long long int) (+(arr_62 [i_13] [i_13] [8ULL] [i_13])))), (var_1)))));
                var_45 = ((/* implicit */int) arr_34 [i_17] [i_13 - 2] [i_8]);
                var_46 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4211110277096023188LL)) ? (((/* implicit */unsigned long long int) 2147483621)) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 31)) : (var_12)))))) ? ((~((~(18446744073709551609ULL))))) : (((/* implicit */unsigned long long int) (~(7695182749696847556LL)))));
            }
            arr_69 [i_8] [i_13] [i_13 - 1] = ((/* implicit */long long int) ((unsigned long long int) -12));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_18 = 3; i_18 < 19; i_18 += 4) 
        {
            var_47 = ((/* implicit */int) ((arr_50 [9] [i_18]) != (arr_66 [i_8] [i_18 - 1] [17] [i_8])));
            var_48 = ((var_7) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_18] [i_18] [i_18] [i_18])) ? (var_18) : (arr_38 [i_8] [4ULL])))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_8] [11] [i_18] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_18] [i_8] [i_8])))))) : (var_12)));
        }
        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            var_50 = ((/* implicit */long long int) ((249149385) >> ((((((-2147483647 - 1)) - (-2147483622))) + (30)))));
            arr_77 [i_19] [i_8] [13ULL] = ((long long int) ((((/* implicit */_Bool) 9195304869292937696LL)) ? (13826115303131673778ULL) : (((/* implicit */unsigned long long int) -249149384))));
        }
        for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            var_51 = var_10;
            arr_80 [i_20] [i_8] = ((/* implicit */unsigned long long int) arr_62 [i_20] [i_20] [i_8] [i_20]);
            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_79 [i_20])) ? (((/* implicit */long long int) 0)) : (var_4)))) : (((((/* implicit */_Bool) arr_70 [i_8])) ? (((/* implicit */unsigned long long int) var_9)) : (var_6)))))) ? (((((/* implicit */_Bool) (+(var_7)))) ? ((~(arr_73 [i_8] [i_20]))) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) (~(max((arr_57 [i_8] [i_8] [2ULL]), (var_9)))))))))));
            arr_81 [i_8] [6LL] [6LL] = max((((/* implicit */unsigned long long int) ((arr_62 [i_20] [i_20] [i_20] [i_8]) << (((arr_42 [i_20] [i_20] [i_8] [i_8]) - (2987010664321153328ULL)))))), ((((~(1844649263203243854ULL))) & (var_1))));
            var_53 = var_11;
        }
        arr_82 [17] = var_4;
    }
}
