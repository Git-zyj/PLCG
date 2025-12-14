/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145756
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
    var_19 ^= ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] = ((/* implicit */_Bool) max((max((((/* implicit */short) var_17)), (arr_4 [i_1] [i_1] [i_1]))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)59)) > (((/* implicit */int) (short)-24834)))))));
                            var_20 ^= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)17106))) < (arr_5 [i_0] [(short)5] [(unsigned short)11] [(signed char)20])))))), ((+(((/* implicit */int) (unsigned short)49552))))));
                            arr_10 [(unsigned char)10] [i_1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned char) ((long long int) -4682659628268497443LL));
                        }
                    } 
                } 
                arr_11 [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_1])), ((-(((/* implicit */int) (unsigned short)0))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) var_4))))) < ((~(543674474796625743ULL)))))));
}
