/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103279
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26153)) > (((/* implicit */int) (!(((/* implicit */_Bool) ((1274503322) ^ (((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) -1274503323)) ? (-2130537140) : (((/* implicit */int) (_Bool)1)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 21ULL)) ? (8367846507427979243LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((36028797018963967ULL) ^ (((/* implicit */unsigned long long int) 623948425)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) != (21ULL))))))))));
                            var_18 = ((/* implicit */int) min(((!(((/* implicit */_Bool) (-(1274503323)))))), (((((((/* implicit */_Bool) 1274503323)) ? (3320392043773213965ULL) : (((/* implicit */unsigned long long int) 1401279498)))) != (((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (18135891790104907893ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)32739)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [21ULL] [i_2] [i_1] [i_0]))) * (((1318659325U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [4LL] [i_1] = ((/* implicit */unsigned char) -1274503315);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1318659336U)) : (1ULL))))));
                arr_18 [i_4] = ((/* implicit */long long int) ((unsigned short) 1274503331));
            }
        } 
    } 
}
