/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179566
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)151)) || (((/* implicit */_Bool) arr_7 [i_3] [i_2]))))), ((signed char)-25)))) % (((/* implicit */int) (!(arr_8 [(short)3] [i_2] [i_3])))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_3]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13445)))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (signed char)12))))), (((1180636039875223488ULL) >> (((((/* implicit */int) arr_6 [i_0])) - (10853)))))));
                var_18 = ((/* implicit */unsigned short) (signed char)-25);
                arr_15 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_9 [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((long long int) ((long long int) -6119146639612264590LL))) - (min((min((var_5), (((/* implicit */long long int) (signed char)-22)))), (var_2)))));
    var_20 = ((/* implicit */unsigned long long int) max(((-(var_13))), (((long long int) min(((unsigned short)52090), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))));
    var_21 = ((/* implicit */unsigned short) (_Bool)1);
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((_Bool) var_15)))));
}
