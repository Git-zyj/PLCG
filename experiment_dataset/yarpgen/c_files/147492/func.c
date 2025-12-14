/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147492
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_7 [i_2])) ? (245250903) : (((/* implicit */int) (signed char)18)))))), (((/* implicit */int) arr_0 [i_2]))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        arr_11 [(_Bool)1] [(_Bool)1] [i_0] [i_0] |= ((/* implicit */_Bool) min((min((((var_12) ? (arr_4 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-19))))))), (14347347561541664319ULL)));
                        arr_12 [i_0] = (+((-((+(2064451968))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) var_5);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)0] [i_1] [i_2] [i_2]))) % (arr_4 [i_1 + 2] [i_4])))));
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_10 [i_1 - 1]) << (((var_0) - (4037036163409600855ULL)))));
                        arr_17 [i_0] [i_0] [1ULL] [(unsigned char)2] [(unsigned char)19] &= ((/* implicit */unsigned long long int) (signed char)-19);
                        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [13] [16ULL] [i_1]))) : (var_0)))));
                        var_21 = ((/* implicit */unsigned char) arr_10 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))), (max((((/* implicit */int) arr_15 [i_1 + 2] [i_1] [(_Bool)1] [i_1 + 1] [i_1 - 1])), ((+(((/* implicit */int) var_4))))))));
                        arr_20 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
            } 
        } 
        var_23 = (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_19 [i_0]))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_6] [i_6]))) >> ((((+(arr_4 [i_6] [i_6]))) - (642116807459583226ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
            {
                {
                    arr_27 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */int) arr_8 [i_6]);
                    arr_28 [(_Bool)1] [0] [i_6] |= ((/* implicit */int) arr_5 [i_8 - 1] [i_8 - 2]);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_9]))));
            var_27 |= ((arr_23 [i_6]) == (((/* implicit */unsigned long long int) arr_26 [i_6] [i_6] [i_9])));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_28 = ((/* implicit */short) arr_7 [i_6]);
                        arr_38 [i_11] [i_6] [2] [(_Bool)1] [i_11] [i_11] = ((((_Bool) min((((/* implicit */int) var_16)), (var_5)))) ? (var_5) : (((int) min((((/* implicit */signed char) arr_14 [i_11] [i_6])), ((signed char)-108)))));
                        arr_39 [i_6] [i_6] [i_6] [i_11 - 1] [i_11] [i_12] |= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) 12648890290588939798ULL)))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_0 [i_6])), (arr_19 [i_6])))), (((var_0) * (arr_10 [i_6])))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (short i_14 = 1; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [(short)5])) || (((/* implicit */_Bool) ((arr_1 [i_14] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (5797853783120611817ULL))))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_34 [(short)18] [i_13] [i_6] [i_15])) ? (((/* implicit */int) var_10)) : (1892275374))) > (arr_45 [i_15 + 1] [(signed char)8] [i_15] [i_15 + 1] [i_15] [i_15] [i_15])))) : (((/* implicit */int) (unsigned char)188))));
                            arr_46 [(signed char)3] [i_6] [i_10] [(signed char)3] [i_14] [i_14] [i_14] = var_0;
                            var_32 = max((((/* implicit */unsigned long long int) (_Bool)0)), (max((12648890290588939808ULL), (17121606794380160923ULL))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_36 [i_16] [i_16] [2])) : (((/* implicit */int) arr_36 [i_16] [i_16] [i_16])))))));
            var_34 = ((/* implicit */int) arr_0 [i_6]);
        }
        arr_49 [i_6] [5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_6] [18] [i_6]))));
    }
    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_12))));
    var_36 = ((/* implicit */unsigned char) (!(min((var_17), ((_Bool)1)))));
    /* LoopSeq 2 */
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
    {
        arr_52 [i_17] [i_17] = ((/* implicit */short) min((arr_24 [i_17]), (min((arr_25 [i_17 - 1] [18] [i_17 - 1]), (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) > (var_11))))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)240)) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_17])) & (arr_24 [11ULL])))) ? (((((/* implicit */int) arr_41 [i_17] [i_17] [i_17])) << (((/* implicit */int) arr_9 [i_17] [i_17] [i_17] [i_17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_38 |= ((/* implicit */unsigned long long int) (+(arr_47 [i_18 - 1])));
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (arr_40 [i_18] [7] [i_18 - 1] [i_18 - 1])))) && (((/* implicit */_Bool) -1892275389))));
    }
}
