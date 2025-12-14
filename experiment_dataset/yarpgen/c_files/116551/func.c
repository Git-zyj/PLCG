/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116551
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
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0 + 2] [2U] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))))), (((/* implicit */unsigned int) ((unsigned char) min((var_11), (var_6)))))));
                            var_12 = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-25008))) < (15LL)))) & ((~(((/* implicit */int) (_Bool)1))))))));
                            var_13 *= (!(((/* implicit */_Bool) max((((var_10) - (var_10))), (((/* implicit */int) ((unsigned char) var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned char) ((var_4) ^ (var_10))));
                            arr_17 [i_0] [i_0] [9U] = ((/* implicit */unsigned int) var_9);
                            arr_18 [i_0] [i_1] [i_1] [(short)1] = min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_7)))))), (((signed char) min((((/* implicit */long long int) (signed char)-7)), (8329855711731269885LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_4);
                                var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_3))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)119), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)29357))))) : (min((7280621704235155868LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 18040343803580903153ULL)) ? (1050919153) : (((/* implicit */int) (_Bool)0))))))))))));
                                var_18 -= ((/* implicit */long long int) min((max((var_6), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)25785))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 4; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_2)))))))));
                                var_20 = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((signed char) 2147483647))) : (max((var_11), (var_6))))), ((~(((/* implicit */int) ((((/* implicit */int) var_1)) == (var_6))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
