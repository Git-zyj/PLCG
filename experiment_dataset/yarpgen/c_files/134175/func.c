/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134175
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
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (var_3)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26037)) ? (((/* implicit */int) (short)-26031)) : (((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)26037)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-4105748202901596850LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26014)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (unsigned short)16026))))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49508))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (262143LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)30962)) : (((/* implicit */int) var_9))))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (var_3)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1239646299U)) : (var_3))) : (((((/* implicit */_Bool) (signed char)68)) ? (17979214137393152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)26031)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_3 - 1] [i_3 - 1]))))) : (((arr_1 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))));
                    arr_9 [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) var_14))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-29277))))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned short)34585)) : (1353035133)))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)-26057)) : (((/* implicit */int) var_13)))))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551614ULL)))) ? (((((/* implicit */_Bool) var_11)) ? (-5988693686352071411LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34584)) ? (var_12) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) (short)-27252)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551608ULL))) : (((((/* implicit */_Bool) 877834193409555156LL)) ? (var_15) : (var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5988693686352071411LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) : (18428764859572158443ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (9223372036854775798LL) : (((/* implicit */long long int) var_8))))) : (((((/* implicit */_Bool) (short)-26037)) ? (((/* implicit */unsigned long long int) 9223372036854775804LL)) : (18446744073709551590ULL)))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-26029))))) ? (((((/* implicit */_Bool) (unsigned short)7754)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (1353035125)))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)1153))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5171556955770994055LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 5988693686352071410LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) : (var_2))))))))));
}
