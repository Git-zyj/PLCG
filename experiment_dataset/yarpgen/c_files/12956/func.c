/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12956
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
    var_17 = ((var_9) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)139)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) 6162819536881479921LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_21 [(signed char)13] [i_1] [i_5] [i_5] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (15127344395444042488ULL))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) * (15342193087163845933ULL)))))) ? (((long long int) ((((/* implicit */_Bool) 3331141145382101549ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 768)) && (((/* implicit */_Bool) (unsigned char)135))))))));
                                arr_22 [i_5] [i_5] [1] [i_5] [i_5] [i_5] [i_5] = var_10;
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((((_Bool)0) ? (1142808163U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))));
                }
            } 
        } 
    } 
}
