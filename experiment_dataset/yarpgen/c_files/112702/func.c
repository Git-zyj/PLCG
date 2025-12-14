/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112702
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (var_2) : (4294967290U)))))) ? (max((1807086324), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (short)992)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) var_8))))))))));
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_2] [8LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((long long int) var_4)) : (((var_12) / (var_12)))))) ? (((((((/* implicit */_Bool) (short)31710)) ? (7301009466099232349ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_3] [i_0])))) ^ (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) var_14);
                                var_20 |= ((/* implicit */int) (short)-4096);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 5255379734403748606LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (unsigned short)0);
}
