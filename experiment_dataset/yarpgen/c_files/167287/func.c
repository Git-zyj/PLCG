/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167287
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_8 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6862630101415882278LL))))) == (((/* implicit */long long int) ((((/* implicit */int) (signed char)-12)) + (((/* implicit */int) (signed char)-4)))))));
                            var_18 = ((/* implicit */_Bool) min((min((-5440462120150237020LL), (((/* implicit */long long int) (unsigned char)140)))), (((/* implicit */long long int) var_12))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] = ((/* implicit */short) ((var_16) ? (((/* implicit */long long int) ((var_11) ? (((((/* implicit */_Bool) 6862630101415882278LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [i_1 + 1]))))) : ((-(((-1966186827913039573LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-15)))))))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)0)), (-5440462120150237022LL)));
                arr_11 [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_2)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-62)))))))), ((((+(((/* implicit */int) var_2)))) * (((/* implicit */int) max(((signed char)0), ((signed char)-71))))))));
                var_20 += ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */short) var_0)), (min((var_7), (var_1)))));
    var_22 = ((/* implicit */long long int) var_4);
}
