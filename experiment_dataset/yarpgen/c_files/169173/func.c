/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169173
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) var_14);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (15311792592982639224ULL)));
            arr_7 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)240))) != (13254521670386355312ULL));
        }
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) != (9223372036854775807LL)))), (max((var_3), (arr_4 [6U])))))) || (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) == (arr_4 [i_0]))), (((((/* implicit */_Bool) (short)-23134)) && (((/* implicit */_Bool) (unsigned char)185))))))));
        var_17 += ((/* implicit */_Bool) 1402764808);
        var_18 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) ((var_0) <= (((/* implicit */long long int) var_1))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)71)) >= (((/* implicit */int) (unsigned short)65527))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    arr_15 [i_4 + 2] = ((((/* implicit */int) (short)-32185)) == (((int) arr_10 [i_2] [i_2])));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((min((min((var_15), (((/* implicit */unsigned int) (unsigned char)26)))), (((arr_18 [i_2] [i_2] [i_2] [i_2]) * (3571677565U))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
                        arr_20 [i_2] [i_3] [i_4] [i_5 + 4] = ((/* implicit */unsigned int) min((2199006478336LL), (((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned char)214))) | (((/* implicit */int) arr_17 [i_2] [(unsigned char)18] [i_2] [i_2] [i_2] [(unsigned char)14])))))));
                    }
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((0U), (((/* implicit */unsigned int) (_Bool)0)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) 1882906373)) > (var_4))))));
                        }
                        arr_25 [i_2] [i_6] [i_2] [i_6] [(unsigned char)8] [i_6] = min((((min((14209890347752698800ULL), (((/* implicit */unsigned long long int) (short)-6112)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) > (1345242297U))))))), (((/* implicit */unsigned long long int) var_2)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            arr_29 [22ULL] [i_3] [i_3] [i_4 + 1] [i_8] [i_3] [i_8] = ((/* implicit */_Bool) var_12);
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) - (2199006478340LL))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
                            arr_34 [i_2] [i_2] [i_9] = ((/* implicit */short) var_11);
                            var_24 = ((/* implicit */signed char) ((unsigned char) var_2));
                        }
                        for (short i_10 = 2; i_10 < 19; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)32761)))))));
                            arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) 534773760);
                            arr_38 [i_2] [22U] [i_4 + 1] [i_6] [i_10] = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)46714))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_7))))))))));
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        arr_42 [i_2] [i_11] = arr_28 [i_2] [i_3] [i_11] [i_11] [11ULL] [i_2] [i_3];
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((_Bool) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))));
                        arr_43 [(_Bool)1] [i_11] [13] [i_3] [i_11] [i_2] = ((/* implicit */unsigned long long int) (short)1941);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        arr_46 [i_12] [(unsigned short)16] [18ULL] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((((/* implicit */int) (unsigned char)204)) == (((/* implicit */int) (unsigned char)137)))), ((!(((/* implicit */_Bool) var_3))))))) > (((/* implicit */int) ((2147483647) != (max((-1071387465), (((/* implicit */int) var_5)))))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) -812651466575817423LL))));
                    }
                }
                arr_47 [i_2] = ((/* implicit */unsigned long long int) max((3471212239U), (((/* implicit */unsigned int) (unsigned short)65527))));
                arr_48 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_4);
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((arr_35 [8ULL] [i_14] [i_14] [i_13] [i_13] [i_2] [i_2]) * (((/* implicit */long long int) ((int) (_Bool)1))))))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)65527), ((unsigned short)65527)))) < (((/* implicit */int) var_9))));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((1624111778U) != (((/* implicit */unsigned int) -1074332782))))))), (min((4381518683094716271ULL), (((/* implicit */unsigned long long int) min((2980702299U), (((/* implicit */unsigned int) var_7))))))))))));
                                arr_59 [i_3] [i_3] [i_15] &= ((/* implicit */unsigned long long int) ((int) ((unsigned char) ((var_14) - (((/* implicit */unsigned long long int) var_15))))));
                                arr_60 [i_2] = ((/* implicit */_Bool) 4294967295U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_14));
}
