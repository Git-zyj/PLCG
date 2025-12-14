/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17591
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1]))) % (min((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) var_14)))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 3264990368564303443LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))) : (((var_4) >> (((var_9) - (1721237127U)))))))) ? (((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))))) : (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_4 [i_1])))));
        var_20 = ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)19] [i_1]))) % (var_13))) > (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (short)20885)))))))) & (((/* implicit */int) var_10)));
        var_21 = ((/* implicit */long long int) ((unsigned int) 3264990368564303443LL));
    }
    for (int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45078))) != (var_9))) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)27364)) == ((-2147483647 - 1)))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [18LL])) ? (((/* implicit */long long int) 17U)) : (2717609991595018344LL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), ((unsigned char)84)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_6 [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (var_4) : (var_2)))))) || (arr_10 [i_2 - 1]))))));
                        arr_14 [(unsigned short)19] [i_5] [15ULL] [(unsigned char)1] [i_5] [(unsigned char)1] = ((/* implicit */long long int) ((666634364) << (((var_9) - (1721237145U)))));
                        arr_15 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (max((arr_5 [i_2 + 1]), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_2 - 1] [i_2 - 1]) / (((/* implicit */long long int) 11U))))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((2096871227U) > (((/* implicit */unsigned int) -1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) | (var_14)))) : (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (2096871227U))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_18 [i_6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) 666634370);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            arr_23 [i_2] [i_6] [i_4] [i_6] [i_7 + 2] = ((/* implicit */unsigned char) ((4294967252U) != (((unsigned int) 4634178678544815832LL))));
                            arr_24 [i_6] [i_3] [i_4] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((int) var_0))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_13))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        var_25 += ((/* implicit */unsigned int) 666634365);
                    }
                    for (long long int i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-31128))) & (((((/* implicit */_Bool) 43U)) ? (arr_12 [i_8 - 1]) : (((/* implicit */long long int) 174269136)))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((3264990368564303443LL) - (3264990368564303431LL)))))) >= (-3264990368564303454LL)))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned int) arr_8 [i_3])))));
                    }
                    var_28 = ((/* implicit */short) 4294967295U);
                    var_29 &= ((/* implicit */unsigned short) 3264990368564303453LL);
                }
            } 
        } 
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 + 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2691))) - (var_3))) : (((/* implicit */unsigned long long int) arr_6 [i_2 - 1]))));
    }
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))))) ^ (39734584151870570ULL)))) ? (var_16) : (((/* implicit */unsigned long long int) ((2096871233U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) (unsigned short)62829)) : (((/* implicit */int) var_6)))))))))))));
    var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (17957749306803285436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (18407009489557681045ULL))))))) & (-3264990368564303443LL)));
}
