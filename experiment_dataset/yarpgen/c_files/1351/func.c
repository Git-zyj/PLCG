/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1351
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 743710766U)) || (((/* implicit */_Bool) var_5)))))) ^ ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2610)))))));
                            arr_9 [i_0] [i_2 + 3] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)167);
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) (short)31189)) - (-1930116032))))));
                            var_15 -= ((/* implicit */unsigned int) ((((min((-8477871170414247329LL), (((/* implicit */long long int) (signed char)-121)))) | (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((743710762U), (((/* implicit */unsigned int) (short)-2610))))) ? (max((743710764U), (((/* implicit */unsigned int) (short)2610)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) (unsigned char)119);
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned int) min((6688326536920182703ULL), ((+(((((/* implicit */_Bool) 2832170389U)) ? (((/* implicit */unsigned long long int) 3405293861U)) : (72053195991416832ULL)))))));
                                var_18 -= ((((/* implicit */_Bool) min((((unsigned int) 11769063414568901043ULL)), (4294967295U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13626)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) : (3551256533U)))) : (11769063414568901043ULL));
                                arr_19 [i_6] [8U] [(unsigned short)10] [i_1] [8U] [i_0 + 4] |= ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((unsigned int) (signed char)-127)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2621)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (unsigned char)245)))) : ((+(((/* implicit */int) (unsigned char)218)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned int) (short)22165));
}
