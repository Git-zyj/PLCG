/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142881
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
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 918909072)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((var_2), (((/* implicit */long long int) (unsigned char)32))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (((~(3911601831U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))) / (((/* implicit */int) (unsigned short)20154))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((383365444U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((~(((-4456306927936478662LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65513))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65505)) ? (((/* implicit */int) (short)15026)) : (((/* implicit */int) (signed char)120)))))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9)) - (((/* implicit */int) (short)-5))));
                                var_15 += ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) (signed char)-95);
                    arr_17 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((-4456306927936478651LL) == (((/* implicit */long long int) 2692396984U))))), (-9223372036854775790LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-13404)) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) 2929194804U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                    arr_18 [i_1] |= ((/* implicit */unsigned char) 6377410524826893794ULL);
                    arr_19 [(unsigned short)16] = ((/* implicit */long long int) ((unsigned short) var_2));
                }
            } 
        } 
    } 
}
