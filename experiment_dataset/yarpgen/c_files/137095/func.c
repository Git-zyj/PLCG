/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137095
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
    var_13 = ((/* implicit */unsigned short) min(((-(((((/* implicit */int) (short)8660)) * (((/* implicit */int) var_5)))))), (((/* implicit */int) (short)-32758))));
    var_14 = ((/* implicit */int) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_0)) && ((_Bool)1)))))), (((((/* implicit */_Bool) ((short) 8591400880354277512LL))) ? (((8591400880354277519LL) | (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) -8275472652152207780LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 2] [i_1 + 1]))) : ((~(arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                            var_15 = min((((/* implicit */long long int) ((arr_7 [i_0] [i_0]) << (((2304717109306851328ULL) - (2304717109306851328ULL)))))), (((((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8591400880354277513LL))) >> ((((+(var_6))) + (3862001364040793010LL))))));
                            var_16 *= ((/* implicit */unsigned short) ((((((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))) / (((/* implicit */int) var_11)))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)13533)) : (((/* implicit */int) var_5)))))) - (13524)))));
                            var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_3))), ((~(((/* implicit */int) arr_0 [i_0] [i_3]))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1 - 1] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (unsigned short)65535)))) > (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))))))) >= (max((min((var_9), (-1210335452291831415LL))), (((/* implicit */long long int) arr_0 [i_4] [i_4]))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(-1584433957)))) <= (var_6)));
                            arr_17 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) (~(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)-32022)) : (((/* implicit */int) arr_2 [i_4])))))));
                            var_20 |= ((/* implicit */unsigned short) 4294967281U);
                            arr_18 [i_4] [i_0] [i_0] = ((/* implicit */int) (unsigned short)65535);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_6);
}
