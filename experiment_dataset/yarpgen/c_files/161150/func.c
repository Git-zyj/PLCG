/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161150
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
    var_15 = ((/* implicit */_Bool) (signed char)126);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << ((((~(((/* implicit */int) arr_1 [i_0])))) - (24424))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) << ((((((((~(((/* implicit */int) arr_1 [i_0])))) - (24424))) + (51347))) - (21)))))))));
                var_16 = ((/* implicit */short) ((((int) min(((short)31275), (((/* implicit */short) var_13))))) < (((/* implicit */int) (short)31263))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0 + 2])), (14945204334190539197ULL))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_7 [i_3 - 4] [i_3 - 1])) & (((((/* implicit */_Bool) 880983129)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [0] [1LL]))))))));
                            var_18 = ((/* implicit */int) min((var_18), ((~(31)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31255)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (-2538476886214168944LL))))));
                            var_20 = ((/* implicit */signed char) min(((~(((3501539739519012418ULL) >> (((((/* implicit */int) (short)-31255)) + (31277))))))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 += (-(var_6));
}
