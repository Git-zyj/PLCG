/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151856
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
    var_18 -= var_1;
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2349418625U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) : ((+(var_9)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned char) var_16)))) : (((/* implicit */int) (unsigned char)45))));
    var_20 = ((/* implicit */_Bool) (-((+(((1105234416) + (((/* implicit */int) var_6))))))));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -1156439973))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_1 [i_0])), (var_10)))))) ? (-9223372036854775800LL) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 = (i_0 % 2 == 0) ? (((((arr_0 [(signed char)6]) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1])) | (((/* implicit */int) arr_4 [i_1])))) - (35967))))) : (((((arr_0 [(signed char)6]) + (2147483647))) << (((((((((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1])) | (((/* implicit */int) arr_4 [i_1])))) - (35967))) + (28763))) - (21)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_10)))) & (((((/* implicit */_Bool) 12699326241249126193ULL)) ? (12699326241249126193ULL) : (5677970798840416340ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5677970798840416340ULL)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((4379710578121157571LL) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (var_1)))));
                                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) -2124961850)))));
                                var_26 = ((/* implicit */short) ((unsigned char) (~(((int) (unsigned char)205)))));
                                arr_11 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 2) 
        {
            for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) min((arr_12 [i_5]), (((/* implicit */unsigned char) var_6))))), (arr_16 [(signed char)11] [i_6] [i_7 + 1]))), (((/* implicit */long long int) ((((4379710578121157554LL) == (var_10))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))));
                    arr_19 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((5747417832460425431ULL), (((/* implicit */unsigned long long int) var_15)))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)64)) + (((/* implicit */int) (unsigned char)255))))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_7)) : (13411553432578614888ULL)))) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_12 [i_5]))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_11))))));
    }
}
