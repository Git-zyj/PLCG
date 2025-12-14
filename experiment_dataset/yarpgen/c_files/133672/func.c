/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133672
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
    var_11 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-120))))))))));
    var_12 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9450)) * (((/* implicit */int) (signed char)-102))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)22044)), (var_1))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) / (var_10)))))))));
    var_13 = ((/* implicit */unsigned short) (((-(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)99)))))) & (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)124)) == (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-105)) < (((/* implicit */int) arr_0 [i_3] [i_3 + 3])))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) (unsigned short)39739)))))))));
                                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((max((var_1), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_7)))) * (((/* implicit */int) (_Bool)1)))))));
                            }
                            arr_16 [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (signed char)105)))) > (((/* implicit */int) (unsigned char)156))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
}
