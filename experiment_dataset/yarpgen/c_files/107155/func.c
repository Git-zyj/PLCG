/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107155
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = (~(((var_8) / (((/* implicit */long long int) var_2)))));
                    arr_11 [i_0] [i_0] [(_Bool)1] |= ((/* implicit */_Bool) (unsigned char)6);
                }
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((_Bool) (+(arr_13 [i_1] [i_1] [i_0] [i_3]))))), ((~(65535ULL)))));
                    arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(885254268806768249LL)))) ? (var_0) : ((~(arr_12 [i_3] [i_3] [i_3] [(signed char)3]))))))));
                    arr_15 [i_0 + 1] [i_3] [i_3] = ((/* implicit */signed char) (short)5347);
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                }
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) (-(var_2)));
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_7 [i_4] [i_1] [i_0]) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_1 [i_0])))))));
                }
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_18))));
                    arr_22 [i_0] [1LL] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) 18446744073709486080ULL);
                    var_24 ^= ((/* implicit */int) (~(max(((+(65536ULL))), (((/* implicit */unsigned long long int) max((arr_16 [i_0 - 1] [i_1] [i_0 - 2] [i_5 + 1]), ((unsigned char)190))))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (signed char)-87))));
                }
                var_26 = ((/* implicit */long long int) arr_9 [i_0] [(_Bool)0] [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            {
                arr_28 [i_6] [i_7] = ((/* implicit */unsigned char) min((arr_25 [i_6] [i_7]), (((/* implicit */short) var_13))));
                arr_29 [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6]);
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((18446744073709486065ULL) - (((/* implicit */unsigned long long int) -5573774130107800585LL))));
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        var_28 = ((/* implicit */short) max((min((18446744073709486080ULL), (((/* implicit */unsigned long long int) 1274010038400023227LL)))), (18446744073709486080ULL)));
        var_29 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_13)), (-1414795632))), ((~(((/* implicit */int) (short)15497))))))) != ((-(((unsigned long long int) arr_30 [i_8]))))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_30 [(signed char)2]))));
    }
}
