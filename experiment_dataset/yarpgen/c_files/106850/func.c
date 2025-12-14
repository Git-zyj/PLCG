/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106850
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
    var_14 |= (signed char)-72;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [i_1])))) ? ((+(arr_6 [i_0] [i_1] [i_1]))) : (arr_6 [i_0] [i_1] [i_1])));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) (+(66060288)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_5 [i_1] [6LL])), (var_4)))) == (((/* implicit */int) ((_Bool) var_5)))))))))));
                var_17 = ((/* implicit */signed char) arr_2 [(signed char)5] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (_Bool)1);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned short)37604)) ? (((/* implicit */int) (signed char)71)) : (arr_10 [i_0] [8] [i_3])))));
                            var_20 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) (signed char)-21);
                                var_22 += ((/* implicit */signed char) (+(max((((/* implicit */int) max(((signed char)-1), ((signed char)79)))), ((+(((/* implicit */int) (short)32767))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
