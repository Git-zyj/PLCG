/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155686
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)115)))) / ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)225))))))));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */int) (short)-1)) & (((/* implicit */int) (short)2707)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) 4555111316372511063LL))))))));
                                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)27))));
                                arr_13 [i_0] = ((/* implicit */short) min((14228947114872749203ULL), (((/* implicit */unsigned long long int) min(((unsigned short)13301), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 7856148845003702047LL)) % (10116626317457004424ULL)));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 6597069766656LL))))), ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (min((min((14063846388078361198ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -8105880984368411782LL)) && (((/* implicit */_Bool) (unsigned short)23061)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)31))) >= (-929867786535563939LL))))) : ((~(5359782417907922652LL)))));
}
