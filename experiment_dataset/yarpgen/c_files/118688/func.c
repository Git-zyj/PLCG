/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118688
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_13 = (~(arr_1 [i_0]));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 |= min((arr_1 [i_1]), (((/* implicit */long long int) ((((((/* implicit */int) var_10)) % (arr_4 [i_0] [(_Bool)1]))) / (arr_4 [i_2 + 2] [i_2 - 1])))));
                    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (arr_4 [i_2] [i_1])))), ((~(arr_3 [i_0] [i_0] [i_0])))));
                    var_16 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (1472408570) : (var_8)))))) ? (((((/* implicit */_Bool) ((2687347810U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)639)))))) ? (arr_3 [i_0 - 2] [i_0 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [(signed char)5])))))));
                }
            } 
        } 
        arr_7 [1] [i_0] = arr_1 [i_0];
    }
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)82))) ^ (arr_1 [i_3])))))));
        var_17 = ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) arr_0 [(unsigned char)12]);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_2 [i_4] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) : ((-(arr_1 [i_4]))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) ^ (arr_1 [i_4])))) ? (arr_1 [i_4]) : (((/* implicit */long long int) arr_13 [i_4]))));
        var_19 = ((/* implicit */int) (((!(arr_0 [i_4]))) || (((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) arr_1 [i_4]))))));
        var_20 = ((/* implicit */int) ((arr_1 [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_2))))) ? (min((var_11), (((/* implicit */long long int) -1)))) : (min((((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((int) var_4)))))));
}
