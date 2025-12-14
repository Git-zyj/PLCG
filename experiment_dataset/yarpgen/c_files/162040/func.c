/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162040
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
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((/* implicit */int) ((_Bool) (unsigned char)8)))));
        var_17 ^= ((/* implicit */long long int) (+(min(((+(((/* implicit */int) arr_0 [i_0] [(unsigned char)3])))), (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-26)), (arr_0 [i_0] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_1])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [11]))) : (var_6))))) != (((/* implicit */unsigned long long int) min((((int) (signed char)-26)), (((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1)))))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_16 [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!((_Bool)1))), ((((_Bool)0) && (((/* implicit */_Bool) var_2)))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20201))) : (((unsigned int) arr_15 [i_2] [i_3] [i_3]))))));
                            arr_17 [i_3] [(_Bool)1] [i_3] [i_4] [i_5] [i_5] = arr_10 [i_1] [i_1] [i_3] [i_3];
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)8)), (((int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min(((unsigned char)89), ((unsigned char)65)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)89))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))))));
                        }
                        arr_18 [i_3] = ((/* implicit */signed char) ((min(((-(((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) min((arr_10 [i_1] [i_2] [i_2] [i_3]), (var_5)))))) > (arr_3 [i_3])));
                    }
                    arr_19 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) != (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_3] [i_2] [i_1])), (var_3)))))))) != (((unsigned long long int) max((var_0), (((/* implicit */unsigned long long int) 1564861994U)))))));
                }
            } 
        } 
        var_20 *= ((unsigned char) ((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) & (var_14))) > (((/* implicit */int) (signed char)57))));
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_21 = ((/* implicit */int) min((13651966421340300672ULL), (arr_23 [i_6])));
        var_22 = ((/* implicit */signed char) arr_20 [i_6]);
    }
    var_23 = ((/* implicit */_Bool) var_6);
}
