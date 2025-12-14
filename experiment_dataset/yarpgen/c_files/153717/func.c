/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153717
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_8) || (((/* implicit */_Bool) var_10))))))) - (min((max((arr_1 [i_0]), (((/* implicit */long long int) var_5)))), (max((arr_1 [(unsigned char)11]), (((/* implicit */long long int) var_1))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_2])) ? (arr_8 [i_1 - 1] [i_3] [(_Bool)1]) : (arr_8 [i_1 - 1] [i_1 - 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_4 [i_1 - 1]))))) : (((((/* implicit */_Bool) (+(var_10)))) ? (max((var_9), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_1] [2LL] [i_3] [i_3])))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned char) (-(((arr_11 [13LL] [i_0] [i_1 - 1] [i_3]) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 1] [(_Bool)1])) : (((/* implicit */int) arr_11 [0LL] [i_0] [i_1 - 1] [(unsigned char)15]))))));
                            var_14 += ((min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (var_10))) >= (((/* implicit */long long int) min((-1), (((/* implicit */int) (_Bool)0))))));
                            var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)43)) ? (-1330039106459344254LL) : (1330039106459344254LL)))));
                            var_16 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_11 [i_0] [(unsigned char)0] [i_2] [i_4 - 1]), (arr_11 [i_0] [i_2] [i_3] [4LL])))), ((-(((/* implicit */int) arr_11 [i_2] [i_4 + 1] [i_0] [i_0]))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                        {
                            var_17 = (-(((-1330039106459344254LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_1 - 1] [i_3] [i_3] [i_5 - 3])) / (((/* implicit */int) var_3))));
                            var_19 += ((((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 - 1] [(signed char)1] [i_5])) - (((/* implicit */int) arr_13 [5] [i_1] [i_1 - 1] [i_0] [i_5 - 1])));
                        }
                        var_20 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((1330039106459344265LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_3)))), ((+(((/* implicit */int) ((unsigned char) var_3))))))))));
                    }
                } 
            } 
            var_22 = ((long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(_Bool)1]))) / (arr_15 [i_0] [i_0] [i_1])))));
            var_23 = ((/* implicit */signed char) (+(9403969114296685390ULL)));
            var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)26888))))), (min((((/* implicit */long long int) (_Bool)1)), (685297820219451435LL)))));
            var_25 = ((/* implicit */unsigned short) (+(max((var_9), (((/* implicit */long long int) arr_2 [i_0]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_1 [i_6]) + (var_9))), (((/* implicit */long long int) arr_5 [i_6] [i_7]))))) ? ((+(((/* implicit */int) max((arr_3 [i_6] [i_7]), (((/* implicit */unsigned char) arr_11 [i_6] [i_6] [i_7] [11]))))))) : (((/* implicit */int) max((min((((/* implicit */unsigned char) arr_6 [(_Bool)1] [i_6])), (var_5))), (((/* implicit */unsigned char) var_1)))))));
                var_27 = ((/* implicit */int) (-((((((_Bool)1) && (((/* implicit */_Bool) -5300822571662558092LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_11 [i_6] [(_Bool)0] [i_7] [i_6])))))) : (arr_18 [i_6])))));
                var_28 = ((/* implicit */unsigned short) min((max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_6])))))));
            }
        } 
    } 
    var_29 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_7)))))));
}
