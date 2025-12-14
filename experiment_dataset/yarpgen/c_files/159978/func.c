/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159978
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
    var_16 += ((/* implicit */int) ((unsigned short) var_12));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_13 [(signed char)4] [i_0] [10LL] [10LL] [i_4] [(signed char)4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 65472)))))), (min((((855579970326852929LL) / (((/* implicit */long long int) 174765379)))), (((/* implicit */long long int) (-(-174765360))))))));
                                var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((855579970326852947LL) % (((/* implicit */long long int) 174765358)))))) && ((!((!(((/* implicit */_Bool) -174765380))))))));
                                arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (signed char)127))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)13652)) && (((/* implicit */_Bool) (unsigned short)46833))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) 507904);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((min((((-931050266) & (524224))), (((((/* implicit */int) (signed char)101)) ^ (931050265))))), (((((/* implicit */int) (signed char)-96)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_19 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) max((174765382), (-1)))))), ((!(((/* implicit */_Bool) (signed char)-21))))));
                            var_20 += ((/* implicit */int) (unsigned short)51884);
                            arr_22 [3] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 135107988821114880ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
