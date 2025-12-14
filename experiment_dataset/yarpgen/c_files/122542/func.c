/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122542
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) (short)-1))) ? ((-(arr_10 [i_4] [16LL] [i_3] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)12), (((/* implicit */short) (_Bool)1)))))))), ((-(((unsigned int) (short)12))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_8 [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_16 [i_6 - 1] [i_2] [i_5] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned short) (-(arr_8 [i_0])));
                                arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) (((!(var_8))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)1)))))))) >= (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) var_13))))), (arr_10 [i_0] [i_1] [i_2] [i_5] [i_6] [i_2])))));
                                var_16 -= ((/* implicit */int) (signed char)-115);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) max((6971252708715603337ULL), (((/* implicit */unsigned long long int) (short)12)))))) ? (max((((/* implicit */unsigned long long int) (short)0)), (((((/* implicit */_Bool) (short)-6)) ? (11475491364993948284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22490))))))));
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)52756))));
                    arr_18 [i_0] [i_1] = max((((/* implicit */unsigned long long int) 859241256U)), (6971252708715603339ULL));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)54))) : (var_6)))) ? (((/* implicit */unsigned long long int) var_2)) : ((-(18446744073709551611ULL))))));
    var_20 = ((/* implicit */unsigned int) max((((max((var_4), (((/* implicit */int) (short)0)))) ^ (max((((/* implicit */int) (short)-6)), (-619212369))))), (((((/* implicit */_Bool) max((7303583712467729204ULL), (((/* implicit */unsigned long long int) (short)-23695))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)-23693)) ? (-1844780474) : (((/* implicit */int) (short)-19))))))));
    var_21 = ((/* implicit */short) var_9);
}
