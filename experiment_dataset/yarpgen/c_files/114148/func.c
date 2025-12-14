/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114148
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(arr_3 [i_0])))), (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)16])) ? (arr_3 [i_0]) : (var_9))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 ^= ((_Bool) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned int) var_13))))) ? (arr_5 [i_1 - 1] [7ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) ((signed char) arr_5 [i_0] [i_2]))) : ((~(arr_3 [i_0]))))) ^ (((int) ((signed char) arr_3 [i_1])))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_0)), (arr_7 [i_1] [i_1] [i_1 - 1] [i_3 + 1])))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (short)15712)) ? (1341222977U) : (1436521593U))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [(unsigned short)6] [(unsigned short)6] [i_3 - 1] [(_Bool)1]) : (((((/* implicit */_Bool) arr_7 [6U] [6U] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_10 [10ULL] [10ULL] [10ULL] [10ULL])))))) ? (arr_2 [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1436521593U)) == (14842452547911106873ULL)))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 2])) ^ (((/* implicit */int) arr_1 [i_3 - 1] [i_1 - 2]))))))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */int) max((3604291525798444742ULL), (3604291525798444775ULL)));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_10 [i_0] [i_1] [i_2] [i_0])))) && (((/* implicit */_Bool) ((short) arr_5 [i_0] [i_0]))))) ? (var_2) : (((/* implicit */unsigned long long int) min((min((arr_0 [0U]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((((/* implicit */signed char) var_7)), (arr_11 [i_4] [i_1] [i_2])))))))));
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_4]), (var_7))))) == (arr_10 [(unsigned char)12] [i_1 - 2] [i_1 - 2] [i_4]))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1] [i_4])) ? (((((/* implicit */_Bool) arr_13 [(signed char)12] [i_4] [i_0] [i_1] [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [5ULL]))))) : (((unsigned long long int) 2858445684U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)0))))));
                        var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2])))))) ? (((((/* implicit */_Bool) (signed char)5)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25367))))) : (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_1 + 1] [i_1 - 1]))))));
                        var_24 = ((/* implicit */int) arr_1 [i_4] [i_1]);
                    }
                    arr_14 [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 22ULL)) ? (((/* implicit */unsigned int) 17)) : (854583889U)));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_2] [(signed char)19] [i_1 - 2])) ? (arr_4 [(unsigned short)17] [2] [i_1 - 2]) : (arr_4 [i_0] [i_0] [i_1 - 3]))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4501188256782744811ULL)))) ? (var_9) : (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))), (var_4))))))));
}
