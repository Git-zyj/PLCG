/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120450
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0 + 2] = ((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0 - 1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 32505856)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)45))))) ? (max((((/* implicit */unsigned long long int) -2147483644)), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)24474), (((/* implicit */unsigned short) arr_1 [i_0 + 1])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) != (arr_4 [i_3]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24477))) + (arr_9 [(unsigned short)1] [(unsigned short)1]))))))));
                            arr_12 [(short)9] [(short)9] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned short) (~(((((/* implicit */_Bool) 10140475819116091954ULL)) ? (56994704U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
                var_12 *= ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1446683114U)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_3))))) ? (7430587001363016793ULL) : (((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7430587001363016793ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3024219377U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 2504617536991352836LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_15 [i_5])));
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)57), (((/* implicit */signed char) arr_16 [i_4] [(_Bool)1])))))) + (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1270747933U)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)10))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64597))) + (arr_17 [(_Bool)1] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-99)) + (((/* implicit */int) (signed char)-102)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_6)))) >> (((/* implicit */int) (((_Bool)1) && ((!(((/* implicit */_Bool) var_3))))))))))));
}
