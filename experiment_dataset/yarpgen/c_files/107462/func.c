/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107462
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = (((_Bool)1) ? (1554717671U) : (1397230616U));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_4] [i_0] [i_4]) : (((1685200507U) << (((((/* implicit */int) (signed char)-77)) + (103))))))))))));
                                var_15 = (+((-(((/* implicit */int) (unsigned char)208)))));
                                arr_16 [i_0] [i_3] [i_3] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_3 [i_0])))), ((+(((/* implicit */int) arr_3 [2U]))))));
                                var_16 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] = ((/* implicit */short) arr_6 [i_0]);
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_19 [i_5]);
        var_18 = ((/* implicit */unsigned short) (+(var_12)));
        var_19 += ((/* implicit */unsigned long long int) 16U);
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) max(((unsigned short)3124), (((/* implicit */unsigned short) (short)25063)))))) ? (var_0) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    {
                        var_21 = ((unsigned int) (-(4071996682U)));
                        var_22 = ((/* implicit */short) arr_25 [(unsigned short)7] [(unsigned short)7] [i_9]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((0LL), (((/* implicit */long long int) arr_30 [i_6] [i_10] [(unsigned char)10]))))))) ? (min((min((arr_21 [i_10] [i_6]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2740249639U)))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_2)), (arr_28 [(_Bool)1]))), (((/* implicit */int) arr_2 [i_6] [i_10]))))))))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) var_0)) + (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_6] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (var_10)))))))) : ((~(0LL))))))));
            var_25 = (!(((/* implicit */_Bool) (-(-4899253066315985342LL)))));
        }
    }
}
