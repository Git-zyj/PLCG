/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102778
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65384)) >> (((((/* implicit */int) (unsigned short)31028)) - (31011)))))) : (min((((/* implicit */long long int) (unsigned short)152)), (1493501208453809835LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_12 [1LL] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)34508);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (arr_3 [i_0] [i_0 - 1] [i_3 - 4]))))) / (((unsigned long long int) arr_10 [i_3 - 3] [i_3] [i_3] [i_1] [i_3 - 2] [i_3 - 3]))));
                            var_17 = ((/* implicit */int) (unsigned short)65389);
                        }
                        arr_13 [i_2] [i_0] [i_2] [i_3] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-105)))), ((+(((/* implicit */int) (signed char)-96))))))) ? (((/* implicit */int) (unsigned short)13421)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_3]) % (((/* implicit */long long int) var_8))))))))));
                        var_18 = (unsigned short)65389;
                        arr_14 [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((8757981934830896558ULL), (((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned short)11] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42154)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17622)) ? (-1493501208453809836LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_8 [i_5])) : (var_8))))));
                        arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1493501208453809849LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65384))) : (arr_6 [i_1])));
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0 - 3] [i_0 + 2] [i_0] [i_0 - 3]);
                    }
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        arr_22 [i_1] [i_2] [i_1] = arr_5 [i_0] [i_1] [i_2] [i_2];
                        var_20 += (+(max((min((var_4), (15454538662945494647ULL))), (((/* implicit */unsigned long long int) var_1)))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((arr_5 [i_0] [i_0] [i_0] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29146)))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) var_1);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_7 - 3]) | (arr_1 [i_7 - 2])))) ? (max((((/* implicit */int) (unsigned short)43957)), (275311880))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6854619513277960756LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (8724920653091122646LL)))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (1690777121) : (((/* implicit */int) arr_2 [i_1])))) : ((+(-1571614448)))))));
                    }
                    arr_25 [i_1] [10LL] [i_2] = var_10;
                    var_24 |= (+(max((arr_7 [(unsigned char)6] [2LL] [i_0 - 2] [i_0 + 1]), (arr_7 [(unsigned short)2] [i_1] [i_2] [(unsigned short)2]))));
                    var_25 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)1525)))), (((/* implicit */int) (signed char)97))));
                }
            } 
        } 
    } 
    var_26 = (unsigned short)64383;
    var_27 *= ((/* implicit */signed char) (+(min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_13))))))));
}
