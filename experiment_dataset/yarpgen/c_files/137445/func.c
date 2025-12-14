/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137445
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
    var_14 = ((/* implicit */int) min((((signed char) ((((/* implicit */int) var_4)) != (((/* implicit */int) (_Bool)1))))), (((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) <= (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) 12059861357676081828ULL))), ((~(6386882716033469788ULL)))));
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0 + 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)15078)) : (((/* implicit */int) var_5)))))) < (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */signed char) 2065800896);
                var_16 = ((/* implicit */signed char) max((max((arr_1 [i_0 - 3]), (min((((/* implicit */int) (signed char)-9)), (arr_1 [i_0 + 1]))))), (((/* implicit */int) max((arr_7 [i_0 - 2] [i_1]), (arr_7 [i_1] [i_0]))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) min((((unsigned int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (short)-15079))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 9540443983096773282ULL)) ? (-1323794783) : (((/* implicit */int) (_Bool)1))))))));
    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) var_1)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)60)))) : (((/* implicit */int) ((signed char) 6386882716033469808ULL))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
}
