/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112430
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */short) ((unsigned char) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]));
                            var_11 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4858))) : (arr_4 [(short)4] [i_1]))) << (((((/* implicit */int) var_4)) + (14501))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) (unsigned char)0);
                            var_14 = 3124033568U;
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((7670216794957768603LL), (((/* implicit */long long int) 65528))))) ? (((/* implicit */unsigned long long int) ((1701537228) / (((/* implicit */int) (unsigned short)65533))))) : (max((((/* implicit */unsigned long long int) var_1)), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((950931522), (1410154258)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [(short)11] [i_1] [(_Bool)0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned int) (unsigned char)238)), (var_0))))));
            }
        } 
    } 
    var_15 = (((!(((/* implicit */_Bool) 3124033580U)))) ? (((int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)1024))) && ((!(((/* implicit */_Bool) -65506))))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6])) ? ((-(var_7))) : (((((/* implicit */int) var_2)) / (var_5)))))) ? (17799456094026211406ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)30652)) : (var_7))))));
                var_17 = ((/* implicit */unsigned short) min((3960499105U), (((/* implicit */unsigned int) (unsigned char)251))));
            }
        } 
    } 
}
