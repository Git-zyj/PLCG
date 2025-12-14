/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176091
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (-2147483642) : (var_9))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), ((+(var_1)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 8191LL)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) 6848199615289602922LL)) && (((/* implicit */_Bool) -5411562598047416804LL)))))))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [9LL] [i_0])) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [1]) : (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (-8537510772586544210LL) : (((/* implicit */long long int) arr_0 [4])))) : (max((var_13), (var_5))))) == (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [0LL] [10LL])))) ? (((arr_1 [i_0] [i_0]) / (var_12))) : ((~(arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_0);
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(arr_1 [i_0] [i_0]))) : (((int) arr_0 [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_14 [i_4] [i_4] = ((/* implicit */int) (+(7861904721628368434LL)));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_8 [i_3] [i_4]) : (((/* implicit */long long int) arr_7 [1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_5] [i_2 - 3] [i_2] [i_3] [i_4] [i_5])) ? (arr_15 [i_4] [i_2 - 2] [i_5] [i_4] [i_5]) : (arr_12 [i_1] [i_3] [i_3] [18])))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_5] [i_4] [i_5])) ? (((/* implicit */long long int) arr_7 [i_3])) : (arr_5 [i_2 - 4])))))) ? (((/* implicit */long long int) var_4)) : (arr_9 [i_2 - 4] [13LL] [i_2]))))));
                            var_18 = ((((/* implicit */_Bool) ((long long int) arr_13 [i_2 - 4] [i_4] [i_2 - 4] [i_2 - 3]))) ? (-6257198753273421015LL) : ((~(max((((/* implicit */long long int) arr_16 [i_1] [i_4] [i_3] [i_3] [i_4] [i_4] [i_5])), (var_10))))));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (var_5) : (var_2)));
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (arr_8 [11] [12LL]) : (var_5))) != (((/* implicit */long long int) ((/* implicit */int) ((-3443541186877772089LL) >= (7861904721628368432LL))))))))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_12 [i_1] [i_4] [i_4] [i_6])), (min((arr_5 [0]), (arr_10 [i_2] [i_3])))))));
                            arr_20 [i_6] [1LL] [i_4] [5] [i_6] = var_7;
                            arr_21 [18LL] [i_2 - 3] [i_3] [i_4] [i_4] [i_4] [i_6] = ((long long int) (~(arr_10 [i_4] [i_2])));
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) max((arr_11 [i_2 - 4]), (arr_11 [i_2 - 2])))), (((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (((arr_10 [i_1] [i_1]) & (var_2))) : (arr_10 [i_2 - 2] [i_2 - 4])))));
                        }
                        arr_22 [i_4] = arr_11 [i_1];
                        arr_23 [i_1] [i_4] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1]) : ((~((+(arr_10 [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_32 [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((int) ((var_11) >> (((var_2) - (4678033608887015863LL)))))) > (((int) min((((/* implicit */long long int) var_12)), (var_5))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), ((~(min((((((/* implicit */_Bool) var_9)) ? (arr_13 [i_10] [i_9] [i_9] [i_7]) : (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) arr_33 [6LL] [i_9] [16LL] [i_10])) ? (arr_5 [i_1]) : (((/* implicit */long long int) var_12))))))))));
                            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_7] [i_8 + 1] [i_10] [i_10])) ? (-6848199615289602931LL) : (arr_13 [i_1] [i_7] [i_1] [i_10])))) ? (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_1] [i_1]) : (arr_5 [i_7]))) : (((/* implicit */long long int) (+(arr_16 [i_1] [i_7] [14] [i_9] [i_1] [i_7] [i_7])))))) == (((/* implicit */long long int) (+(2147483642))))));
                            var_24 = ((/* implicit */int) arr_19 [i_7] [2] [i_7] [i_10]);
                            var_25 = ((/* implicit */int) (~(arr_25 [i_7])));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_24 [0LL]), (arr_24 [16])))) ? (((((/* implicit */_Bool) arr_24 [8LL])) ? (arr_24 [18]) : (arr_24 [4]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [10])))))));
    }
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) 6848199615289602911LL)) ? (6257198753273421013LL) : (-5759456622994298744LL))))));
}
