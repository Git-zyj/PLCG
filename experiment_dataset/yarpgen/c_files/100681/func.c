/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100681
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
    var_14 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))), (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_9))))), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = min((((((/* implicit */_Bool) 806704387)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29812)))), (((/* implicit */int) (_Bool)1)));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [(signed char)3]))))))) ? (min((((25165824U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (unsigned short)51246)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_9 [10])) >= (((/* implicit */int) arr_1 [i_2])))) && (((/* implicit */_Bool) arr_7 [i_0 - 2] [(short)4] [(signed char)9] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((min((arr_11 [i_3] [i_1]), (((/* implicit */int) max(((unsigned short)19897), ((unsigned short)19880)))))), (((/* implicit */int) (_Bool)1))));
                        arr_14 [(signed char)13] [i_1] [(signed char)9] [i_1] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_0))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) (!(var_10)))))) - (65384)))));
                        var_16 = ((int) (-(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) var_6))))));
                        var_17 = ((/* implicit */unsigned long long int) (((+(4269801471U))) < (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (394777743) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2])))) | (((/* implicit */int) arr_12 [i_3] [i_1] [i_0])))))));
                    }
                    var_18 = ((/* implicit */unsigned char) -376195204653024881LL);
                }
            } 
        } 
        arr_15 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-37)), (arr_10 [(signed char)8] [(signed char)8] [(signed char)11])))) ? ((-(((/* implicit */int) (signed char)1)))) : (((/* implicit */int) arr_6 [i_0]))));
        arr_16 [(short)6] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) (unsigned short)35759))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (max((var_9), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) var_4)), (-1198069011))), ((-(((/* implicit */int) var_4))))))) : (var_11)));
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), ((~(min((((/* implicit */unsigned int) var_1)), (4269801467U)))))));
}
