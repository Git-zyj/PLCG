/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166524
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] &= ((/* implicit */_Bool) (-(arr_2 [i_0])));
                        arr_14 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) & ((((_Bool)0) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) * (((((unsigned int) var_15)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3 - 2])) : (((/* implicit */int) var_2)))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */_Bool) arr_10 [i_0] [7] [i_2] [12LL])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))))));
                        arr_16 [i_0] = (!(((_Bool) arr_6 [i_3 - 1] [i_0] [(unsigned short)5])));
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_6 [i_0] [i_0] [i_0]) || (arr_6 [i_0] [i_0] [i_0]))) ? (((arr_6 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_6 [i_0] [i_0] [i_0]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */int) (~(var_6)));
            var_17 &= ((/* implicit */unsigned int) ((arr_9 [i_0] [i_4] [i_4]) || (arr_9 [i_0] [i_0] [i_0])));
            var_18 = ((/* implicit */_Bool) var_12);
            var_19 = ((/* implicit */_Bool) ((arr_3 [i_4]) ? (arr_7 [10]) : (((/* implicit */int) var_7))));
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_24 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) arr_9 [i_0] [11U] [i_0])) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_0]))))) ? ((((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) + (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [(unsigned short)1])) - (((/* implicit */int) arr_11 [i_0] [i_5] [i_5]))))) ? (((/* implicit */int) ((_Bool) 1817660476))) : (((/* implicit */int) ((_Bool) var_12)))))));
            arr_25 [i_0] = ((/* implicit */_Bool) ((int) arr_1 [5]));
            var_20 -= ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) var_3)), (((unsigned int) var_14)))));
            var_21 = (~(((arr_7 [i_5]) - (arr_7 [i_0]))));
        }
        for (long long int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_23 [(unsigned short)9] [i_6 - 1])) ? (((/* implicit */int) var_11)) : (arr_2 [i_0]))))) ? (min((((var_11) ? (((/* implicit */int) arr_3 [i_0])) : (arr_7 [i_0]))), (((/* implicit */int) arr_10 [i_6 + 1] [11] [i_6] [i_6 + 1])))) : ((~(((var_15) ? (((/* implicit */int) arr_9 [i_6 + 1] [i_6 - 1] [i_0])) : (((/* implicit */int) arr_27 [i_6]))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        arr_35 [(_Bool)1] [i_6] [4LL] [i_8] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 1] [i_6 + 1] [i_6 + 1]))) % (arr_19 [(_Bool)1] [(_Bool)1] [i_0]))))));
                        arr_36 [(_Bool)1] &= (-(((/* implicit */int) (_Bool)1)));
                        var_23 = ((/* implicit */unsigned int) ((arr_30 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_6 + 1]) || (((/* implicit */_Bool) ((int) arr_28 [i_7 + 1] [i_6] [i_6 - 1])))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_24 = (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) arr_37 [i_9])), (var_0))))));
        var_25 |= ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_38 [(_Bool)1]), (arr_38 [8U]))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_4))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_10] [i_10] [i_10] [i_10])) | (((/* implicit */int) var_13))));
        var_28 = ((/* implicit */int) max((var_28), (((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned short)0))))));
        arr_42 [i_10] = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_19 [i_10] [i_10] [i_10])) == (var_0))) ? (((int) ((_Bool) var_3))) : (((((/* implicit */int) ((_Bool) arr_6 [i_10] [i_10] [i_10]))) ^ (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_8 [i_10] [(unsigned short)1])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_46 [4U] = ((/* implicit */unsigned int) (~(arr_44 [(_Bool)1] [i_11])));
        var_29 |= ((/* implicit */int) ((unsigned short) ((long long int) var_4)));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            var_30 = ((/* implicit */_Bool) var_0);
            /* LoopNest 2 */
            for (unsigned int i_13 = 2; i_13 < 19; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    {
                        var_31 = ((/* implicit */int) arr_47 [i_14]);
                        var_32 = (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (_Bool)0)));
                        arr_54 [i_14] [i_13 + 1] [i_12] [i_12] [i_11] [i_11] = ((/* implicit */_Bool) ((arr_52 [i_11] [i_12] [i_11] [19] [i_13 - 1] [i_11]) & (((var_9) ^ (var_9)))));
                        arr_55 [i_14] [i_13] [i_11] = ((/* implicit */int) arr_47 [i_11]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                for (unsigned int i_16 = 2; i_16 < 18; i_16 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_17 = 3; i_17 < 19; i_17 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)0)))) % (((/* implicit */int) arr_51 [i_16 - 1] [i_17 - 1]))));
                            arr_64 [i_17] [i_12] [i_17] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_10))))));
                            arr_65 [i_11] [i_11] [4] [i_11] [i_11] [i_17] = ((/* implicit */unsigned short) var_8);
                            arr_66 [i_17 + 1] [i_17] [i_16] [i_15] [i_17] [i_11] = ((/* implicit */unsigned short) (+(((unsigned int) var_14))));
                            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_47 [i_17 - 3]))));
                        }
                        for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            var_35 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (var_11)));
                            var_36 = (((~(((/* implicit */int) var_3)))) == (((((/* implicit */int) arr_43 [(_Bool)1])) | (((/* implicit */int) arr_49 [i_11])))));
                            var_37 |= ((/* implicit */int) var_2);
                            arr_71 [i_18] [i_15] [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_50 [i_11] [i_12] [(_Bool)1] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_18])))))) || (((/* implicit */_Bool) ((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                            arr_72 [i_12] [i_18] [i_12] [i_15] [i_12] [i_12] |= ((/* implicit */unsigned short) arr_48 [i_15]);
                        }
                        for (unsigned short i_19 = 2; i_19 < 19; i_19 += 2) 
                        {
                            var_38 -= ((/* implicit */_Bool) ((int) arr_61 [4]));
                            arr_75 [i_19] [i_19] [i_16] [(_Bool)1] [i_12] [i_11] = ((/* implicit */int) arr_45 [i_11] [i_16 + 1]);
                        }
                        arr_76 [i_16] [i_15] [i_12] [i_11] = ((/* implicit */long long int) ((var_15) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        var_39 |= (_Bool)1;
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_20 = 1; i_20 < 23; i_20 += 2) 
    {
        for (int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            {
                var_40 = ((/* implicit */_Bool) var_12);
                var_41 ^= arr_81 [i_20] [i_20] [i_20];
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -358060334699410761LL)))) ? (((/* implicit */int) (((!(var_11))) && (((((/* implicit */_Bool) 7776601429626409713LL)) && (((/* implicit */_Bool) (unsigned short)25881))))))) : (((/* implicit */int) ((unsigned short) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))));
}
