/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14665
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) ((0ULL) / (3ULL)));
        arr_2 [(short)9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 18446744073709551591ULL))))) & (((/* implicit */int) ((0ULL) != (18446744073709551612ULL))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            var_12 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && (((/* implicit */_Bool) var_8))))) + (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_4 [i_0]))))));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1691921094517346721ULL) != (18446744073709551615ULL)))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24249))) < (8133249224169382465ULL))))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-11669))) < (-4984201366919206882LL)));
            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) + ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (var_8)))))));
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) var_1))))) * (((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))));
        }
        for (short i_3 = 3; i_3 < 10; i_3 += 1) 
        {
            arr_11 [i_3] = ((((29ULL) - (((/* implicit */unsigned long long int) 2327764055U)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_2))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((16669905349224586803ULL) > (((/* implicit */unsigned long long int) -603118638))));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(signed char)2])) + (((/* implicit */int) (unsigned char)141))))) < (((arr_10 [i_0] [i_3]) + (arr_13 [i_0] [i_3] [i_4] [i_5])))));
                            arr_20 [i_0] [i_3] [10U] [10U] [i_6] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) + (2792377682U)))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) ^ (7510185135757597403LL)))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -603118637)) > (8987030248257435041LL)));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_6 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))));
                            arr_24 [i_3] [i_5] [i_3 - 2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)11674))) + (1176211074U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_10 [i_5] [i_5])) * (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 18446744073709551586ULL))))))));
                            arr_25 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0] [i_3])) * (((/* implicit */int) arr_17 [i_0] [(_Bool)1] [(unsigned char)9] [i_5] [(unsigned short)9])))) > (((/* implicit */int) ((var_1) != (1176211076U))))));
                            var_20 = ((/* implicit */unsigned short) ((((603118638) - (-603118621))) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_3] [i_4] [i_3] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) < (-603118641))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-9223372036854775807LL))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_21 [i_3]))))) != (((/* implicit */int) ((4ULL) < (1463902166178967637ULL))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_31 [i_3] = ((((/* implicit */unsigned long long int) ((var_1) / (var_2)))) % (((arr_21 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            arr_32 [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_1)) + (4503565267632128ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 603118637)) != (7942996868307303790LL)))))));
                            var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) / (1387031106U)))) & (((var_3) * (15935472424034785922ULL))));
                        }
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_3] [i_4] [(unsigned short)8] [i_5]))) > (5ULL)))) != (((/* implicit */int) ((5ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767)))))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32768)) + (((/* implicit */int) (unsigned char)232))));
                    }
                } 
            } 
            arr_33 [i_0] [i_3] = ((/* implicit */signed char) ((((2132138231U) - (3935467110U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65527)) + (((/* implicit */int) (_Bool)1)))))));
            arr_34 [i_3] = ((/* implicit */short) ((((6180212309391395471ULL) % (((/* implicit */unsigned long long int) 2898608929U)))) < (((/* implicit */unsigned long long int) ((7364817622527931258LL) & (((/* implicit */long long int) ((/* implicit */int) (short)3042))))))));
        }
    }
    var_25 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5825))) != (7ULL))) && (((/* implicit */_Bool) (short)31756))))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (var_1))))) != (((2917475921U) & (2898608908U))))))));
}
