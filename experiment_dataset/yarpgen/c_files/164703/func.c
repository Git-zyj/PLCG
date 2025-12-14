/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164703
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */_Bool) (signed char)16);
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((short) var_0))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (arr_4 [i_2] [i_1]))))))) << (((((((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_0] [i_0]))))) + (6334860671323623754LL)))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-17))));
                        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
                        var_13 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        arr_12 [i_2] [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)26512)) ? (-8164610306008536105LL) : (8164610306008536104LL)))));
                    }
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((long long int) ((arr_13 [i_1] [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1])))));
                        var_15 = ((/* implicit */long long int) arr_8 [i_4] [i_2] [i_1] [(signed char)19]);
                    }
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        var_16 -= ((/* implicit */long long int) (+(min((arr_4 [i_5] [i_2 - 1]), (arr_4 [i_2 + 1] [i_2 - 1])))));
                        var_17 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_14 [i_5] [i_1] [i_2] [i_1])))));
                    }
                    for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_18 &= ((/* implicit */unsigned short) arr_2 [i_6 + 1] [i_2 + 1] [i_2 - 1]);
                            arr_22 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_6] [i_2] [i_2] [i_0])), (arr_5 [i_2] [i_2])))) ? ((+(((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_6 - 1])))) : (((/* implicit */int) var_2))));
                            var_19 = ((/* implicit */unsigned char) var_4);
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (short)26512))) || (((/* implicit */_Bool) ((short) -8164610306008536105LL))))))));
                        }
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_7))));
                        var_22 = max((max((((/* implicit */long long int) arr_19 [2ULL] [i_6 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])), (arr_16 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_20 [(_Bool)1] [i_1])))), (((/* implicit */int) var_9))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26512)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)-9))))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (short)-17310))))), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) (short)31652))))) : (((/* implicit */int) var_10)))))));
}
