/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161100
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
    var_19 &= var_15;
    var_20 *= ((/* implicit */unsigned long long int) ((unsigned char) var_3));
    var_21 &= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 2525698653554636367ULL)) ? (2514035104U) : (var_11))), (((/* implicit */unsigned int) ((0) >> (((17048653280766074193ULL) - (17048653280766074190ULL)))))))) / (((/* implicit */unsigned int) ((int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) var_15);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_22 += ((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_1] [i_2] [i_3]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_23 = (~(max((((/* implicit */unsigned long long int) max((-5170722900874419048LL), (((/* implicit */long long int) var_12))))), (((((/* implicit */_Bool) var_16)) ? (arr_10 [i_0 - 2] [i_2] [i_2] [i_1] [i_4] [i_0 + 1]) : (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                            var_24 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2]) / (arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2]))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */int) min((arr_6 [i_0 + 1] [i_1] [i_2] [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2] [i_4] [i_2] [i_1])))))))) ^ (((1315638753) % (-1644565486)))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(5578490416741353307ULL)))) ? (8080505825560980276LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 9000687303707425965LL)) > (353940139145700630ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(var_17)))))) : (min((((((/* implicit */_Bool) 2147483647)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) 4256978970U)))), (((/* implicit */unsigned long long int) (~(3666132170U))))))));
                        }
                        for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_0 + 1] [i_2] [i_3] [i_5 + 1] [i_3])) ? (var_18) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_10 [i_1] [i_1] [i_2] [i_0 - 1] [i_5] [i_2]) : (4194240ULL)))) ? (9838853545759216879ULL) : (((var_6) << (((arr_3 [i_0] [i_1] [i_2]) + (761399039)))))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */int) (unsigned short)23634)), (-1))) : (((/* implicit */int) ((unsigned short) arr_10 [i_0 - 1] [i_0] [i_1] [i_2] [i_3] [i_5 - 1]))))))))));
                            var_29 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_7 [i_5] [i_2] [i_1] [i_0 + 1]) + (2147483647))) << (((arr_0 [i_0 + 1]) - (9919695549099278321ULL))))))))), (min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_5 + 1]))))), (arr_3 [i_1] [i_3] [i_5 - 3])))));
                            var_30 = ((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_1] [i_2] [i_5]);
                            arr_15 [i_0 - 2] [i_1] [i_2] [i_3] [i_5 - 1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_18), (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2] [i_3])) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_5] [i_2]) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2685454251U)), (-7344591451912980387LL)))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) : (((((/* implicit */_Bool) ((var_9) / (var_9)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_5])))) : (16ULL)))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (((unsigned int) ((unsigned long long int) arr_11 [i_0 + 1] [i_1] [i_0] [i_2] [i_6] [i_0])))))));
                            var_32 = ((/* implicit */long long int) ((min((260096ULL), (5938572615630691237ULL))) % (((/* implicit */unsigned long long int) var_12))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) 23456337);
                            var_33 = ((/* implicit */short) (-(2659700240U)));
                        }
                        var_34 += max((0ULL), (((/* implicit */unsigned long long int) ((-525319666) / (((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                } 
            } 
        } 
    }
}
