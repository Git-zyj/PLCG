/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160553
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */int) min((max((min((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), ((+(min((arr_3 [i_0] [4U] [i_0]), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)3]))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) -540775388)), (((((/* implicit */_Bool) arr_3 [(signed char)6] [i_1] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)65514)))))))));
                                arr_16 [i_3] [i_4] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_7)), (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)14441))))), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (min((-1638137960875805071LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned short)65497))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_21 = ((/* implicit */long long int) ((arr_19 [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17))) : ((-(4294967295U)))));
        var_22 = ((/* implicit */int) -9223372036854775785LL);
    }
}
