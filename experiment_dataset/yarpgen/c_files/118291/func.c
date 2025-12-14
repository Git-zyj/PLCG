/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118291
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) (signed char)-126)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
        /* LoopSeq 2 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_1] [(_Bool)1] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (var_6)))) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_2] [1ULL] [i_4] [i_3])) : (((/* implicit */int) (signed char)11))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = ((signed char) arr_11 [(signed char)6] [i_1 - 4] [9] [(_Bool)1] [i_3] [i_4] [i_4]);
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(var_1))))));
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_17 = ((int) arr_3 [i_0] [i_0] [i_0 - 2]);
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)125))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (int i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_2))));
                            arr_25 [i_7] [i_5] [i_5] [(unsigned short)1] [2] [i_5] [i_5] = ((/* implicit */signed char) 929967114);
                        }
                    } 
                } 
            } 
            arr_26 [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((arr_21 [i_0 + 1] [2LL] [i_0 + 1] [i_0 + 1]) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)16)))) : (((/* implicit */int) ((signed char) 929967114)))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_12 [(signed char)14] [i_0 - 1] [(signed char)6] [i_0 - 2] [i_0] [i_0]))));
        }
    }
    var_21 = ((/* implicit */unsigned short) ((929967114) > (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) (signed char)-12)) : (var_5)))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_10))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 786934094)) && (((/* implicit */_Bool) (signed char)125))))), (((int) var_13))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) -786934089)) ? (var_1) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-1)))))))))));
}
