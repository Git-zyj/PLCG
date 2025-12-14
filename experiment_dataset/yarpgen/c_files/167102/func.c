/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167102
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24182)) && (((/* implicit */_Bool) arr_5 [i_1 + 1]))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))) : (16300829506431951163ULL)));
        }
        for (short i_2 = 3; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) * (min((781849582205069253LL), (((/* implicit */long long int) (signed char)-8))))))));
            var_23 += ((/* implicit */signed char) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)13]))) * (var_4))), (var_7)))));
        }
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (signed char i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_8) == (5528286360857857465LL))))));
                            var_25 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_2)), (arr_13 [i_5] [i_3 + 3] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6029441624039246110LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (3329564860U))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_12) << (((((/* implicit */int) (short)19611)) - (19592))))), (min((20ULL), (arr_1 [i_6])))))) ? (((((/* implicit */int) arr_2 [i_3 + 1])) << (((((/* implicit */int) arr_2 [i_3 + 3])) - (63))))) : (((((/* implicit */_Bool) var_19)) ? ((-(((/* implicit */int) arr_9 [1LL] [i_6] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))));
                            var_27 = (+(((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 - 2] [i_4 - 2] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_17 [i_6 - 2] [i_6 - 1] [i_4 + 1] [i_3 + 2]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_13))), (((6236732564003391505LL) % (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_3])))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)27))))) : (max((arr_13 [i_4] [i_4 - 2] [i_3 + 1]), (((/* implicit */unsigned long long int) var_10)))))))));
                arr_20 [i_4] [i_4] [i_3 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3 + 2])) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_3 - 1])))) >> (((((max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_3 + 2] [14LL])), (var_3))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_17)), (var_4)))))) - (5957714506737350871ULL)))));
            }
            var_29 = (~((~(max((((/* implicit */unsigned long long int) var_9)), (arr_11 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
        {
            arr_25 [i_7] [i_0] = ((/* implicit */signed char) (-(-5432526439600124733LL)));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (var_11) : (((/* implicit */long long int) arr_8 [i_0] [20U]))));
        }
    }
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (short)3611)))))));
    var_32 = max((((((/* implicit */_Bool) var_4)) ? (var_11) : (var_13))), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) == (var_4))))))));
    var_33 ^= ((/* implicit */short) var_6);
}
