/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150715
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((long long int) -4149583406665709583LL))) ? (-1LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_3)))) ? (((/* implicit */unsigned int) ((var_13) & (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2]))) ^ (var_1)))));
            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-2LL)))) ? ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) 1289259729)))) : (var_8))) < (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned int) var_3)))))))));
            arr_6 [24] [i_1 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -2LL))) ? (((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (unsigned short)17524)))))));
            var_21 = ((/* implicit */int) min(((+(((unsigned long long int) 67108863)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((11LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (signed char)83)) : ((~(((/* implicit */int) (short)19334)))))))));
        }
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 4; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((unsigned short) var_13));
                            var_23 = ((/* implicit */long long int) ((unsigned short) (((-(194642597))) / (((/* implicit */int) arr_1 [i_3 - 4] [i_4 + 1])))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) (-(arr_7 [i_0])));
                            var_24 = ((/* implicit */short) var_7);
                        }
                        var_25 += ((/* implicit */short) ((_Bool) arr_3 [i_2] [i_0]));
                        var_26 = ((/* implicit */_Bool) 503066398194662015LL);
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_7 [20]) : (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)65526))))))), (((/* implicit */long long int) var_6))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) 2LL)) >= (var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 560017394941551416LL)) ? (((/* implicit */int) (unsigned short)11053)) : (((/* implicit */int) (short)-17875))))) ? (((/* implicit */int) min(((unsigned short)62956), (((/* implicit */unsigned short) (short)32767))))) : (-1450625946)))) : (((((/* implicit */_Bool) arr_14 [i_6] [i_6])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [2ULL]))) : (var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32761))))))))))));
    }
    var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) : ((~(var_4)))))));
}
