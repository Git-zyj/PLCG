/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17873
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))) ^ (13733556699387134412ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((-1932877219839646709LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-5)) / (((/* implicit */int) (signed char)-22))))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32322)) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)))))));
                                var_22 = (signed char)-82;
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_14)) / (((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_18)), (arr_2 [i_4])))), (((unsigned short) var_12))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */int) (short)32027)) << (((/* implicit */int) (_Bool)1))));
    var_25 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)5));
}
