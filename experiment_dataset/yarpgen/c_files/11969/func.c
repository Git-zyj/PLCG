/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11969
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(arr_5 [i_0]))))) << (((var_6) - (975243249)))));
                arr_9 [i_0] [11] [i_0] = ((/* implicit */unsigned short) max((arr_5 [i_0]), (((int) var_9))));
                arr_10 [i_0] [i_1] = ((/* implicit */int) (unsigned short)61387);
                var_10 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)9846)) ? (((/* implicit */int) (unsigned short)52909)) : (((/* implicit */int) var_0)))) / (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1]))))) * (((((/* implicit */_Bool) ((int) var_2))) ? (arr_2 [i_0]) : (((2099888111) ^ (var_6)))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((int) (unsigned short)52909)))) - (min(((~(((/* implicit */int) var_0)))), ((+(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_16 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_3] [(unsigned short)5])) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_7 [i_3] [i_2]))))) ? (arr_6 [i_2]) : (((((/* implicit */int) arr_15 [i_2] [i_2] [(unsigned short)6])) / (-1594808566))))) + (843672254)))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 8; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        {
                            var_12 ^= ((int) var_9);
                            arr_23 [2] [i_4] [i_4] [i_5] = max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (arr_1 [(unsigned short)4]))) * (((/* implicit */int) var_7)))), (((/* implicit */int) var_5)));
                            arr_24 [i_2] [i_2] = ((/* implicit */unsigned short) -1689221468);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] = (((((!(((/* implicit */_Bool) arr_7 [i_6] [i_6])))) ? ((~(((/* implicit */int) (unsigned short)65526)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_2)))))) | (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)53744)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_6] [i_3]))))))));
                            var_13 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)45832)) ? (arr_22 [i_7] [i_3]) : (arr_22 [i_2] [i_3]))));
                            var_14 = ((/* implicit */unsigned short) arr_14 [i_6] [i_7]);
                            arr_32 [i_2] [i_3] [i_6] [i_7] = ((((/* implicit */_Bool) (unsigned short)46337)) ? (((/* implicit */int) (unsigned short)11791)) : (((/* implicit */int) (unsigned short)20165)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)63886)) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))) != (min((((/* implicit */int) (unsigned short)46651)), (var_6)))));
    var_16 &= min(((((-(((/* implicit */int) var_1)))) - (((/* implicit */int) (unsigned short)28882)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((-2099888117) >= (-2099888122)))))));
}
