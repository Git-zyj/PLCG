/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180855
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
    var_14 = min((409536410), (var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((var_4) & (-409536413))) | (var_0)))) ? (((((/* implicit */unsigned long long int) var_12)) ^ (var_7))) : (((/* implicit */unsigned long long int) (((~(var_4))) | (max((var_11), (var_8)))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_11)), (2172265096506689424ULL))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) (unsigned short)7078)) : (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)65535))))))) - (((min((var_3), (((/* implicit */unsigned int) var_4)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                arr_13 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3] = var_11;
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) | (((((/* implicit */int) (unsigned short)7078)) ^ (-1836985653)))))) ? (((((/* implicit */unsigned int) var_8)) | (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1689146297U))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((-1833976950) | (var_8)))) : (((var_3) ^ (((/* implicit */unsigned int) var_11))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 567625756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (567625756) : (((/* implicit */int) var_10)))) : (((var_8) / (var_4))));
                arr_18 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))), (((var_11) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                arr_19 [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((var_3) << (((var_12) - (374413158)))))));
                var_20 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_10)))), (((var_4) ^ (var_0)))));
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (var_11)))) || (((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_13)))))))));
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58427)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 2127612610)) ? (((/* implicit */unsigned int) var_4)) : (var_3))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)992))) - ((-(var_3)))))), (((max((7232641473833303170ULL), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) var_0))))));
    var_24 ^= ((/* implicit */unsigned short) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (var_7))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_5))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10989005121426622165ULL))))))));
}
