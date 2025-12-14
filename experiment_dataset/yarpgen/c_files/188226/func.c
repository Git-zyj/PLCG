/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188226
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
    var_18 = ((/* implicit */int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_17)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : ((-(var_17)))));
            arr_5 [i_1] [i_1] = ((/* implicit */int) arr_0 [i_1 - 2]);
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (arr_4 [i_0] [i_2] [i_2 + 1]) : (((/* implicit */long long int) -931879124))));
                            var_20 = ((/* implicit */int) (+(var_15)));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_21 = ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5] [i_5] [i_1] [i_5])) ? (arr_11 [i_5 + 3] [12] [i_5] [i_1] [i_5]) : (arr_11 [i_5 + 3] [i_5] [i_5] [i_1] [i_5]));
                            var_22 = ((/* implicit */unsigned long long int) (-(var_17)));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_5] [i_0] [i_3] [i_5]))));
                            arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [15LL] [20LL] [i_5 - 1] [i_5] [20LL] [i_5])) ? (arr_8 [i_2] [i_3] [i_5 + 3] [i_5 + 3] [i_5] [i_5 + 1]) : (arr_8 [i_2] [i_2] [i_5 + 1] [i_5] [i_5] [i_5])));
                        }
                        for (int i_6 = 4; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((arr_18 [i_2 + 3] [i_3]) / (((/* implicit */long long int) arr_2 [i_6 - 3]))));
                            var_25 = ((/* implicit */int) ((arr_0 [i_1 + 2]) / (arr_0 [i_1 - 2])));
                            arr_19 [12ULL] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((2147483647) != (-931879124)));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_17 [18LL] [4] [4] [18LL]))));
                            var_27 = ((/* implicit */int) ((((/* implicit */long long int) 931879121)) - (var_7)));
                        }
                        for (int i_7 = 4; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_28 = (~((+(1996720135739276451ULL))));
                            var_29 = ((/* implicit */long long int) max((var_29), (arr_3 [i_2] [i_3] [i_3])));
                            var_30 ^= ((/* implicit */int) ((8386581104817973040LL) >> (((var_10) + (559744760750690313LL)))));
                        }
                        var_31 = ((((/* implicit */long long int) ((((/* implicit */_Bool) 10603075439260068025ULL)) ? (arr_17 [i_3] [i_1] [i_1] [i_0]) : (-2147483636)))) - (arr_0 [i_3]));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                arr_25 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_8 - 1] [i_8] [i_8 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 460327880)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_24 [i_0] [i_1 - 2] [i_8]))))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [10ULL] [4ULL])) ? (((/* implicit */long long int) var_3)) : (var_17)))) ? (-1255506346) : (((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) var_3))))))))));
                    var_33 = ((/* implicit */long long int) (~(8759954154803362734ULL)));
                }
                for (int i_10 = 3; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_32 [i_8] [i_8 + 1] [i_8] [2LL] [i_1] = (-(var_17));
                        var_34 = ((((/* implicit */unsigned long long int) var_5)) / (arr_1 [i_10]));
                        var_35 = ((/* implicit */long long int) 10603075439260068025ULL);
                        var_36 = (~(arr_20 [i_1] [i_1 - 1] [i_1] [9ULL] [i_1] [i_1 + 2]));
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) 8126464)) ? (arr_30 [i_8 - 1] [i_1 + 1] [i_10 - 2] [i_10] [7LL]) : (arr_21 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_10 - 1] [12] [i_12] [i_10 - 1])));
                        arr_37 [i_1] [i_8] [i_0] [i_1] = ((/* implicit */int) var_15);
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_1 + 2] [5] [i_1] [i_10 - 3]))));
                        arr_38 [i_12] [i_1] [i_1] [i_10 + 4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(931879123)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_10 + 4] [i_1] [i_0])))))) : (((((/* implicit */_Bool) arr_34 [i_12] [i_1] [i_12])) ? (6981245177387812694LL) : (arr_4 [i_8] [i_8] [i_1 - 2])))));
                    }
                    arr_39 [15ULL] [i_0] [15ULL] [i_1] [11ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_8 - 1])) ? (arr_1 [i_8 - 1]) : (((/* implicit */unsigned long long int) arr_29 [i_10 - 2] [i_8 - 1] [i_1 + 2]))));
                }
            }
            for (int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                var_39 = ((/* implicit */long long int) (~(arr_33 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1])));
                var_40 = ((arr_30 [i_0] [i_0] [14LL] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) 385649666)));
                var_41 = ((/* implicit */long long int) min((var_41), (((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 2] [i_1 + 1])) ? (arr_42 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1]) : (arr_42 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (~(arr_36 [i_13] [i_13] [i_13] [i_1 - 2] [i_1 - 2] [0LL] [i_1]))))));
            }
        }
        for (unsigned long long int i_14 = 4; i_14 < 18; i_14 += 3) 
        {
            var_43 = ((/* implicit */long long int) (~(arr_23 [16] [i_14 + 2])));
            var_44 += ((/* implicit */unsigned long long int) arr_42 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 3]);
            var_45 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1237796075))))) << ((((~(arr_43 [i_14]))) + (1353757808)))));
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned long long int) -667711023);
        }
        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        var_47 = ((/* implicit */int) (~(536870911ULL)));
        var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 502270307))))) + (((/* implicit */int) ((min((3033620820098434843LL), (3162976447810569170LL))) >= (max((var_10), (((/* implicit */long long int) var_4)))))))));
    }
    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) var_1))));
}
